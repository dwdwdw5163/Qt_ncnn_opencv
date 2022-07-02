#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
#include <QFrame>

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>

#include "mtcnn.h"
#include "mobilefacenet.h"
#include "warningwidget.h"

#include <opencv2/core.hpp>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/opencv.h>

#include "sql.h"

namespace Ui {
class MainPage;
}

class MainPage : public QWidget
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = NULL);
    ~MainPage();

private slots:
    void on_pushButton_pressed();

private:
    void initUI();
    void resizeEvent(QResizeEvent*);

private:
    Ui::MainPage *ui;
    WarningWidget *warning;

    cv::VideoCapture video;
    QGraphicsPixmapItem pixmap;
    double threshold = 0.65;
    cv::Mat sampleimg;
    bool isSample = false;
    std::vector<float> samplefea;

    sql *db;
};

#endif // MAINPAGE_H
