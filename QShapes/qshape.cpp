#include "qshape.h"
QShape::QShape()
{
}

void QShape::createShape(QPolygon polygon)
{
    m_polygon = polygon;
}

void QShape::drow(QPaintDevice * device)
{
    if(!m_polygon.empty())
    {
        m_painter.begin(device);
        m_painter.setPen(m_pen);
        m_painter.drawPolyline(m_polygon);
        m_painter.end();
    }else
    {
        qDebug()<<"m_polygon is empty\n";
    }
}

void QShape::setColor(QColor color)
{
    m_pen.setColor(color);
}

void QShape::setPenwidth(int width)
{
    m_pen.setWidth(width);
}

void QShape::setPenStyle(Qt::PenStyle style)
{
    m_pen.setStyle(style);
}



