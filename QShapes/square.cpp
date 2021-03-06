#include "square.h"

Square::Square()
{
}

void Square::createShape(QPolygon polygon)
{
    QPoint pointA(polygon.front().x(),polygon.front().y());
    QPoint pointB(polygon.back().x(),polygon.back().y());

    m_polygon<<pointA<<pointB;
}

void Square::drow(QPaintDevice * device)
{
    if(!m_polygon.empty())
    {
        m_painter.begin(device);
        m_painter.setPen(m_pen);
        m_painter.drawRect(QRect(m_polygon.front(),m_polygon.back()));
        m_painter.end();
    }else
    {
        qDebug()<<"m_polygon is empty\n";
    }
}
