#ifndef LIGHTWEIGHTDATASERVER_H
#define LIGHTWEIGHTDATASERVER_H

#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include "datacollector.h"

class LightweightDataServer : public QTcpServer
{
    Q_OBJECT
public:
    LightweightDataServer(int port, DataCollector *dataCollector);
    void run();

public slots:
    void nConnection();

private:
    int port;
    DataCollector *dataCollector;
};

#endif // LIGHTWEIGHTDATASERVER_H
