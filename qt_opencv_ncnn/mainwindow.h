#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include <opencv2/core.hpp>
#include "browsewidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_pressed();

    void on_threshold_valueChanged(int arg1);

    void on_pushButton_2_clicked();

    void on_brobtn_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsPixmapItem pixmap;
    cv::VideoCapture video;
    double threshold = 0.65;
    cv::Mat sampleimg;
    bool isSample = false;
    std::vector<float> samplefea;
    cv::Mat eye_prev;
};


#endif // MAINWINDOW_H
