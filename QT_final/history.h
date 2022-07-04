#ifndef HISTORY_H
#define HISTORY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "sql.h"

namespace Ui {
class History;
}




class History : public QWidget
{
    Q_OBJECT

public:
    explicit History(QWidget *parent = NULL);
    ~History();

private:
    Ui::History *ui;

    QSqlTableModel *model;
    sql *db;


};

#endif // HISTORY_H
