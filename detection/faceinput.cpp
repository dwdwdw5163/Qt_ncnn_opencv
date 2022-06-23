#include "faceinput.h"
#include "ui_faceinput.h"

FaceInput::FaceInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FaceInput)
{
    ui->setupUi(this);

    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(31,35,38, 24));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    ui->widget_2->setStyleSheet("QWidget#widget_2{border-image: url(:/style/images/rect.png);}");
    ui->widget_3->setStyleSheet("QWidget#widget_3{border-image: url(:/style/images/rect.png);}");
}

FaceInput::~FaceInput()
{
    delete ui;
}
