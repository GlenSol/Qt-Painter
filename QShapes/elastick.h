#ifndef ELASTICK_H
#define ELASTICK_H
#include "qshape.h"

class Elastick : public QShape
{
public:
    Elastick();
    virtual void createShape(QPolygon polygon)override;
    virtual void drow(QPaintDevice * device)override;
    virtual void setColor(QColor color)override;
    virtual void setPenwidth(int width)override;
    virtual void setPenStyle(Qt::PenStyle style)override;
};

#endif // ELASTICK_H
