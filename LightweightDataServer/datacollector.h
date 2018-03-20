#ifndef DATAPACKET_H
#define DATAPACKET_H

#include<QList>
#include<QString>
#include<QDateTime>

class DataCollector
{
public:
    DataCollector();
    virtual QList<QString> collect(void) = 0;
    QByteArray toByteArray(QList<QString> data);



};

#endif // DATAPACKET_H
