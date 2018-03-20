#include "lightweightdataserver.h"

LightweightDataServer::LightweightDataServer(int port, DataCollector *dataCollector)
{
    this->port = port;
    this->dataCollector = dataCollector;
}

void LightweightDataServer::run() {
    connect(this, SIGNAL(newConnection()),this, SLOT(nConnection()));
    this->listen(QHostAddress::Any,port);
}

void LightweightDataServer::nConnection() {
    QTcpSocket *socket = this->nextPendingConnection();
    QList<QString> data = this->dataCollector->collect();
    socket->write(this->dataCollector->toByteArray(data));
    socket->close();
}
