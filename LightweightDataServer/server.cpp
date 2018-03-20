#include "server.h"

Server::Server(int port) : QObject(nullptr)
{
    server = new QTcpServer(this);
    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    if(!server->listen(QHostAddress::Any,port))
    {
        qDebug() << "Server could not start!";
    }
    else {
        qDebug() << "Server started!";
    }
}

void Server::newConnection() {
    QTcpSocket *socket = server->nextPendingConnection();
    socket->write("Hello client\n");
    socket->flush();
    socket->waitForBytesWritten();
    socket->close();
}
