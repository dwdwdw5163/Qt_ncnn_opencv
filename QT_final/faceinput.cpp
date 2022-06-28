#include "faceinput.h"
#include "ui_faceinput.h"
#include "modifyuserinfo.h"
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

    ui->label->setStyleSheet("font:18pt;");
    ui->label_2->setStyleSheet("font:18pt;");

    ui->horizontalSlider->setRange(0, 100);
    //警告框使用
    ModifyUserInfo *widget = new ModifyUserInfo(this);
    widget->setGeometry(702, 200, 514, 421);
    widget->show();
}

FaceInput::~FaceInput()
{
    delete ui;
}

