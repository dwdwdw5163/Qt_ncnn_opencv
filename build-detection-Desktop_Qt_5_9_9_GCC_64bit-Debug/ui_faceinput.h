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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
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
    QFrame *frame;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QWidget *FaceInput)
    {
        if (FaceInput->objectName().isEmpty())
            FaceInput->setObjectName(QStringLiteral("FaceInput"));
        FaceInput->resize(2045, 1344);
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
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 920, 331, 91));
        pushButton_2->setMinimumSize(QSize(266, 65));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(20);
        pushButton_2->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/images/gather.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 920, 341, 91));
        pushButton->setMinimumSize(QSize(266, 65));
        pushButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/images/camera_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 480, 451, 81));
        pushButton_3->setMinimumSize(QSize(300, 65));
        pushButton_3->setMaximumSize(QSize(600, 16777215));
        pushButton_3->setFont(font);
        pushButton_3->setIconSize(QSize(18, 18));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(650, 400, 67, 50));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(27, 400, 591, 50));
        label_3->setFont(font);

        verticalLayout_2->addWidget(widget_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4->setStretch(0, 1);

        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);

        retranslateUi(FaceInput);

        QMetaObject::connectSlotsByName(FaceInput);
    } // setupUi

    void retranslateUi(QWidget *FaceInput)
    {
        FaceInput->setWindowTitle(QApplication::translate("FaceInput", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("FaceInput", "\351\251\276\351\251\266\345\221\230\344\272\272\350\204\270\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FaceInput", "Face Sampling", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FaceInput", "Open camera", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FaceInput", "Initialize database", Q_NULLPTR));
        label_4->setText(QApplication::translate("FaceInput", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("FaceInput", "Number of recorded driver(s)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FaceInput: public Ui_FaceInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEINPUT_H
