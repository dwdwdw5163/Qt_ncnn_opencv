#include "net.h"
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <time.h>
#include <vector>

static int landmark_detector(cv::Mat bgr, std::vector<float>& landmarks, const char *param_path, const char *bin_path, int img_size = 112)
{
    ncnn::Net pfld;
    ncnn::Mat out;
//    pfld.opt.use_vulkan_compute = true;
    pfld.load_param(param_path);
    pfld.load_model(bin_path);

    int N = 100;
    // warm up
    for(int i = 0;i < 8; i++){
        ncnn::Mat in = ncnn::Mat::from_pixels_resize(bgr.data, ncnn::Mat::PIXEL_BGR, bgr.cols, bgr.rows, img_size, img_size);
        const float norm_vals[3] = {1 / 255.f, 1 / 255.f, 1 / 255.f};
        in.substract_mean_normalize(0, norm_vals);
        ncnn::Extractor ex = pfld.create_extractor();
        ex.input("input_1", in);
        ex.extract("415", out);
    }

    ncnn::Mat in = ncnn::Mat::from_pixels_resize(bgr.data, ncnn::Mat::PIXEL_BGR, bgr.cols, bgr.rows, img_size, img_size);
    const float norm_vals[3] = {1 / 255.f, 1 / 255.f, 1 / 255.f};
    in.substract_mean_normalize(0, norm_vals);
    time_t begin_t  = clock();
    for(int i = 0;i < N; i++){
        ncnn::Extractor ex = pfld.create_extractor();
        ex.input("input_1", in);
        ex.extract("415", out);
    }
    time_t end_t  = clock();
    double time = (double)(end_t - begin_t) / CLOCKS_PER_SEC / N;
    std::cout << "time: " << time  <<"s" << std::endl;
    std::cout << "FPS: " << 1 / time  << std::endl;
    landmarks.resize(out.w);
    for (int j = 0; j < out.w; j++)
    {
        landmarks[j] = out[j] * img_size;
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
        fprintf(stderr, "Usage: %s [imagepath]\n", argv[0]);
        return -1;
    }
    const char * imagepath = argv[1];
    const char * param_path = "../pfld-opt.param";
    const char * bin_path = "../pfld-opt.bin";
    cv::Mat m = cv::imread(imagepath, 1);
    if (m.empty())
    {
        fprintf(stderr, "cv::imread %s failed\n", imagepath);
        return -1;
    }

    std::vector<float> landmarks;
    landmark_detector(m, landmarks, param_path, bin_path, 112);
    vis_img(landmarks, m, false);
    return 0;
}
