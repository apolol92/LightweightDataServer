#ifndef LIGHTWEIGHTDATASERVER_H
#define LIGHTWEIGHTDATASERVER_H

#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
class LightweightDataServer : public QTcpServer
{
    Q_OBJECT
public:
    LightweightDataServer(int port);
    void run();

public slots:
    void nConnection();

private:
    int port;
};

#endif // LIGHTWEIGHTDATASERVER_H
