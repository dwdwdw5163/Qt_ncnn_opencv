/********************************************************************************
** Form generated from reading UI file 'warningwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGWIDGET_H
#define UI_WARNINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarningWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QWidget *WarningWidget)
    {
        if (WarningWidget->objectName().isEmpty())
            WarningWidget->setObjectName(QStringLiteral("WarningWidget"));
        WarningWidget->resize(901, 307);
        horizontalLayout = new QHBoxLayout(WarningWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(WarningWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(764, 100));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout->addWidget(widget);


        retranslateUi(WarningWidget);

        QMetaObject::connectSlotsByName(WarningWidget);
    } // setupUi

    void retranslateUi(QWidget *WarningWidget)
    {
        WarningWidget->setWindowTitle(QApplication::translate("WarningWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WarningWidget", "\346\243\200\346\265\213\345\210\260\350\277\235\350\247\204\350\241\214\344\270\272!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WarningWidget: public Ui_WarningWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGWIDGET_H
