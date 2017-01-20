#include "squarestrategy.h"
#include "QShapes/square.h"
SquareStrategy::SquareStrategy()
{

}

IShape*SquareStrategy::createShape()
{
    return new Square();
}
