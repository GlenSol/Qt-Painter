#ifndef QSHAPE_H
#define QSHAPE_H
#include "QShapes/ishape.h"

class QShape: public IShape
{
protected:
    QPen m_pen;
    QPainter m_painter;
    QPolygon m_polygon;
public:
    QShape();
    virtual void createShape(QPolygon polygon)override;
    virtual void drow(QPaintDevice * device)override;
    virtual void setColor(QColor color)override;
    virtual void setPenwidth(int width)override;
    virtual void setPenStyle(Qt::PenStyle style)override;
};

#endif // QSHAPE_H
