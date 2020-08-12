// Created by Xintao on 2020/8/12.

#include "net.h"
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <time.h>
#include "facedetectcnn.h"
#define DETECT_BUFFER_SIZE 0x20000
using namespace  cv;

static int landmark_detector(ncnn::Net &pfld, cv::Mat &bgr, float * landmarks, const char *param_path, const char *bin_path, int img_size = 112)
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
//        ex.set_num_threads(4);
        ex.input(input_blob_name, in);
        ex.extract(output_blob_name, out);
    }
    time_t end_t  = clock();
//    double time = (double)(end_t - begin_t) / CLOCKS_PER_SEC / N;
//    std::cout << "time = " << time * 1000  << "ms" << std::endl;
//    std::cout << "FPS: " << 1 / time  << std::endl;
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
         fprintf(stderr, "Usage: %s [video path]\n", argv[0]);
         return -1;
     }
    const int num_landmarks = 106 * 2;
    const char * video_path = argv[1];
    const char * param_path = "../pfld-opt.param";
    const char * bin_path = "../pfld-opt.bin";
    ncnn::Net pfld;
    pfld.load_param(param_path);
    pfld.load_model(bin_path);

    cv::VideoCapture cap(video_path);
    if(!cap.isOpened()){
        std::cout << "video cant be read" << std::endl;
    }
    int ori_w = cap.get(cv::CAP_PROP_FRAME_WIDTH);//帧宽度
    int ori_h = cap.get(cv::CAP_PROP_FRAME_HEIGHT);//帧高度;
    int frameRate = cap.get(cv::CAP_PROP_FPS);
    int totalFrames = cap.get(cv::CAP_PROP_FRAME_COUNT);
    std::cout << "all video frames is " << totalFrames << endl;
    cv::Mat frame;
    cv::VideoWriter out_video;
    out_video.open("output001.avi",  cv::VideoWriter::fourcc('M', 'J', 'P', 'G'),
                   frameRate,cv::Size(ori_w, ori_h), true);
    int * pResults = NULL;
    //pBuffer is used in the detection functions.
    //If you call functions in multiple threads, please create one buffer for each thread!
    unsigned char * pBuffer = (unsigned char *)malloc(DETECT_BUFFER_SIZE);
    if(!pBuffer)
    {
        fprintf(stderr, "Can not alloc buffer.\n");
        return -1;
    }
    int det_w = 320;
    int det_h = 240;
    float landmarks[num_landmarks];
    Mat det_input;
    TickMeter cvtm;
    cvtm.start();
    while(1){
        TickMeter timer;
        timer.start();
        cap >> frame;
        if(frame.empty()) break;
        resize(frame, det_input, Size(det_w, det_h));
        TickMeter detect_timer;
        detect_timer.start();
        pResults = facedetect_cnn(pBuffer, (unsigned char*)(det_input.ptr(0)), det_w, det_h, (int)det_input.step);
        detect_timer.stop();
        Mat result_image = frame.clone();
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
//            std::cout << x << " " << y << " " << w << " " << h << std::endl;
            //show the score of the face. Its range is [0-100]
            char sScore[256];
            snprintf(sScore, 256, "%d", confidence);
            if(confidence > 80){
                cv::putText(result_image, sScore, cv::Point(x, y-3), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 1);
                //draw face rectangle
                if(x + w >= ori_w) w = ori_w - x;
                if(y + h >= ori_h) h = ori_h - y;
                rectangle(result_image, Rect(x, y, w, h), Scalar(0, 255, 0), 2);
                cv::Mat face = frame(cv::Rect(x, y, w ,h));
                cv::resize(face, face, cv::Size(112, 112));
                TickMeter ld_timer;
                ld_timer.start();
                landmark_detector(pfld, face, landmarks, param_path, bin_path, 112);
                ld_timer.stop();
                for(int i = 0; i < num_landmarks / 2; i++){
                    cv::circle(result_image, cv::Point(landmarks[i * 2] * w + x, landmarks[i * 2 + 1] * h + y),
                               2,cv::Scalar(0, 0, 255), -1);
                }
            }
        }
        timer.stop();
        string fps = "FPS: " + to_string(1000 / timer.getTimeMilli());
        cv::putText(result_image, fps, cv::Point(20, 20), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 255), 2);
        cv::imshow("img", result_image);
        cv::waitKey(1);
        out_video.write(result_image);
    }
    out_video.release();
    cvtm.stop();
    printf("total time = %gs\n", cvtm.getTimeSec());
    printf("average time = %gms\n", cvtm.getTimeMilli() / totalFrames);
    //release the buffer
    free(pBuffer);

    return 0;
}

