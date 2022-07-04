#ifndef SQL_H
#define SQL_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QIODevice>


#define FEATURE_SIZE 128


class sql
{
public:
    bool isConnected = false;

    sql(const QString &DatabaseName);
    bool addPerson(int &id,QString& name,int &age,std::vector<float> &feature);
    double queryPerson(std::vector<float> &feature,int &id);
    void queryFeaturetoMAP();
    double findKindred(std::vector<float> &feature,int &id);
    int maxID();

private:
    QSqlDatabase database;
    QSqlQuery sql_query;

    std::vector<std::array<float, FEATURE_SIZE>> featureMap;
};

#endif // SQL_H
