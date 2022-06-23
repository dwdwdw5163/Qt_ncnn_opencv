#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include <QFrame>
#include <QVideoWidget>

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <QCamera>
#include <QMediaPlayer>

#include "mtcnn.h"
#include "mobilefacenet.h"
#include <opencv2/core.hpp>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include <dlib/opencv.h>



namespace Ui {
class MainPage;
}

class MainPage : public QWidget
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();

private slots:
    void on_pushButton_pressed();

private:
    void initUI();
    void resizeEvent(QResizeEvent*);

private:
    Ui::MainPage *ui;

    cv::VideoCapture video;
    QGraphicsPixmapItem pixmap;
    double threshold = 0.65;
    cv::Mat sampleimg;
    bool isSample = false;
    std::vector<float> samplefea;
};

#endif // MAINPAGE_H
