#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QWidget>
namespace Ui {
class MyWindow;
}

class MyWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private:
    Ui::MyWindow *ui;
};

#endif // MYWINDOW_H
