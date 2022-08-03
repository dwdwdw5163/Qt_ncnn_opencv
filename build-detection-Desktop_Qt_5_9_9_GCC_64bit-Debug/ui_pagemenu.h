/********************************************************************************
** Form generated from reading UI file 'pagemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMENU_H
#define UI_PAGEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *PageMenu)
    {
        if (PageMenu->objectName().isEmpty())
            PageMenu->setObjectName(QStringLiteral("PageMenu"));
        PageMenu->resize(514, 471);
        verticalLayout_2 = new QVBoxLayout(PageMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(PageMenu);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 40, -1, 20);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(446, 62));
        pushButton->setMaximumSize(QSize(446, 62));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(446, 62));
        pushButton_2->setMaximumSize(QSize(446, 62));

        verticalLayout->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(446, 62));
        pushButton_3->setMaximumSize(QSize(446, 62));

        verticalLayout->addWidget(pushButton_3, 0, Qt::AlignHCenter);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(446, 62));
        pushButton_4->setMaximumSize(QSize(446, 62));

        verticalLayout->addWidget(pushButton_4, 0, Qt::AlignHCenter);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(446, 62));
        pushButton_5->setMaximumSize(QSize(446, 62));

        verticalLayout->addWidget(pushButton_5, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(widget);


        retranslateUi(PageMenu);

        QMetaObject::connectSlotsByName(PageMenu);
    } // setupUi

    void retranslateUi(QWidget *PageMenu)
    {
        PageMenu->setWindowTitle(QApplication::translate("PageMenu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("PageMenu", "\351\200\211\346\213\251\350\217\234\345\215\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PageMenu", "\344\270\273\347\225\214\351\235\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PageMenu", "\344\272\272\350\204\270\345\275\225\345\205\245", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PageMenu", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("PageMenu", "\346\225\260\346\215\256\345\210\206\346\236\220", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("PageMenu", "\345\270\256\345\212\251\346\226\207\346\241\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PageMenu: public Ui_PageMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMENU_H
