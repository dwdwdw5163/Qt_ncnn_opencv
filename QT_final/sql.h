#ifndef SQL_H
#define SQL_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QIODevice>

class sql
{
public:
    bool isConnected = false;

    sql(const QString &DatabaseName);
    bool addPerson(int &id,QString& name,int &age,std::vector<float> &feature);
//    void queryPerson(int &id,QString& name,int &age,std::vector<float> &feature);
    double queryPerson(std::vector<float> &feature);

private:
    QSqlDatabase database;
    QSqlQuery sql_query;


};

#endif // SQL_H
