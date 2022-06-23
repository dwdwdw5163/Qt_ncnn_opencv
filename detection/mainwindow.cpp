#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(1280, 720);

    this->setStyleSheet("QMainWindow#MainWindow{border-image: url(:/style/images/BackGround.jpg);}");
    ui->topWidget->setStyleSheet("QWidget#topWidget{border-image: url(:/style/images/top.jpg);}");
    ui->tabWidget->setStyleSheet("QTabWidget:pane{border-top:0px solid #e8f3f9;background:  transparent; }");

    QPalette pal2(ui->centralwidget->palette());
    pal2.setColor(QPalette::Window, QColor(31,35,38, 24));
    ui->centralwidget->setAutoFillBackground(true);
    ui->centralwidget->setPalette(pal2);
    //菜单按钮是透明的
    ui->pushButton->setStyleSheet("background:  transparent;");
    //中间的标题样式
    //全局字体加粗
    QFont font  = ui->label->font();
    font.setPointSize(16);
    font.setWeight(QFont::Weight::ExtraLight);
    ui->label->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

