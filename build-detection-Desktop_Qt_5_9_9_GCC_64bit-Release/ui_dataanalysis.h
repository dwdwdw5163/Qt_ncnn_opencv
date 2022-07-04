/********************************************************************************
** Form generated from reading UI file 'dataanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAANALYSIS_H
#define UI_DATAANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataAnalysis
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateEdit_2;
    QLabel *label;
    QDateEdit *dateEdit;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QWidget *widget_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QWidget *widget_5;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DataAnalysis)
    {
        if (DataAnalysis->objectName().isEmpty())
            DataAnalysis->setObjectName(QStringLiteral("DataAnalysis"));
        DataAnalysis->resize(1190, 696);
        verticalLayout = new QVBoxLayout(DataAnalysis);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(DataAnalysis);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(174, 65));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dateEdit_2 = new QDateEdit(DataAnalysis);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit_2->sizePolicy().hasHeightForWidth());
        dateEdit_2->setSizePolicy(sizePolicy);
        dateEdit_2->setMinimumSize(QSize(341, 60));

        horizontalLayout->addWidget(dateEdit_2);

        label = new QLabel(DataAnalysis);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(94, 94, 94);"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(DataAnalysis);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setMinimumSize(QSize(341, 60));

        horizontalLayout->addWidget(dateEdit);

        pushButton_2 = new QPushButton(DataAnalysis);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(151, 65));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_3 = new QWidget(DataAnalysis);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(widget_2);


        gridLayout->addWidget(widget_3, 0, 0, 2, 1);

        widget = new QWidget(DataAnalysis);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignTop);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(widget_5);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        widget_4 = new QWidget(DataAnalysis);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 100));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 50, 20, 20);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);

        retranslateUi(DataAnalysis);

        QMetaObject::connectSlotsByName(DataAnalysis);
    } // setupUi

    void retranslateUi(QWidget *DataAnalysis)
    {
        DataAnalysis->setWindowTitle(QApplication::translate("DataAnalysis", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DataAnalysis", "\347\224\250\346\210\267\351\200\211\346\213\251", Q_NULLPTR));
        label->setText(QApplication::translate("DataAnalysis", "\342\200\224", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DataAnalysis", "\346\237\245\350\257\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("DataAnalysis", "xx.xx.xx-xx.xx.xx\345\220\204\344\270\215\350\247\204\350\214\203\350\241\214\344\270\272\346\254\241\346\225\260\347\273\237\350\256\241\345\233\276", Q_NULLPTR));
        label_4->setText(QApplication::translate("DataAnalysis", "xx.xx.xx-xx.xx.xx\345\220\204\344\270\215\350\247\204\350\214\203\350\241\214\344\270\272\346\254\241\346\225\260\347\273\237\350\256\241\345\233\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("DataAnalysis", "\351\251\276\351\251\266\345\273\272\350\256\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("DataAnalysis", "<html><head/><body><p><br/>\345\260\212\346\225\254\347\232\204\351\251\276\351\251\266\345\221\230\357\274\214\346\202\250\345\234\250xx.xx.xx-xx.xx.xx\346\227\266\351\227\264\345\206\205\345\205\261\350\256\241xx\357\274\210\344\270\215\350\247\204\350\214\203\350\241\214\344\270\272\357\274\211x\346\254\241\357\274\214</p><p>\345\267\262\344\270\245\351\207\215\345\275\261\345\223\215\345\210\260\346\202\250\347\232\204\345\256\211\345\205\250\351\251\276\351\251\266\343\200\202\344\270\272\344\277\235\351\232\234\346\202\250\345\222\214\344\271\230\345\256\242\347\232\204\347\224\237\345\221\275\345\256\211\345\205\250\357\274\214\345\273\272\350\256\256\346\202\250\345\244\232\344\274\221\346\201\257</p><p>/\351\251\276\351\251\266\346\227\266\344\270\215\350\246\201\346\211\223\347\224\265\350\257\235/\351\251\276\351\251\266\346\227\266\344\270\215\350\246\201\346\212\275\347\203\237\343\200\202</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataAnalysis: public Ui_DataAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAANALYSIS_H
