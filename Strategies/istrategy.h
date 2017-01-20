#ifndef ISTRATEGY_H
#define ISTRATEGY_H
#include "QShapes/ishape.h"

class IStrategy
{
public:
    virtual IShape* createShape()=0;
};

#endif // ISTRATEGY_H
