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
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *passwidget)
    {
        if (passwidget->objectName().isEmpty())
            passwidget->setObjectName(QStringLiteral("passwidget"));
        passwidget->resize(1183, 520);
        horizontalLayout_2 = new QHBoxLayout(passwidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(passwidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(742, 100));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(passwidget);

        QMetaObject::connectSlotsByName(passwidget);
    } // setupUi

    void retranslateUi(QWidget *passwidget)
    {
        passwidget->setWindowTitle(QApplication::translate("passwidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("passwidget", "\344\272\272\350\204\270\346\264\273\344\275\223\350\257\206\345\210\253\351\200\232\350\277\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class passwidget: public Ui_passwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWIDGET_H
