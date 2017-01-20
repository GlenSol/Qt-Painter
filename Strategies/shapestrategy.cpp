#include "shapestrategy.h"
#include "QShapes/qshape.h"
ShapeStrategy::ShapeStrategy()
{
}
IShape* ShapeStrategy::createShape()
{
    return new QShape();
}
