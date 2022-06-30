#ifndef FACEINPUT_H
#define FACEINPUT_H

#include <QWidget>
#include <QVideoWidget>

#include <QMainWindow>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPixmap>
#include <QCloseEvent>
#include <QMessageBox>
#include <QtCharts>

#include "mtcnn.h"
#include "mobilefacenet.h"
#include "warningwidget.h"

#include <opencv2/core.hpp>
#include "modifyuserinfo.h"
#include "dataio.h"

namespace Ui {
class FaceInput;
}

class FaceInput : public QWidget
{
    Q_OBJECT

public:
    explicit FaceInput(QWidget *parent = NULL);
    ~FaceInput();

private slots:

    void on_pushButton_pressed();

    void on_pushButton_2_clicked();

private:
    Ui::FaceInput *ui;
    ModifyUserInfo *widget;
    cv::VideoCapture video;

    bool isSample = false;
    int index = 0;


    QVector<worker_t> workers;
    QGraphicsPixmapItem pixmap;

};

#endif // FACEINPUT_H
