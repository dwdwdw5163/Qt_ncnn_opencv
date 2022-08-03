/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mainpage.h>
#include "dataanalysis.h"
#include "faceinput.h"
#include "helpwidget.h"
#include "history.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTabWidget *tabWidget;
    MainPage *page1;
    FaceInput *page2;
    History *page3;
    DataAnalysis *page4;
    HelpWidget *tab;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 30));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 20, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/Minimize-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/images/Max.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/images/quite.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addWidget(widget);

        topWidget = new QWidget(centralwidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        topWidget->setMinimumSize(QSize(0, 91));
        horizontalLayout_2 = new QHBoxLayout(topWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(topWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addWidget(topWidget);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        page1 = new MainPage();
        page1->setObjectName(QStringLiteral("page1"));
        tabWidget->addTab(page1, QString());
        page2 = new FaceInput();
        page2->setObjectName(QStringLiteral("page2"));
        tabWidget->addTab(page2, QString());
        page3 = new History();
        page3->setObjectName(QStringLiteral("page3"));
        tabWidget->addTab(page3, QString());
        page4 = new DataAnalysis();
        page4->setObjectName(QStringLiteral("page4"));
        tabWidget->addTab(page4, QString());
        tab = new HelpWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 34));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("MainWindow", " \347\226\262\345\212\263\351\251\276\351\251\266\351\242\204\350\255\246\347\263\273\347\273\237", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(page1), QApplication::translate("MainWindow", "  \345\256\236\346\227\266\351\242\204\350\247\210", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(page2), QApplication::translate("MainWindow", " \344\272\272\350\204\270\345\275\225\345\205\245", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(page3), QApplication::translate("MainWindow", " \345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(page4), QApplication::translate("MainWindow", " \346\225\260\346\215\256\345\210\206\346\236\220", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\270\256\345\212\251\346\226\207\346\241\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
