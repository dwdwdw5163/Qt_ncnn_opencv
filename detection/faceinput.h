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
    explicit FaceInput(QWidget *parent = nullptr);
    ~FaceInput();

private:
    Ui::FaceInput *ui;
};

#endif // FACEINPUT_H
