#ifndef ELASTICKSTRATEGY_H
#define ELASTICKSTRATEGY_H

#include "istrategy.h"
class ElastickStrategy: public IStrategy
{
public:
    ElastickStrategy();
    virtual IShape* createShape();
};

#endif // ELASTICKSTRATEGY_H
