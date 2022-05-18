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

    //初始化facenet
    const char *model_path = "/home/zhang/Project/Qt_ncnn_opencv/qt_opencv_ncnn/models";
    Recognize recognize(model_path);
    sampleimg = cv::imread("/home/zhang/Project/Qt_ncnn_opencv/qt_opencv_ncnn/sample.jpg", CV_LOAD_IMAGE_COLOR);
    recognize.start(sampleimg, samplefea);


    //眨眼检测
//    Mat framePro,eyeframe,dframe;
//    bool flag = false;
    cv::Mat eye_roi;
    cv::Mat eye_gray;
    cv::Rect eye;
    double x_eye;
    double y_eye;

    while(video.isOpened())
    {
        video >> frame;
//        cv::Rect crop_region(0, 0,640, 480);
//        frame=src(crop_region);
        if(!frame.empty())
        {

            MTCNN mtcnn(model_path);
            mtcnn.SetMinFace(40);

            ncnn::Mat ncnn_img = ncnn::Mat::from_pixels(frame.data, ncnn::Mat::PIXEL_BGR2RGB, frame.cols, frame.rows);
            std::vector<Bbox> finalBbox;
            mtcnn.detect(ncnn_img, finalBbox);

            const int num_box = finalBbox.size();
            std::vector<cv::Rect> bbox;
            bbox.resize(num_box);


            for(int i = 0; i < num_box; i++){
                cv::Rect r = Rect(finalBbox[0].x1, finalBbox[0].y1, finalBbox[0].x2 - finalBbox[0].x1 + 1, finalBbox[0].y2 - finalBbox[0].y1 + 1);
                cv::Mat ROI(frame, r);
                cv::Point org;


                cv::Mat croppedImage;
                std::vector<float> croppedfea;

                // Copy the data into new matrix
                ROI.copyTo(croppedImage);

                recognize.start(croppedImage, croppedfea);

                if(isSample){
                    samplefea = croppedfea;
                    isSample = false;
                }

                double similar = calculSimilar(samplefea, croppedfea);

//                std::cout << "threshold is : " << threshold << std::endl;
                string stringsim = to_string(similar);
                if (similar > threshold) {
                    rectangle(frame, r, Scalar(0, 255, 0), 2, 8, 0);
                    org.x = finalBbox[0].x1;
                    org.y = finalBbox[0].y1;
                    putText(frame,"Pass",org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 255, 0),2,LINE_AA);
                    org.x = finalBbox[0].x1;
                    org.y = finalBbox[0].y2;
                    putText(frame,stringsim,org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 255, 0),2,LINE_AA);
//                    ui->result->setText("是本人");

//                    for (int j = 0; j<2; j = j + 1)
//                    {
//                        cv::circle(frame, cvPoint(finalBbox[i].ppoint[j], finalBbox[i].ppoint[j + 5]), 2, CV_RGB(0, 255, 0), CV_FILLED);
//                        double x_eye = MAX(finalBbox[i].ppoint[j] - 16,0);
//                        double y_eye = MAX(finalBbox[i].ppoint[j + 5] - 8,0);
//                        cv::rectangle(frame, Rect(x_eye, y_eye,32,16), Scalar(0, 255, 0), 2, 8, 0);
//                    }
                    x_eye = finalBbox[i].ppoint[1] - 8;
                    y_eye = finalBbox[i].ppoint[6] - 8;
                    if(x_eye>0 && x_eye<640 && y_eye>0 && y_eye<480){
                        cv::circle(frame, cvPoint(finalBbox[i].ppoint[1], finalBbox[i].ppoint[1 + 5]), 2, CV_RGB(0, 255, 0), CV_FILLED);
                        eye = Rect(x_eye, y_eye,16,16);
                        eye_roi = frame(eye);
                        Scalar m = cv::mean(eye_roi);
                        std::cout << "mean is : " << m[0] << " : "<< m[1] << " : "<< m[2] << std::endl;
                        if(m[0] > 129)
                            ui->result->setText("闭眼");
                        else
                            ui->result->setText("睁眼");
                    }
                }
                else {
                    rectangle(frame, r, Scalar(0, 0, 255), 2, 8, 0);
                    org.x = finalBbox[0].x1;
                    org.y = finalBbox[0].y1;
                    putText(frame,"prohibit",org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 0, 255),2,LINE_AA);
                    ui->result->setText("不是本人");

                }

            }
            if(num_box==0)
                ui->result->setText("未检测到人脸");


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



void MainWindow::on_threshold_valueChanged(int arg1)
{
    threshold = arg1/100.0;
    if(threshold < 0)
        threshold = 0;
    if(threshold > 0.99)
        threshold = 0.99;
}


void MainWindow::on_pushButton_2_clicked()
{
    isSample = true;
}

