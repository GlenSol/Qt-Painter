#ifndef TRIANGLESTRATEGY_H
#define TRIANGLESTRATEGY_H


#include "istrategy.h"

class TriangleStrategy:public IStrategy
{
public:
    TriangleStrategy();
    virtual IShape* createShape();
};

#endif // TRIANGLESTRATEGY_H
