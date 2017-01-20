#ifndef CIRCLESTRATEGY_H
#define CIRCLESTRATEGY_H
#include "istrategy.h"

class CircleStrategy:public IStrategy
{
public:
    CircleStrategy();
    virtual IShape* createShape();
};

#endif // CIRCLESTRATEGY_H
