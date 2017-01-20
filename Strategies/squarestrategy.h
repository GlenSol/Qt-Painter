#ifndef SQUARESTRATEGY_H
#define SQUARESTRATEGY_H

#include "istrategy.h"

class SquareStrategy:public IStrategy
{
public:
    SquareStrategy();
    virtual IShape*createShape();
};

#endif // SQUARESTRATEGY_H
