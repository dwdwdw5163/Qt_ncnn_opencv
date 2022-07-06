#include "history.h"
#include "ui_history.h"

#include <QStandardItemModel>
#include <QCheckBox>
#include <QTextCharFormat>
#include <QCalendarWidget>
#include <QHeaderView>

#include "customsqltablemodel.h"

History::History(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    QPalette pal(this->palette());
    pal.setColor(QPalette::Window, QColor(31,35,38, 24));
    this->setAutoFillBackground(true);
    this->setPalette(pal);

//    QString dbpath = "/home/zhang/Project/Qt_ncnn_opencv/QT_final/database/workers.db";
//    db = new sql(dbpath);

    model = new CustomSqlTableModel();
    model->setTable("HISTORY");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, tr("MISBEHAVIOR"));


    QPalette palette = ui->tableView->palette();
    palette.setBrush(QPalette::Base, Qt::transparent);
    ui->tableView->setPalette(palette);
    ui->tableView->setAttribute(Qt::WA_OpaquePaintEvent, false);

    QFont font;
    font.setPixelSize(100);
    ui->tableView->setFont(font);
    ui->tableView->setStyleSheet("color:white;");
    QHeaderView *verticalHeader = ui->tableView->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(400);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();

}

History::~History()
{
    delete ui;
}



void History::on_pushButton_clicked()
{
    model = new CustomSqlTableModel();
    model->setTable("HISTORY");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, tr("MISBEHAVIOR"));


    QPalette palette = ui->tableView->palette();
    palette.setBrush(QPalette::Base, Qt::transparent);
    ui->tableView->setPalette(palette);
    ui->tableView->setAttribute(Qt::WA_OpaquePaintEvent, false);

    QFont font;
    font.setPixelSize(100);
    ui->tableView->setFont(font);
    ui->tableView->setStyleSheet("color:white;");
    QHeaderView *verticalHeader = ui->tableView->verticalHeader();
    verticalHeader->setSectionResizeMode(QHeaderView::Fixed);
    verticalHeader->setDefaultSectionSize(400);
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}

