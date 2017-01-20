#ifndef CIRCLE_H
#define CIRCLE_H
#include "QShapes/qshape.h"

class Circle:public QShape
{
public:
    Circle();
    virtual void drow(QPaintDevice * device)override;
    virtual void createShape(QPolygon polygon)override;
};

#endif // CIRCLE_H
