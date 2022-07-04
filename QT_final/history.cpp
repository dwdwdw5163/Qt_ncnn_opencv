#include "history.h"
#include "ui_history.h"

#include <QStandardItemModel>
#include <QCheckBox>
#include <QTextCharFormat>
#include <QCalendarWidget>
#include <QHeaderView>
History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(31,35,38, 24));
    this->setAutoFillBackground(true);
    this->setPalette(pal);



}

History::~History()
{
    delete ui;
}
