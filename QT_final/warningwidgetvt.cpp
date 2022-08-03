#include "warningwidgetvt.h"
#include "ui_warningwidgetvt.h"

WarningWidgetVT::WarningWidgetVT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WarningWidgetVT)
{
    ui->setupUi(this);
}

WarningWidgetVT::~WarningWidgetVT()
{
    delete ui;
}
