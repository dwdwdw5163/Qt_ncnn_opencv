/********************************************************************************
** Form generated from reading UI file 'warningwidgetvt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGWIDGETVT_H
#define UI_WARNINGWIDGETVT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarningWidgetVT
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QWidget *WarningWidgetVT)
    {
        if (WarningWidgetVT->objectName().isEmpty())
            WarningWidgetVT->setObjectName(QStringLiteral("WarningWidgetVT"));
        WarningWidgetVT->resize(955, 415);
        horizontalLayout = new QHBoxLayout(WarningWidgetVT);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(WarningWidgetVT);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(742, 100));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(WarningWidgetVT);

        QMetaObject::connectSlotsByName(WarningWidgetVT);
    } // setupUi

    void retranslateUi(QWidget *WarningWidgetVT)
    {
        WarningWidgetVT->setWindowTitle(QApplication::translate("WarningWidgetVT", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WarningWidgetVT", "\346\243\200\346\265\213\345\210\260\351\225\277\346\227\266\351\227\264\351\227\255\347\234\274!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WarningWidgetVT: public Ui_WarningWidgetVT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGWIDGETVT_H
