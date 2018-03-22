#include "datacollector.h"

DataCollector::DataCollector()
{

}

QByteArray DataCollector::toByteArray(QList<QString> data) {
    uint time = QDateTime::currentMSecsSinceEpoch() - QDateTime(QDate::currentDate()).toMSecsSinceEpoch();
    QString json = "{\n";
    json.append("\"time\":"+QString::number(time)+",\n");
    for(int i = 0; i < data.length(); i++)
    {
        if(i==(data.length()-1)) {
            json.append(data[i]+"]\n");
        }
        else if(i == 0)
        {
            json.append("\"values\":[" + data[i]+",");
        }
        else {
            json.append(data[i]+",");
        }
    }
    json.append("}");
    return json.toUtf8();
}
