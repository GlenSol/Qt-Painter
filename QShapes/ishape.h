#ifndef ISHAPE_H
#define ISHAPE_H

#include <QtWidgets>
class IShape
{
public:
    virtual void createShape(QPolygon polygon)=0;
    virtual void drow(QPaintDevice * device)=0;
    virtual void setColor(QColor color)=0;
    virtual void setPenwidth(int width)=0;
    virtual void setPenStyle(Qt::PenStyle style)=0;
    virtual ~IShape()=0{}
};

#endif // ISHAPE_H
