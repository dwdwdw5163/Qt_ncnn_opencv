#include "sql.h"

#include "mobilefacenet.h"




sql::sql(const QString &DatabaseName)
{
    if (QSqlDatabase::contains("qt_sql_default_connection")){
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else{
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(DatabaseName);
    }



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
    data.resize(FEATURE_SIZE*4);
    memcpy(data.data(), &feature[0], FEATURE_SIZE*4);

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

double sql::queryPerson(std::vector<float> &feature,int &id)
{
    QSqlQuery query;
    int num = 1;

    if( !query.exec( "SELECT ID, FEATURE FROM WORKERS" ))
        qDebug() << "Error getting FEATURE from table:\n" << query.lastError();

    //extract once
    query.first();
    QByteArray outByteArray = query.value(1).toByteArray();
//    qDebug() << outByteArray.size();
    float outfloat[FEATURE_SIZE];
    memcpy(&outfloat[0], outByteArray.data(), FEATURE_SIZE*4);
    std::vector<float> tempFeature;
    for(int i=0;i<FEATURE_SIZE;i++){
        tempFeature.push_back(outfloat[i]);
    }
//    qDebug() << tempFeature.size();
    double similarity = calculSimilar(feature,tempFeature);


    while (query.next()) {
        outByteArray = query.value(1).toByteArray();
        memcpy(&outfloat[0], outByteArray.data(), FEATURE_SIZE*4);
        std::vector<float> tempFea;
        for(int i=0;i<FEATURE_SIZE;i++){
            tempFea.push_back(outfloat[i]);
        }
        double temp = calculSimilar(feature,tempFea);
        if(similarity < temp){
            similarity = temp;
            num = query.value(0).toInt();
        }
    }

    id = num;
    return similarity;
}

void sql::queryFeaturetoMAP()
{
    QSqlQuery query;
    QByteArray outByteArray;
//    float outfloat[FEATURE_SIZE];
    std::array<float, FEATURE_SIZE> outfloat;
    std::vector<float> tempFeature;

    if( !query.exec( "SELECT ID, FEATURE FROM WORKERS" ))
        qDebug() << "Error getting FEATURE from table:\n" << query.lastError();

    while (query.next()) {
        outByteArray = query.value(1).toByteArray();
        memcpy(&outfloat[0], outByteArray.data(), FEATURE_SIZE*4);
        featureMap.push_back(outfloat);
    }

}

double sql::findKindred(std::vector<float> &feature,int &id)
{
    double similarity = 0;
    double temp = 0;
    int num = 0;

    if(featureMap.size()==0){
        queryFeaturetoMAP();
        qDebug() << featureMap.size();
    }

//    qDebug() << "featureMapSize" <<featureMap.size();
    for(int i = 0;i < featureMap.size();i++){
        double ret = 0.0, mod1 = 0.0, mod2 = 0.0;

//        qDebug() <<"featureMap.at(i) size"<< featureMap.at(i).size();
        //calc simi
        for (std::vector<float>::size_type ii = 0; ii != feature.size(); ++ii)
        {
            ret += feature[ii] * featureMap.at(i).at(ii);
            mod1 += feature[ii] * feature[ii];
            mod2 += featureMap.at(i).at(ii) * featureMap.at(i).at(ii);
        }
        temp = (ret / sqrt(mod1) / sqrt(mod2) + 1) / 2.0;

        if(similarity < temp){
            similarity = temp;
            num = i+1;
        }
    }

    id = num;
    return similarity;
}

int sql::maxID()
{
    QSqlQuery query;
    if( !query.exec( "SELECT MAX(ID) FROM WORKERS" ))
        qDebug() << "Error getting SELECT MAX(ID) FROM WORKERS" << query.lastError();
    query.first();
    int num = query.value(0).toInt();
    return num;
}
