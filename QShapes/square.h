#ifndef SQUARE_H
#define SQUARE_H

#include "QShapes/qshape.h"

class Square: public QShape
{
public:
    Square();
    virtual void drow(QPaintDevice * device)override;
    virtual void createShape( QPolygon polygon)override;
};

#endif // SQUARE_H
