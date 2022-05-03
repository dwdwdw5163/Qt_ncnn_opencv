#include "mainwindow.h"
#include "ui_mainwindow.h"


//using namespace cv;
#define MAXFACEOPEN 0 //设置是否开关最大人脸调试，1为开，其它为关

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent* event)
{
    if (video.isOpened())
    {
        QMessageBox::warning(this,
            "Warning",
            "Stop the video before closing the application!");
        event->ignore();
    }
    else
    {
        event->accept();
    }
}

void MainWindow::on_pushButton_pressed()
{
    using namespace cv;

    if(video.isOpened())
    {
        ui->pushButton->setText("Start");
        video.release();
        return;
    }

    bool isCamera;
    int cameraIndex = ui->videoEdit->text().toInt(&isCamera);
    if(isCamera)
    {
        if(!video.open(cameraIndex))
        {
            QMessageBox::critical(this,
                                  "Camera Error",
                                  "Make sure you entered a correct camera index,"
                                  "<br>or that the camera is not being accessed by another program!");
            return;
        }
    }
    else
    {
        if(!video.open(ui->videoEdit->text().trimmed().toStdString()))
        {
            QMessageBox::critical(this,
                                  "Video Error",
                                  "Make sure you entered a correct and supported video file path,"
                                  "<br>or a correct RTSP feed URL!");
            return;
        }
    }

    ui->pushButton->setText("Stop");

    Mat src,frame;
    while(video.isOpened())
    {
        video >> frame;
//        cv::Rect crop_region(0, 0,640, 480);
//        frame=src(crop_region);
        if(!frame.empty())
        {

            const char *model_path = "/home/zhang/Project/Qt_ncnn_opencv/qt_opencv_ncnn/models";
//            MTCNN mtcnn(model_path);
//            mtcnn.SetMinFace(40);

//            clock_t start_time = clock();

//            ncnn::Mat ncnn_img = ncnn::Mat::from_pixels(frame.data, ncnn::Mat::PIXEL_BGR2RGB, frame.cols, frame.rows);
//            std::vector<Bbox> finalBbox;

//            mtcnn.detect(ncnn_img, finalBbox);

//            const int num_box = finalBbox.size();
//            std::vector<cv::Rect> bbox;
//            bbox.resize(num_box);
//            for(int i = 0; i < num_box; i++){
//                bbox[i] = cv::Rect(finalBbox[i].x1, finalBbox[i].y1, finalBbox[i].x2 - finalBbox[i].x1 + 1, finalBbox[i].y2 - finalBbox[i].y1 + 1);
//                QString data = QString::number(finalBbox[i].score);
//                std::cout << "score" << i << ": " ;
//                std::cout << finalBbox[i].score << std::endl;
//                for (int j = 0; j<5; j = j + 1)
//                {
//                    cv::circle(frame, cvPoint(finalBbox[i].ppoint[j], finalBbox[i].ppoint[j + 5]), 2, CV_RGB(0, 255, 0), CV_FILLED);
//                }
//            }
//            for (vector<cv::Rect>::iterator it = bbox.begin(); it != bbox.end(); it++) {
//                rectangle(frame, (*it), Scalar(0, 0, 255), 2, 8, 0);
//            }
//            clock_t finish_time = clock();
//            double total_time = (double)(finish_time - start_time) / CLOCKS_PER_SEC;
//            std::cout << "time" << total_time * 1000 << "ms" << std::endl;
            Recognize recognize(model_path);

            cv::Mat sampleimg = cv::imread("/home/zhang/Project/Qt_ncnn_opencv/qt_opencv_ncnn/sample.jpg", CV_LOAD_IMAGE_COLOR);

            std::vector<float> samplefea;

            clock_t start_time = clock();
            recognize.start(sampleimg, samplefea);

            clock_t finish_time = clock();
//            double total_time = (double)(finish_time - start_time) / CLOCKS_PER_SEC;
//            std::cout << "time" << total_time * 1000 << "ms" << std::endl;

            MTCNN mtcnn(model_path);
            mtcnn.SetMinFace(40);


            ncnn::Mat ncnn_img = ncnn::Mat::from_pixels(frame.data, ncnn::Mat::PIXEL_BGR2RGB, frame.cols, frame.rows);
            std::vector<Bbox> finalBbox;
            mtcnn.detect(ncnn_img, finalBbox);

            const int num_box = finalBbox.size();
            std::vector<cv::Rect> bbox;
            bbox.resize(num_box);

                // for(int i = 0; i < num_box; i++){
                //     bbox[i] = cv::Rect(finalBbox[i].x1, finalBbox[i].y1, finalBbox[i].x2 - finalBbox[i].x1 + 1, finalBbox[i].y2 - finalBbox[i].y1 + 1);

                //     for (int j = 0; j<5; j = j + 1)
                //     {
                //         cv::circle(frame, cvPoint(finalBbox[i].ppoint[j], finalBbox[i].ppoint[j + 5]), 2, CV_RGB(0, 255, 0), CV_FILLED);
                //     }
                // }

                for(int i = 0; i < num_box; i++){
                    cv::Rect r = Rect(finalBbox[0].x1, finalBbox[0].y1, finalBbox[0].x2 - finalBbox[0].x1 + 1, finalBbox[0].y2 - finalBbox[0].y1 + 1);
                    cv::Mat ROI(frame, r);

                    cv::Mat croppedImage;
                    std::vector<float> croppedfea;

                    // Copy the data into new matrix
                    ROI.copyTo(croppedImage);

                    recognize.start(croppedImage, croppedfea);

                    double similar = calculSimilar(samplefea, croppedfea);

                     std::cout << "similarity is : " << similar << std::endl;

                    if (similar > 0.65) {
                        rectangle(frame, r, Scalar(0, 0, 255), 2, 8, 0);
                        ui->result->setText("是本人");
                    } else {
                        for (int j = 0; j<5; j = j + 1)
                        {
                            cv::circle(frame, cvPoint(finalBbox[i].ppoint[j], finalBbox[i].ppoint[j + 5]), 2, CV_RGB(0, 255, 0), CV_FILLED);
                            ui->result->setText("不是本人");
                        }
                    }

                }
                if(num_box==0)
                    ui->result->setText("未检测到人脸");

//                imshow("face_detection", frame);
//                clock_t finish_time = clock();
//                double total_time = (double)(finish_time - start_time) / CLOCKS_PER_SEC;
//                std::cout << "time" << total_time * 1000 << "ms" << std::endl;



            QImage qimg(frame.data,
                        frame.cols,
                        frame.rows,
                        frame.step,
                        QImage::Format_RGB888);
            pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
            ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);
        }
        qApp->processEvents();
    }

    ui->pushButton->setText("Start");
}


