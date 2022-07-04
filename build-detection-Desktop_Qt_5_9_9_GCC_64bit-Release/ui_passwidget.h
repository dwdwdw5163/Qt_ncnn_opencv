/********************************************************************************
** Form generated from reading UI file 'passwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWIDGET_H
#define UI_PASSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passwidget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *passwidget)
    {
        if (passwidget->objectName().isEmpty())
            passwidget->setObjectName(QStringLiteral("passwidget"));
        passwidget->resize(824, 369);
        widget = new QWidget(passwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 883, 289));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        retranslateUi(passwidget);

        QMetaObject::connectSlotsByName(passwidget);
    } // setupUi

    void retranslateUi(QWidget *passwidget)
    {
        passwidget->setWindowTitle(QApplication::translate("passwidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("passwidget", "PASS!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class passwidget: public Ui_passwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWIDGET_H
