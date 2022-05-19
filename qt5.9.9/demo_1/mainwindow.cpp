#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mywindow.h"
#include <QApplication>
#include <QFileDialog>
#include <QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_clicked()
{
    MyWindow *w_ = new MyWindow;
    QString fileFull;
//    fileFull = QFileDialog::getOpenFileName(w_,tr("file list"),"/",tr("text(*.txt)"));
    fileFull = QFileDialog::getOpenFileName(w_,tr("file list"),"/");

    this->ui->lineEdit->setText(fileFull);
}
