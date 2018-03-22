#include "ddatacollector.h"

DDataCollector::DDataCollector()
{

}

QList<QString> DDataCollector::collect(void) {
    QList<QString> list;
    list.append("10");
    list.append("20.0");
    list.append("25.0");
    list.append("30.0");
    return list;
}
