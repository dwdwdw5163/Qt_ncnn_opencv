#include "mainwindow.h"

#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //加载qss文件
    QFile file(":/style/images/style.qss");
    file.open(QFile::ReadOnly);
    QString styleSh = file.readAll();
    a.setStyleSheet(styleSh);
    //全局字体颜色
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::white);
    a.setPalette(pe);
    //全局字体加粗
    QFont font  = a.font();
    font.setPointSize(11);
    font.setWeight(QFont::Weight::Thin);
    font.setFamily("msyh");
    a.setFont(font);

    MainWindow w;
    w.show();
    return a.exec();
}
