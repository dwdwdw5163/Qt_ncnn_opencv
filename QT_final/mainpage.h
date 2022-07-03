﻿#ifndef MAINPAGE_H
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

#include <QtCharts>

//FSM
enum{
    RECOGNIZE,
    DETECTION
};




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


    int state;

    std::vector<double> eye_blink;
    int num_blink = 0;

    int noFace_count = 0;


    QLineSeries *series_0 = new QLineSeries();
    QLineSeries *series_1 = new QLineSeries();
    QLineSeries *series_2 = new QLineSeries();

    QChart *chart = new QChart();  //创建QChart实例,为图表框架,相当图画笔
    int x_index = 0;

};

#endif // MAINPAGE_H
