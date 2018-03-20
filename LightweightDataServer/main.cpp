#include <QCoreApplication>
#include "lightweightdataserver.h"

float getSimpleFloatValue(void) {
    return 1337;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LightweightDataServer *mServer = new LightweightDataServer();
    mServer->run();
    //mServer.getSimpleFloatValue = &getSimpleFloatValue;

    return a.exec();
}
