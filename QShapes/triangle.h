#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "qshape.h"
#include <QtWidgets>

class Triangle:public QShape
{
public:
    Triangle();
    virtual void createShape(QPolygon polygon)override;
    virtual void drow(QPaintDevice * device)override;
private:
};

#endif // TRIANGLE_H
