#include "faceinput.h"
#include "ui_faceinput.h"

QDataStream &operator<<(QDataStream &out, const worker_t &worker)
{
    out << (qint32)worker.id << worker.name
        << (qint32)worker.age;
    for(int i=0;i<FEATURE_SIZE;i++){
        out << (float)worker.feature[i];
    }
    return out;
}

QDataStream &operator>>(QDataStream &in, worker_t &worker)
{
    qint32 id,age;
    QString name;
    float fea;

    for(int i=FEATURE_SIZE-1;i>=0;i--){
        in >> fea;
        worker.feature[i] = fea;
    }
    in >> age;
    in >> name;
    in >> id;

    worker.age = age;
    worker.name = name;
    worker.id = id;

    return in;
}

FaceInput::FaceInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FaceInput)
{
    ui->setupUi(this);

    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(31,35,38, 24));
    this->setAutoFillBackground(true);
    this->setPalette(pal);
    ui->widget->setStyleSheet("QWidget#widget{background:  transparent; border-radius: 10px; border: 1px solid gray;}");
    ui->widget_2->setStyleSheet("QWidget#widget_2{border-image: url(:/style/images/rect.png);}");
    ui->widget_3->setStyleSheet("QWidget#widget_3{border-image: url(:/style/images/rect.png);}");

    ui->graphicsView->setScene(new QGraphicsScene(this));
    ui->graphicsView->scene()->addItem(&pixmap);

    ui->label->setStyleSheet("font:18pt;");
    ui->label_2->setStyleSheet("font:18pt;");

    ui->horizontalSlider->setRange(0, 100);
    //警告框使用
    widget = new ModifyUserInfo(this);
    widget->setGeometry(702, 200, 514, 421);
//    widget->show();
    widget->setHidden(true);
}

FaceInput::~FaceInput()
{
    delete ui;
}


void FaceInput::on_pushButton_pressed()
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


    Mat frame;

    const char *model_path = "/home/zhang/Project/Qt_ncnn_opencv/detection/models";
    Recognize recognize(model_path);

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
                cv::Mat ROI(frame, r);
                cv::Mat croppedImage;
                std::vector<float> croppedfea;
                cv::Point org;

                rectangle(frame, r, Scalar(0, 0, 255), 2, 8, 0);

                // Copy the data into new matrix
                ROI.copyTo(croppedImage);

                recognize.start(croppedImage, croppedfea);
                if(isSample){
                    isSample = false;
                    index++;
                    qint32 fea[128];
                    for(int i=0;i<FEATURE_SIZE;i++){
                        fea[i] = *(qint32 *)&croppedfea[i];
                    }
                    worker_t worker = {(qint32)index,QString::fromStdString("test"),18,{0}};
                    worker_t readwork;

                    QFile datafile("/home/zhang/Project/Qt_ncnn_opencv/QT_final/data/file.dat");
                    datafile.open(QIODevice::ReadWrite);
                    QDataStream out(&datafile);   // we will serialize the data into the file
                    out.device()->setTextModeEnabled(false);
                    out << (qint32)index << worker.name
                        << (qint32)worker.age;
//                    for(int i=0;i<FEATURE_SIZE;i++){
//                        out << fea[i];
//                    }
//                    datafile.close();
//                    QFile datafile("/home/zhang/Project/Qt_ncnn_opencv/QT_final/data/file.dat");
//                    datafile.open(QIODevice::ReadOnly);
                    QDataStream in(&datafile);    // read the data serialized from the file
                    qint32 id,age;
                    QString name;
                    qint32 feat;

//                    for(int i=FEATURE_SIZE-1;i>=0;i--){
//                        in >> feat;
//                        readwork.feature[i] = *(float *)&feat;
//                    }

                    in >> age;
                    in >> name;
                    in >> id;

                    readwork.age = age;
                    readwork.name = name;
                    readwork.id = id;

                    qDebug() << readwork.id << readwork.name << readwork.age<< "readonce";


                    datafile.close();

                }
//                float score = finalBbox[i].score;
//                string stringsim = to_string(score);
//                std::cout << score << std::endl;
//                org.x = finalBbox[0].x1;
//                org.y = finalBbox[0].y1;
//                putText(frame,stringsim,org,FONT_HERSHEY_SIMPLEX,1,Scalar(0, 255, 0),2,LINE_AA);



            }


            if(num_box<=0){
                ui->pushButton_2->setDisabled(true);
                ui->pushButton_2->setText("未检测到人脸");
            }
            else{
                ui->pushButton_2->setDisabled(false);
                ui->pushButton_2->setText("采集");

            }
            // Resize image for face detection


//            qDebug("test");
            QImage qimg(frame.data,
                        frame.cols,
                        frame.rows,
                        frame.step,
                        QImage::Format_RGB888);
            pixmap.setPixmap( QPixmap::fromImage(qimg.rgbSwapped()) );
            ui->graphicsView->fitInView(&pixmap, Qt::KeepAspectRatio);
        }
        qApp->processEvents();
        waitKey(10);
    }
}


void FaceInput::on_pushButton_2_clicked()
{
    isSample = true;

}

