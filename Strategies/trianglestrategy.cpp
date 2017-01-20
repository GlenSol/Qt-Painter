#include "trianglestrategy.h"
#include "QShapes/triangle.h"
TriangleStrategy::TriangleStrategy()
{
}

 IShape* TriangleStrategy::createShape()
 {
     return new Triangle();
 }
