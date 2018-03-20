#ifndef DDATACOLLECTOR_H
#define DDATACOLLECTOR_H

#include"datacollector.h"

class DDataCollector : public DataCollector
{
public:
    DDataCollector();
    QList<QString> collect(void);
};

#endif // DDATACOLLECTOR_H
