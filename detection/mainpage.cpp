#include "mainpage.h"
#include "ui_mainpage.h"

#include <QPainter>
#include <QDebug>
#include <QRect>
#include <QGraphicsOpacityEffect>

#define SKIP_FRAMES 2

void draw_polyline(cv::Mat &img, const dlib::full_object_detection& d, const int start, const int end, bool isClosed = false)
{
    std::vector <cv::Point> points;
    for (int i = start; i <= end; ++i)
    {
        points.push_back(cv::Point(d.part(i).x(), d.part(i).y()));
    }
    cv::polylines(img, points, isClosed, cv::Scalar(255, 0, 0), 2, 16);

}

void render_face(cv::Mat &img, const dlib::full_object_detection& d)
{
    DLIB_CASSERT
    (
        d.num_parts() == 68,
        "\n\t Invalid inputs were given to this function. "
        << "\n\t d.num_parts():  " << d.num_parts()
    );

//    draw_polyline(img, d, 0, 16);           // Jaw line
//    draw_polyline(img, d, 17, 21);          // Left eyebrow
//    draw_polyline(img, d, 22, 26);          // Right eyebrow
//    draw_polyline(img, d, 27, 30);          // Nose bridge
//    draw_polyline(img, d, 30, 35, true);    // Lower nose
    draw_polyline(img, d, 36, 41, true);    // Left eye
    draw_polyline(img, d, 42, 47, true);    // Right Eye
    draw_polyline(img, d, 48, 59, true);    // Outer lip
    draw_polyline(img, d, 60, 67, true);    // Inner lip

}


MainPage::MainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    initUI();

}

MainPage::~MainPage()
{
    delete ui;
}

void MainPage::initUI()
{
    qDebug()<<"init ui";
    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(31,35,38, 24));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    ui->widget_4->setStyleSheet("border-image: url(:/style/images/rect.png);");
    ui->widget_5->setStyleSheet("border-image: url(:/style/images/rect.png);");
    ui->videoWidget->setStyleSheet("border-image: url(:/style/images/rect.png);");

    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);

}

void MainPage::on_pushButton_pressed()
{
    using namespace cv;
    if(video.isOpened()){
        ui->pushButton->setText("打开摄像头");
        video.release();
        return;
    }

    if(!video.open(0)){
        QMessageBox::critical(this,"Camera Error",
            "Make sure you entered a correct camera index,"
            "<br>or that the camera is not being accessed by another program!");
        return;
    }
    ui->pushButton->setText("关闭摄像头");
    Mat frame,img_small;

    //dlib
    const char *landmark_model = "/home/zhang/Project/Qt_ncnn_opencv/detection/shape_predictor_68_face_landmarks.dat";
    dlib::shape_predictor pose_model;
    dlib::deserialize(landmark_model) >> pose_model;

    //初始化model & facenet
    const char *model_path = "/home/zhang/Project/Qt_ncnn_opencv/detection/models";
    Recognize recognize(model_path);
    sampleimg = cv::imread("/home/zhang/Project/Qt_ncnn_opencv/detection/sample.jpg", CV_LOAD_IMAGE_COLOR);
    recognize.start(sampleimg, samplefea);



    int count = 0;
    std::vector<dlib::rectangle> faces;

    while(video.isOpened())
    {
        video >> frame;

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
                cv::Rect r = Rect(finalBbox[0].x1, finalBbox[0].y1,  finalBbox[0].x2 - finalBbox[0].x1, finalBbox[0].y2 - finalBbox[0].y1);

                dlib::rectangle R(  (long)(finalBbox[0].x1),
                                    (long)(finalBbox[0].y1),
                                    (long)(finalBbox[0].x2),
                                    (long)(finalBbox[0].y2)
                );

//                cv::Mat ROI(frame, r);
//                cv::Point org;

                dlib::cv_image<dlib::bgr_pixel> dimg(frame);


                std::vector<dlib::full_object_detection> shapes;
                // Landmark detection on full sized image
                dlib::full_object_detection shape = pose_model(dimg,R);
                shapes.push_back(shape);

                render_face(frame, shape);

                rectangle(frame, r, Scalar(0, 255, 0), 2, 8, 0);




//                cv::Mat croppedImage;
//                std::vector<float> croppedfea;

//                // Copy the data into new matrix
//                ROI.copyTo(croppedImage);

//                recognize.start(croppedImage, croppedfea);

//                if(isSample){
//                    samplefea = croppedfea;
//                    isSample = false;
//                }

//                double similar = calculSimilar(samplefea, croppedfea);
//                string stringsim = to_string(similar);
//                if (similar > threshold) {
//                    rectangle(frame, r, Scalar(0, 255, 0), 2, 8, 0);
//                    org.x = finalBbox[0].x1;
//                    org.y = finalBbox[0].y1;
//                    putText(frame,"Pass",org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 255, 0),2,LINE_AA);
//                    org.x = finalBbox[0].x1;
//                    org.y = finalBbox[0].y2;
//                    putText(frame,stringsim,org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 255, 0),2,LINE_AA);

//                }
//                else {
//                    rectangle(frame, r, Scalar(0, 0, 255), 2, 8, 0);
//                    org.x = finalBbox[0].x1;
//                    org.y = finalBbox[0].y1;
//                    putText(frame,"prohibit",org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 0, 255),2,LINE_AA);

//                }

            }
            if(num_box==0){

            }

            // Resize image for face detection



            QImage qimg(frame.data,
                        frame.cols,
                        frame.rows,
                        frame.step,
                        QImage::Format_RGB888);
            pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
            ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);
        }
        qApp->processEvents();
//        waitKey(5);
    }

}

void MainPage::resizeEvent(QResizeEvent*)
{
    QRect rect;
    rect = ui->videoWidget->geometry();
    ui->graphicsView->setGeometry(rect.x()-20,rect.y()-54,rect.width(),rect.height());

}
