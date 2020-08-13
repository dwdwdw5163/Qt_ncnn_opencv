#include "net.h"
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <cstdio>
#include <ctime>
#include "facedetectcnn.h"
#define DETECT_BUFFER_SIZE 0x20000
using namespace  cv;

static int landmark_detector(ncnn::Net &pfld, cv::Mat &bgr, float * landmarks,  int img_size = 112)
{
    ncnn::Mat out;
    char  input_blob_name[] = "input";
    char  output_blob_name[] = "output";
//    pfld.opt.use_vulkan_compute = true;

    int N = 1;

    ncnn::Mat in = ncnn::Mat::from_pixels_resize(bgr.data, ncnn::Mat::PIXEL_BGR, bgr.cols, bgr.rows, img_size, img_size);
    const float norm_vals[3] = {1 / 255.f, 1 / 255.f, 1 / 255.f};
    in.substract_mean_normalize(0, norm_vals);
    time_t begin_t  = clock();
    for(int i = 0;i < N; i++){
        ncnn::Extractor ex = pfld.create_extractor();
        ex.input(input_blob_name, in);
        ex.extract(output_blob_name, out);
    }
    time_t end_t  = clock();
    double time = (double)(end_t - begin_t) / CLOCKS_PER_SEC / N;
    std::cout << "time = " << time * 1000  << "ms" << std::endl;
    std::cout << "FPS: " << 1 / time  << std::endl;
    for (int j = 0; j < out.w; j++)
    {
        landmarks[j] = out[j];
//        std::cout << j <<" " << landmarks[j] << std::endl;
    }
    return 0;
}

void vis_img(std::vector<float> &landmarks, cv::Mat &img, bool show_img = false){
    int nums = landmarks.size() / 2;
    for(int i = 0; i < nums; i++){
        cv::circle(img, cv::Point(landmarks[i * 2], landmarks[i * 2 + 1]), \
                   1, cv::Scalar(0, 0, 255));
    }
    cv::imwrite("result.png", img);
    if(show_img){
        cv::imshow("img", img);
        cv::waitKey();
        cv::destroyAllWindows();
    }
}
int main(int argc, char** argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s [image path]\n", argv[0]);
        return -1;
    }
    const int num_landmarks = 106 * 2;
    const char * imagepath = argv[1];
    const char * param_path = "../model/pfld-opt.param";
    const char * bin_path = "../model/pfld-opt.bin";
    ncnn::Net pfld;
    pfld.load_param(param_path);
    pfld.load_model(bin_path);

    Mat image = imread(imagepath);
    int ori_w = image.cols;
    int ori_h = image.rows;

    int det_w = 240;
    int det_h = 320;
    Mat det_input;
    if(image.empty())
    {
        fprintf(stderr, "Can not load the image file %s.\n", argv[1]);
        return -1;
    }
    resize(image, det_input, Size(240, 320));
    int * pResults = NULL;
    //pBuffer is used in the detection functions.
    //If you call functions in multiple threads, please create one buffer for each thread!
    unsigned char * pBuffer = (unsigned char *)malloc(DETECT_BUFFER_SIZE);
    if(!pBuffer)
    {
        fprintf(stderr, "Can not alloc buffer.\n");
        return -1;
    }


    ///////////////////////////////////////////
    // CNN face detection
    // Best detection rate
    //////////////////////////////////////////
    //!!! The input image must be a BGR one (three-channel) instead of RGB
    //!!! DO NOT RELEASE pResults !!!
    TickMeter cvtm;
    cvtm.start();

    pResults = facedetect_cnn(pBuffer, (unsigned char*)(det_input.ptr(0)), det_w, det_h, (int)det_input.step);

    cvtm.stop();
    printf("time = %gms\n", cvtm.getTimeMilli());

    printf("%d faces detected.\n", (pResults ? *pResults : 0));
    Mat result_image = image.clone();
    //print the detection results
    for(int i = 0; i < (pResults ? *pResults : 0); i++)
    {
        short * p = ((short*)(pResults+1))+142*i;
        int confidence = p[0];
        int x = p[1];
        int y = p[2];
        int w = p[3];
        int h = p[4];
        int shift = w * 0.1;
        x = (x - shift) < 0 ? 0: x - shift;
        y = (y - shift) < 0 ? 0: y - shift;
        w = w + shift * 2;
        h = h + shift * 2;

        x = int(x  * 1.0 / det_w * ori_w);
        y = int(y  * 1.0 / det_h * ori_h);
        w = int(w * 1.0 / det_w * ori_w);
        h = int(h * 1.0 / det_h * ori_h);
        w = (w > ori_w) ? ori_w : w;
        h = (h > ori_h) ? ori_h : h;

        //show the score of the face. Its range is [0-100]
        char sScore[256];
//        std::cout << sScore << std::endl;
        snprintf(sScore, 256, "%d", confidence);
        if(confidence > 80){
            cv::putText(result_image, sScore, cv::Point(x, y-3), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 1);
            //draw face rectangle
            if(x + w >= ori_w) w = ori_w - x;
            if(y + h >= ori_h) h = ori_h - y;
            rectangle(result_image, Rect(x, y, w, h), Scalar(0, 255, 0), 2);
            cv::Mat face = image(cv::Rect(x,y,w,h));
            cv::resize(face, face, cv::Size(112, 112));
            float landmarks[num_landmarks];
            landmark_detector(pfld, face, landmarks, 112);
            for(int i=0; i < num_landmarks / 2;i++){
                cv::circle(result_image, cv::Point(landmarks[i * 2] * w + x, landmarks[i * 2 + 1] * h + y),
                           2,cv::Scalar(0, 0, 255), -1);
            }
        }

    }
    imshow("result", result_image);

    waitKey();
    destroyAllWindows();
    //release the buffer
    free(pBuffer);

    return 0;
}

