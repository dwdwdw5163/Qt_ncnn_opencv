#ifndef FACEINPUT_H
#define FACEINPUT_H

#include <QWidget>

namespace Ui {
class FaceInput;
}

class FaceInput : public QWidget
{
    Q_OBJECT

public:
    explicit FaceInput(QWidget *parent = NULL);
    ~FaceInput();

private slots:

private:
    Ui::FaceInput *ui;
};

#endif // FACEINPUT_H
