/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGraphicsView *chartview;

    void setupUi(QWidget *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->resize(1258, 699);
        MainPage->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(MainPage);
        horizontalLayout->setSpacing(42);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(75, 30, 42, 78);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(MainPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(220, 65));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/camera_on.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        widget_3 = new QWidget(MainPage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        graphicsView = new QGraphicsView(widget_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout_5->addWidget(graphicsView);


        verticalLayout->addWidget(widget_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(MainPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(widget_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(20, 50, 20, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(30);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_4->addWidget(widget_5);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(MainPage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(125, 35));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        chartview = new QGraphicsView(widget_2);
        chartview->setObjectName(QStringLiteral("chartview"));

        verticalLayout_3->addWidget(chartview);


        verticalLayout_2->addWidget(widget_2);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 3);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QWidget *MainPage)
    {
        MainPage->setWindowTitle(QApplication::translate("MainPage", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainPage", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainPage", "\345\275\223\345\211\215\351\251\276\351\251\266\345\221\230\347\212\266\346\200\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainPage", "\346\230\257\345\220\246\344\270\272\345\220\210\346\263\225\351\251\276\351\251\266\345\221\230:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainPage", "\345\275\223\345\211\215\350\277\235\350\247\204\350\241\214\344\270\272:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainPage", "\351\251\276\351\251\266\345\221\230\347\226\262\345\212\263\347\250\213\345\272\246:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainPage", "\346\212\275\347\203\237:", Q_NULLPTR));
        label->setText(QApplication::translate("MainPage", "\350\276\223\345\207\272\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
