/********************************************************************************
** Form generated from reading UI file 'modifyuserinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYUSERINFO_H
#define UI_MODIFYUSERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyUserInfo
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ModifyUserInfo)
    {
        if (ModifyUserInfo->objectName().isEmpty())
            ModifyUserInfo->setObjectName(QStringLiteral("ModifyUserInfo"));
        ModifyUserInfo->resize(514, 432);
        verticalLayout = new QVBoxLayout(ModifyUserInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(ModifyUserInfo);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignVCenter);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, -1, 20, -1);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 62));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 62));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 62));

        verticalLayout_2->addWidget(lineEdit_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(150, 54));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(150, 54));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout->addWidget(widget);


        retranslateUi(ModifyUserInfo);

        QMetaObject::connectSlotsByName(ModifyUserInfo);
    } // setupUi

    void retranslateUi(QWidget *ModifyUserInfo)
    {
        ModifyUserInfo->setWindowTitle(QApplication::translate("ModifyUserInfo", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ModifyUserInfo", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("ModifyUserInfo", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("ModifyUserInfo", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("ModifyUserInfo", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ModifyUserInfo", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ModifyUserInfo", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModifyUserInfo: public Ui_ModifyUserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYUSERINFO_H
