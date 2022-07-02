#include "sql.h"

sql::sql(const QString &DatabaseName)
{

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName(DatabaseName);


    if (!database.open()) {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else {
        qDebug() << "database connection established";
        isConnected = true;
    }

}

bool sql::addPerson(int &id,QString& name,int &age,std::vector<float> &feature)
{
    bool success = false;
    qDebug() << feature.size();
    QByteArray data;
    QDataStream stream(&data, QIODevice::WriteOnly);
    for (auto x : feature)
        stream << x;

    QSqlQuery query;
    if( !query.exec( "SELECT MAX(ID) FROM WORKERS" ))
        qDebug() << "Error SELECT MAX(ID) FROM WORKERS\n" << query.lastError();
    query.first();
    int num = query.value(0).toInt();

    query.prepare("INSERT INTO WORKERS (ID,NAME,AGE,FEATURE) VALUES (:id, :name, :age, :feature)");
    query.bindValue(":id", num+1);
    query.bindValue(":name", name);
    query.bindValue(":age", age);
    query.bindValue(":feature", data);
    qDebug() << data.size();

    if(query.exec())
    {
       success = true;
       qDebug() << "addPerson successed";
    }
    else
    {
        qDebug() << "addPerson error:"
                 << query.lastError();
    }


    return success;
}

void sql::queryPerson(int &id,QString& name,int &age,std::vector<float> &feature)
{
    QSqlQuery query;
    if( !query.exec( "SELECT FEATURE from WORKERS" ))
        qDebug() << "Error getting FEATURE from table:\n" << query.lastError();
    query.first();
    QByteArray outByteArray = query.value( 0 ).toByteArray();
    qDebug() << outByteArray.size();

}
