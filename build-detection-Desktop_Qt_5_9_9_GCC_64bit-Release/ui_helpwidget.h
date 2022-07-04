/********************************************************************************
** Form generated from reading UI file 'helpwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWIDGET_H
#define UI_HELPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *HelpWidget)
    {
        if (HelpWidget->objectName().isEmpty())
            HelpWidget->setObjectName(QStringLiteral("HelpWidget"));
        HelpWidget->resize(1053, 807);
        horizontalLayout = new QHBoxLayout(HelpWidget);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, 20, 40, 20);
        widget = new QWidget(HelpWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget);

        tabWidget = new QTabWidget(HelpWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 30, 20, 20);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, 30, 20, 20);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setSpacing(30);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 30, 20, 20);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5, 0, Qt::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(50, -1, -1, -1);
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/7.png")));

        horizontalLayout_3->addWidget(label_6);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, -1, -1, -1);
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/8.png")));

        horizontalLayout_2->addWidget(label_8);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);

        retranslateUi(HelpWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HelpWidget);
    } // setupUi

    void retranslateUi(QWidget *HelpWidget)
    {
        HelpWidget->setWindowTitle(QApplication::translate("HelpWidget", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HelpWidget", "\347\263\273\347\273\237\344\273\213\347\273\215", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("HelpWidget", " \344\275\277\347\224\250\346\214\207\345\215\227", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("HelpWidget", "\350\201\224\347\263\273\346\210\221\344\273\254", Q_NULLPTR));
        label->setText(QApplication::translate("HelpWidget", "\347\263\273\347\273\237\344\273\213\347\273\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("HelpWidget", "\346\234\254\347\263\273\347\273\237\347\224\261\345\256\211\345\205\250\351\251\276\351\251\266\344\270\273\347\225\214\351\235\242\343\200\201\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\343\200\201\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242\343\200\201\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\344\273\245\345\217\212\345\270\256\345\212\251\346\226\207\346\241\243\344\272\224\351\203\250\345\210\206\347\273\204\346\210\220\343\200\202 \n"
"\347\263\273\347\273\237\345\274\200\345\247\213\350\277\220\350\241\214\345\220\216\357\274\214\344\274\232\351\246\226\345\205\210\346\243\200\346\265\213\344\272\272\350\204\270\345\271\266\345\257\271\346\243\200\346\265\213\345\210\260\347\232\204\344\272\272\350\204\270\350\277\233\350\241\214\350\257\206\345\210\253\357\274\214\345\234\250\345\210\244\346\226\255\350\257\245\344\272\272\350\204\270\344\270\272\345\220\210\346\263\225\344\272\272\350\204\270\345\220\216\357\274\214"
                        "\346\211\215\345\205\201\350\256\270\351\251\276\351\251\266\345\221\230\350\277\233\350\241\214\345\220\216\347\273\255\351\251\276\351\251\266\346\223\215\344\275\234\357\274\214\345\220\246\345\210\231\345\274\271\345\207\272\n"
"\350\255\246\345\221\212\357\270\217\346\241\206\357\274\214\346\217\220\347\244\272\351\235\236\346\263\225\351\251\276\351\251\266\345\221\230\345\260\275\345\277\253\347\246\273\345\274\200\351\251\276\351\251\266\344\275\215\343\200\202\346\255\244\345\244\204\344\272\272\350\204\270\350\257\206\345\210\253\346\224\257\346\214\201\345\270\246\345\217\243\347\275\251\343\200\201\347\234\274\351\225\234\343\200\201\345\244\264\347\233\224\347\255\211\351\203\250\345\210\206\351\201\256\346\214\241\350\257\206\345\210\253\357\274\214\345\234\250\347\226\253\346\203\205\345\270\270\346\200\201\345\214\226\344\270\213\357\274\214\346\226\271\344\276\277\344\272\272\344\273\254\350\277\233\350\241\214\350\272\253\344\273\275\351\252\214\350\257\201\343\200\202", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("HelpWidget", "\347\263\273\347\273\237\344\273\213\347\273\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("HelpWidget", " \344\275\277\347\224\250\346\226\207\346\241\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("HelpWidget", "<html><head/><body><p>1.\344\270\273\347\225\214\351\235\242\345\246\202\344\275\225\344\275\277\347\224\250\357\274\232</p><p>\346\234\254\347\263\273\347\273\237\347\224\261\345\256\211\345\205\250\351\251\276\351\251\266\344\270\273\347\225\214\351\235\242\343\200\201\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\343\200\201\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242\343\200\201\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\344\273\245\345\217\212\345\270\256\345\212\251\346\226\207\346\241\243\344\272\224\351\203\250\345\210\206\347\273\204\346\210\220\343\200\202</p><p>\347\263\273\347\273\237\345\274\200\345\247\213\350\277\220\350\241\214\345\220\216\357\274\214\344\274\232\351\246\226\345\205\210\346\243\200\346\265\213\344\272\272\350\204\270\345\271\266\345\257\271\346\243\200\346\265\213\345\210\260\347\232\204\344\272\272\350\204\270\350\277\233\350\241\214\350\257\206\345\210\253\357\274\214\345\234\250\345\210\244\346"
                        "\226\255\350\257\245\344\272\272\350\204\270\344\270\272\345\220\210\346\263\225\344\272\272\350\204\270\345\220\216\357\274\214\346\211\215\345\205\201\350\256\270\351\251\276\351\251\266\345\221\230\350\277\233\350\241\214\345\220\216\347\273\255\351\251\276\351\251\266\346\223\215\344\275\234\357\274\214\345\220\246\345\210\231\345\274\271\345\207\272\350\255\246</p><p>\345\221\212\357\270\217\346\241\206\357\274\214\346\217\220\347\244\272\351\235\236\346\263\225\351\251\276\351\251\266\345\221\230\345\260\275\345\277\253\347\246\273\345\274\200\351\251\276\351\251\266\344\275\215\343\200\202\346\255\244\345\244\204\344\272\272\350\204\270\350\257\206\345\210\253\346\224\257\346\214\201\345\270\246\345\217\243\347\275\251\343\200\201\347\234\274\351\225\234\343\200\201\345\244\264\347\233\224\347\255\211\351\203\250\345\210\206\351\201\256\346\214\241\350\257\206\345\210\253\357\274\214\345\234\250\347\226\253\346\203\205\345\270\270\346\200\201\345\214\226\344\270\213\357\274\214\346\226\271\344\276\277\344"
                        "\272\272\344\273\254\350\277\233\350\241\214\350\272\253\344\273\275\351\252\214\350\257\201\343\200\202<br/></p><p>2.\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\345\246\202\344\275\225\344\275\277\347\224\250\357\274\232</p><p>\346\234\254\347\263\273\347\273\237\347\224\261\345\256\211\345\205\250\351\251\276\351\251\266\344\270\273\347\225\214\351\235\242\343\200\201\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\343\200\201\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242\343\200\201\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\344\273\245\345\217\212\345\270\256\345\212\251\346\226\207\346\241\243\344\272\224\351\203\250\345\210\206\347\273\204\346\210\220\343\200\202</p><p>\347\263\273\347\273\237\345\274\200\345\247\213\350\277\220\350\241\214\345\220\216\357\274\214\344\274\232\351\246\226\345\205\210\346\243\200\346\265\213\344\272\272\350\204\270\345\271\266\345\257\271\346\243\200\346\265\213\345\210"
                        "\260\347\232\204\344\272\272\350\204\270\350\277\233\350\241\214\350\257\206\345\210\253\357\274\214\345\234\250\345\210\244\346\226\255\350\257\245\344\272\272\350\204\270\344\270\272\345\220\210\346\263\225\344\272\272\350\204\270\345\220\216\357\274\214\346\211\215\345\205\201\350\256\270\351\251\276\351\251\266\345\221\230\350\277\233\350\241\214\345\220\216\347\273\255\351\251\276\351\251\266\346\223\215\344\275\234\357\274\214\345\220\246\345\210\231\345\274\271\345\207\272\350\255\246</p><p>\345\221\212\357\270\217\346\241\206\357\274\214\346\217\220\347\244\272\351\235\236\346\263\225\351\251\276\351\251\266\345\221\230\345\260\275\345\277\253\347\246\273\345\274\200\351\251\276\351\251\266\344\275\215\343\200\202\346\255\244\345\244\204\344\272\272\350\204\270\350\257\206\345\210\253\346\224\257\346\214\201\345\270\246\345\217\243\347\275\251\343\200\201\347\234\274\351\225\234\343\200\201\345\244\264\347\233\224\347\255\211\351\203\250\345\210\206\351\201\256\346\214\241\350\257\206\345\210\253\357\274"
                        "\214\345\234\250\347\226\253\346\203\205\345\270\270\346\200\201\345\214\226\344\270\213\357\274\214\346\226\271\344\276\277\344\272\272\344\273\254\350\277\233\350\241\214\350\272\253\344\273\275\351\252\214\350\257\201\343\200\202</p><p><br/></p><p>3.\345\216\206\345\217\262\350\256\260\345\275\225\345\246\202\344\275\225\344\275\277\347\224\250\357\274\232</p><p>\346\234\254\347\263\273\347\273\237\347\224\261\345\256\211\345\205\250\351\251\276\351\251\266\344\270\273\347\225\214\351\235\242\343\200\201\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\343\200\201\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242\343\200\201\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\344\273\245\345\217\212\345\270\256\345\212\251\346\226\207\346\241\243\344\272\224\351\203\250\345\210\206\347\273\204\346\210\220\343\200\202</p><p>\347\263\273\347\273\237\345\274\200\345\247\213\350\277\220\350\241\214\345\220\216\357\274\214\344\274\232\351\246\226\345"
                        "\205\210\346\243\200\346\265\213\344\272\272\350\204\270\345\271\266\345\257\271\346\243\200\346\265\213\345\210\260\347\232\204\344\272\272\350\204\270\350\277\233\350\241\214\350\257\206\345\210\253\357\274\214\345\234\250\345\210\244\346\226\255\350\257\245\344\272\272\350\204\270\344\270\272\345\220\210\346\263\225\344\272\272\350\204\270\345\220\216\357\274\214\346\211\215\345\205\201\350\256\270\351\251\276\351\251\266\345\221\230\350\277\233\350\241\214\345\220\216\347\273\255\351\251\276\351\251\266\346\223\215\344\275\234\357\274\214\345\220\246\345\210\231\345\274\271\345\207\272\350\255\246</p><p>\345\221\212\357\270\217\346\241\206\357\274\214\346\217\220\347\244\272\351\235\236\346\263\225\351\251\276\351\251\266\345\221\230\345\260\275\345\277\253\347\246\273\345\274\200\351\251\276\351\251\266\344\275\215\343\200\202\346\255\244\345\244\204\344\272\272\350\204\270\350\257\206\345\210\253\346\224\257\346\214\201\345\270\246\345\217\243\347\275\251\343\200\201\347\234\274\351\225\234\343\200\201\345"
                        "\244\264\347\233\224\347\255\211\351\203\250\345\210\206\351\201\256\346\214\241\350\257\206\345\210\253\357\274\214\345\234\250\347\226\253\346\203\205\345\270\270\346\200\201\345\214\226\344\270\213\357\274\214\346\226\271\344\276\277\344\272\272\344\273\254\350\277\233\350\241\214\350\272\253\344\273\275\351\252\214\350\257\201\343\200\202</p><p><br/></p><p>4.\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\345\246\202\344\275\225\344\275\277\347\224\250\357\274\232</p><p>\346\234\254\347\263\273\347\273\237\347\224\261\345\256\211\345\205\250\351\251\276\351\251\266\344\270\273\347\225\214\351\235\242\343\200\201\344\272\272\350\204\270\345\275\225\345\205\245\347\225\214\351\235\242\343\200\201\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242\343\200\201\346\225\260\346\215\256\345\210\206\346\236\220\347\225\214\351\235\242\344\273\245\345\217\212\345\270\256\345\212\251\346\226\207\346\241\243\344\272\224\351\203\250\345\210\206\347\273\204\346\210\220\343\200"
                        "\202</p><p>\347\263\273\347\273\237\345\274\200\345\247\213\350\277\220\350\241\214\345\220\216\357\274\214\344\274\232\351\246\226\345\205\210\346\243\200\346\265\213\344\272\272\350\204\270\345\271\266\345\257\271\346\243\200\346\265\213\345\210\260\347\232\204\344\272\272\350\204\270\350\277\233\350\241\214\350\257\206\345\210\253\357\274\214\345\234\250\345\210\244\346\226\255\350\257\245\344\272\272\350\204\270\344\270\272\345\220\210\346\263\225\344\272\272\350\204\270\345\220\216\357\274\214\346\211\215\345\205\201\350\256\270\351\251\276\351\251\266\345\221\230\350\277\233\350\241\214\345\220\216\347\273\255\351\251\276\351\251\266\346\223\215\344\275\234\357\274\214\345\220\246\345\210\231\345\274\271\345\207\272\350\255\246</p><p>\345\221\212\357\270\217\346\241\206\357\274\214\346\217\220\347\244\272\351\235\236\346\263\225\351\251\276\351\251\266\345\221\230\345\260\275\345\277\253\347\246\273\345\274\200\351\251\276\351\251\266\344\275\215\343\200\202\346\255\244\345\244\204\344\272\272\350\204\270"
                        "\350\257\206\345\210\253\346\224\257\346\214\201\345\270\246\345\217\243\347\275\251\343\200\201\347\234\274\351\225\234\343\200\201\345\244\264\347\233\224\347\255\211\351\203\250\345\210\206\351\201\256\346\214\241\350\257\206\345\210\253\357\274\214\345\234\250\347\226\253\346\203\205\345\270\270\346\200\201\345\214\226\344\270\213\357\274\214\346\226\271\344\276\277\344\272\272\344\273\254\350\277\233\350\241\214\350\272\253\344\273\275\351\252\214\350\257\201\343\200\202</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("HelpWidget", " \344\275\277\347\224\250\346\214\207\345\215\227", Q_NULLPTR));
        label_5->setText(QApplication::translate("HelpWidget", " \350\201\224\347\263\273\346\210\221\344\273\254", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("HelpWidget", " \347\224\265\350\257\235\357\274\2320315-1234567", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("HelpWidget", " \351\202\256\347\256\261\357\274\232youxiang@163.com", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("HelpWidget", " \350\201\224\347\263\273\346\210\221\344\273\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpWidget: public Ui_HelpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWIDGET_H
