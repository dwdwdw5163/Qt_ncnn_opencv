/********************************************************************************
** Form generated from reading UI file 'faceinput.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEINPUT_H
#define UI_FACEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceInput
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QGraphicsView *graphicsView_faceinput;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FaceInput)
    {
        if (FaceInput->objectName().isEmpty())
            FaceInput->setObjectName(QStringLiteral("FaceInput"));
        FaceInput->resize(1635, 863);
        horizontalLayout_2 = new QHBoxLayout(FaceInput);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 30, -1, 100);
        widget = new QWidget(FaceInput);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        graphicsView_faceinput = new QGraphicsView(widget);
        graphicsView_faceinput->setObjectName(QStringLiteral("graphicsView_faceinput"));

        verticalLayout_7->addWidget(graphicsView_faceinput);


        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(70);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(FaceInput);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(266, 65));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/camera_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton, 0, Qt::AlignBottom);

        pushButton_2 = new QPushButton(FaceInput);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(266, 65));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/images/gather.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_2, 0, Qt::AlignBottom);

        frame = new QFrame(FaceInput);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(FaceInput);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignTop);

        widget_2 = new QWidget(FaceInput);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 1, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(60, 0));

        gridLayout_3->addWidget(label_8, 1, 1, 1, 1);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(300, 65));
        pushButton_3->setMaximumSize(QSize(300, 16777215));

        gridLayout_3->addWidget(pushButton_3, 0, 2, 1, 1);

        horizontalSlider = new QSlider(widget_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 1, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(FaceInput);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        widget_3 = new QWidget(FaceInput);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 20, -1, 20);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, 0, 20, 20);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(311, 55));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(311, 55));

        gridLayout->addWidget(lineEdit_4, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(311, 55));
        lineEdit_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(lineEdit_2, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(311, 55));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_5 = new QLineEdit(widget_3);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(311, 55));

        gridLayout->addWidget(lineEdit_5, 3, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(311, 55));

        gridLayout->addWidget(lineEdit_6, 3, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 54));

        horizontalLayout_6->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 54));

        horizontalLayout_6->addWidget(pushButton_5);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);

        verticalLayout_6->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(20);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 0, 20, 20);
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1, Qt::AlignVCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_6 = new QPushButton(widget_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(150, 54));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(150, 54));

        horizontalLayout_5->addWidget(pushButton_7);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        lineEdit_8 = new QLineEdit(widget_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(311, 55));

        gridLayout_2->addWidget(lineEdit_8, 1, 1, 1, 1);

        lineEdit_7 = new QLineEdit(widget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(311, 55));

        gridLayout_2->addWidget(lineEdit_7, 1, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);

        verticalLayout_6->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_3->addWidget(widget_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 3);

        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);

        retranslateUi(FaceInput);

        QMetaObject::connectSlotsByName(FaceInput);
    } // setupUi

    void retranslateUi(QWidget *FaceInput)
    {
        FaceInput->setWindowTitle(QApplication::translate("FaceInput", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FaceInput", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FaceInput", "\345\274\200\345\247\213\351\207\207\351\233\206", Q_NULLPTR));
        label->setText(QApplication::translate("FaceInput", "\351\251\276\351\251\266\345\221\230\344\272\272\350\204\270\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        label_4->setText(QApplication::translate("FaceInput", "0 \344\272\272", Q_NULLPTR));
        label_8->setText(QApplication::translate("FaceInput", "0%", Q_NULLPTR));
        label_7->setText(QApplication::translate("FaceInput", "\344\272\272\350\204\270\350\257\206\345\210\253\347\275\256\344\277\241\345\272\246\351\230\210\345\200\274", Q_NULLPTR));
        label_3->setText(QApplication::translate("FaceInput", "\345\267\262\345\275\225\345\205\245\345\220\210\346\263\225\351\251\276\351\251\266\344\272\272\346\225\260:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FaceInput", "\345\210\235\345\247\213\345\214\226\351\251\276\351\251\266\345\221\230\344\272\272\350\204\270\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        label_2->setText(QApplication::translate("FaceInput", "\350\276\223\345\205\245\344\277\241\346\201\257", Q_NULLPTR));
        label_5->setText(QApplication::translate("FaceInput", "\346\267\273\345\212\240\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QApplication::translate("FaceInput", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        lineEdit_4->setInputMask(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("FaceInput", "\350\256\276\347\275\256\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("FaceInput", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("FaceInput", "\350\256\276\347\275\256\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("FaceInput", "\347\264\247\346\200\245\350\201\224\347\263\273\344\272\272\357\274\232", Q_NULLPTR));
        lineEdit_6->setPlaceholderText(QApplication::translate("FaceInput", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FaceInput", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("FaceInput", "\345\217\226\346\266\210", Q_NULLPTR));
        label_6->setText(QApplication::translate("FaceInput", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("FaceInput", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("FaceInput", "\345\217\226\346\266\210", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("FaceInput", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEdit_7->setPlaceholderText(QApplication::translate("FaceInput", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FaceInput: public Ui_FaceInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEINPUT_H
