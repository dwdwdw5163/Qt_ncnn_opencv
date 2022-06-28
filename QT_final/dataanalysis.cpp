#include "dataanalysis.h"
#include "ui_dataanalysis.h"
#include <QTextCharFormat>
#include <QCalendarWidget>
DataAnalysis::DataAnalysis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataAnalysis)
{
    ui->setupUi(this);
    ui->widget->setStyleSheet("QWidget#widget{background-color:  rgba(33,37,43,150); border-radius: 10px; border: 1px solid gray;}");
    ui->widget_3->setStyleSheet("QWidget#widget_3{background-color:  rgba(33,37,43,150); border-radius: 10px; border: 1px solid gray;}");
    ui->widget_4->setStyleSheet("QWidget#widget_4{background-color:  rgba(33,37,43,150); border-radius: 10px; border: 1px solid gray;}");
    //日历周末颜色
    ui->dateEdit_2->setCalendarPopup(true);
    ui->dateEdit->setCalendarPopup(true);
    QTextCharFormat format = ui->dateEdit_2->calendarWidget()->weekdayTextFormat(Qt::Saturday);
    format.setForeground(QBrush(Qt::white, Qt::SolidPattern));
    ui->dateEdit_2->calendarWidget()->setWeekdayTextFormat(Qt::Saturday, format);
    ui->dateEdit_2->calendarWidget()->setWeekdayTextFormat(Qt::Sunday,format);
    ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Saturday, format);
    ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Sunday,format);
    ui->label_3->setStyleSheet("font: normal bold 20px ;");
    ui->label_4->setStyleSheet("font: normal bold 20px ;");
    ui->label_2->setStyleSheet("font: normal bold 20px ;");
}

DataAnalysis::~DataAnalysis()
{
    delete ui;
}
