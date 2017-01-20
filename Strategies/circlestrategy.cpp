#include "circlestrategy.h"
#include "QShapes/circle.h"

CircleStrategy::CircleStrategy()
{
}

IShape* CircleStrategy::createShape()
{
    return new Circle();
}
