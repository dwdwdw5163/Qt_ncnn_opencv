/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QWidget *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName(QStringLiteral("History"));
        History->resize(1344, 630);
        verticalLayout_2 = new QVBoxLayout(History);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(History);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(182, 65));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(History);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 65));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(History);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(94, 94, 94);"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(History);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(151, 65));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(History);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 8);

        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QWidget *History)
    {
        History->setWindowTitle(QApplication::translate("History", "Form", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("History", "\346\211\271\351\207\217\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("History", "\345\210\240\351\231\244", Q_NULLPTR));
        label->setText(QApplication::translate("History", "\342\200\224", Q_NULLPTR));
        pushButton->setText(QApplication::translate("History", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
