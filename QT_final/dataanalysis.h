#ifndef DATAANALYSIS_H
#define DATAANALYSIS_H

#include <QWidget>

namespace Ui {
class DataAnalysis;
}

class DataAnalysis : public QWidget
{
    Q_OBJECT

public:
    explicit DataAnalysis(QWidget *parent = NULL);
    ~DataAnalysis();

private:
    Ui::DataAnalysis *ui;
};

#endif // DATAANALYSIS_H
