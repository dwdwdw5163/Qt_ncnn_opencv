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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataAnalysis
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *chartView;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DataAnalysis)
    {
        if (DataAnalysis->objectName().isEmpty())
            DataAnalysis->setObjectName(QStringLiteral("DataAnalysis"));
        DataAnalysis->resize(2064, 696);
        verticalLayout = new QVBoxLayout(DataAnalysis);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(DataAnalysis);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        chartView = new QGraphicsView(widget_2);
        chartView->setObjectName(QStringLiteral("chartView"));

        horizontalLayout_2->addWidget(chartView);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout->addWidget(widget_3);

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
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout->addWidget(widget_4);


        retranslateUi(DataAnalysis);

        QMetaObject::connectSlotsByName(DataAnalysis);
    } // setupUi

    void retranslateUi(QWidget *DataAnalysis)
    {
        DataAnalysis->setWindowTitle(QApplication::translate("DataAnalysis", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("DataAnalysis", "\345\220\204\344\270\215\350\247\204\350\214\203\350\241\214\344\270\272\346\254\241\346\225\260\347\273\237\350\256\241\345\233\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("DataAnalysis", "\351\251\276\351\251\266\345\273\272\350\256\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("DataAnalysis", "<html><head/><body><p>\345\260\212\346\225\254\347\232\204\351\251\276\351\251\266\345\221\230\357\274\214\346\202\250\345\234\250\350\277\207\345\216\273\347\232\204\346\227\266\351\227\264\345\206\205\351\251\276\351\251\266\345\207\272\347\216\260\344\272\206\347\226\262\345\212\263\347\232\204\346\203\205\345\206\265\357\274\214\344\270\272\344\272\206\346\202\250\347\232\204\345\271\270\347\246\217\345\222\214\345\256\266\344\272\272\347\232\204\345\256\211\345\205\250\357\274\214\350\257\267\346\202\250\346\263\250\346\204\217\344\274\221\346\201\257\357\274\214\344\270\215\350\246\201\345\234\250\347\226\262\345\212\263\347\232\204\346\227\266\345\200\231\350\277\233\350\241\214\351\251\276\351\251\266\343\200\202</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataAnalysis: public Ui_DataAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAANALYSIS_H
