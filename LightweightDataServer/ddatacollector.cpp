#include "ddatacollector.h"

DDataCollector::DDataCollector()
{

}

QList<QString> DDataCollector::collect(void) {
    QList<QString> list;
    list.append("10");
    list.append("20.0");
    return list;
}
