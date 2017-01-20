#ifndef SHAPESTRATEGY_H
#define SHAPESTRATEGY_H

#include "istrategy.h"

class ShapeStrategy:public IStrategy
{
public:
    ShapeStrategy();
    virtual IShape* createShape();
};

#endif // SHAPESTRATEGY_H
