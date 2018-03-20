#include <QCoreApplication>
#include "lightweightdataserver.h"
#include "ddatacollector.h"

float getSimpleFloatValue(void) {
    return 1337;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LightweightDataServer *mServer = new LightweightDataServer(1234,new DDataCollector());
    mServer->run();

    return a.exec();
}
