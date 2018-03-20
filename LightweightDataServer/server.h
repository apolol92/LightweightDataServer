#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(int port);

signals:

public slots:
    void newConnection();

private:
    QTcpServer *server;
    int port;
};

#endif // SERVER_H