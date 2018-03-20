#include "datacollector.h"

DataCollector::DataCollector()
{

}

QByteArray DataCollector::toByteArray(QList<QString> data) {
    uint time = QDateTime::currentMSecsSinceEpoch() - QDateTime(QDate::currentDate()).toMSecsSinceEpoch();
    QString json = "{\n";
    json.append("\"time\":"+QString::number(time)+",\n");
    for(int i = 0; i < data.length(); i++) {
        if(i<(data.length()-1)) {
            json.append("\"val"+QString::number(i)+"\":"+data[i]+",\n");
        }
        else {
            json.append("\"val"+QString::number(i)+"\":"+data[i]+"\n");
        }
    }
    json.append("}");
    return json.toUtf8();
}
