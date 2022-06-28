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
    //日历周末颜色
    ui->dateEdit_2->setCalendarPopup(true);
    ui->dateEdit->setCalendarPopup(true);
    QTextCharFormat format = ui->dateEdit_2->calendarWidget()->weekdayTextFormat(Qt::Saturday);
    format.setForeground(QBrush(Qt::white, Qt::SolidPattern));
    ui->dateEdit_2->calendarWidget()->setWeekdayTextFormat(Qt::Saturday, format);
    ui->dateEdit_2->calendarWidget()->setWeekdayTextFormat(Qt::Sunday,format);
    ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Saturday, format);
    ui->dateEdit->calendarWidget()->setWeekdayTextFormat(Qt::Sunday,format);

    //不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //不可选中
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
    //有多少列
    ui->tableWidget->setColumnCount(5);
    //表头都不显示
    ui->tableWidget->horizontalHeader()->setVisible(false);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //设置每行高度
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(117);
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //第一列和第二列的宽度小一点
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(0, 200);
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(1, 200);
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::Fixed);
    //ui->tableWidget->horizontalHeader()->setResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setColumnWidth(2, 650);
    ui->tableWidget->setColumnWidth(3, 650);
    ui->tableWidget->setColumnWidth(4, 200);
    //用第一行作为表头
    ui->tableWidget->insertRow(0);
    ui->tableWidget->setRowHeight(0, 60);
    QWidget *widget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout(widget);
    QCheckBox *checkBox = new QCheckBox();
    layout->addStretch();
    layout->addWidget(checkBox);
    layout->addStretch();
    ui->tableWidget->setCellWidget(0, 0, widget);

    ui->tableWidget->setItem(0, 0, new QTableWidgetItem(""));
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("ID"));
    ui->tableWidget->setItem(0, 2, new QTableWidgetItem("违规行为图片"));
    ui->tableWidget->setItem(0, 3, new QTableWidgetItem("违规行为信息"));
    ui->tableWidget->setItem(0, 4, new QTableWidgetItem("操作"));
    //设置一下表头颜色
    for(int i = 0; i < ui->tableWidget->columnCount(); i++)
    {
        QTableWidgetItem *item = ui->tableWidget->item(0, i);
        if(item != NULL)
        {
            item->setBackground(QColor(39,41,44,150));
        }
    }

    for(int i = 0; i < 20; i++)
    {
        ui->tableWidget->insertRow(i+1);

        QWidget *widget1 = new QWidget();
        QHBoxLayout *layout1 = new QHBoxLayout(widget1);
        QCheckBox *checkBox = new QCheckBox();
        layout1->addStretch();
        layout1->addWidget(checkBox);
        layout1->addStretch();
        ui->tableWidget->setCellWidget(i+1, 0, widget1);


        QWidget *widget = new QWidget();
        QHBoxLayout *layout = new QHBoxLayout(widget);
        QPushButton *button = new QPushButton();
        button->setIconSize(QSize(40,40));
        button->setIcon(QIcon(":/icon/images/delete.png"));

        layout->addWidget(button);
        button->setFixedSize(70, 55);
        ui->tableWidget->setCellWidget(i+1, 4, widget);
    }

    for (int i=0;i<ui->tableWidget->rowCount();i++)
    {
       for (int j=0;j<ui->tableWidget->columnCount();j++)
       {
           if(ui->tableWidget->item(i,j) != NULL)
           {
                ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
           }

       }
    }
}

History::~History()
{
    delete ui;
}
