#include "elastickstrategy.h"
#include "QShapes/elastick.h"

ElastickStrategy::ElastickStrategy()
{
}
IShape* ElastickStrategy::createShape()
{
    return new Elastick();
}
