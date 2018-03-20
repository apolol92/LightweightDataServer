#include "lightweightdataserver.h"

LightweightDataServer::LightweightDataServer(int port)
{
    this->port = port;
}

void LightweightDataServer::run() {
    connect(this, SIGNAL(newConnection()),this, SLOT(nConnection()));
    this->listen(QHostAddress::Any,port);
}

void LightweightDataServer::nConnection() {
    QTcpSocket *socket = this->nextPendingConnection();
    socket->write("hello world\n");
    socket->close();
}
