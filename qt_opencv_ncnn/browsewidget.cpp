#include "browsewidget.h"
#include "ui_browsewidget.h"

BrowseWidget::BrowseWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BrowseWidget)
{
    ui->setupUi(this);
}

BrowseWidget::~BrowseWidget()
{
    delete ui;
}
