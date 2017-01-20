#include "triangle.h"

Triangle::Triangle()
{
}

void Triangle::createShape(QPolygon polygon)
{
    m_polygon.clear();
    QPoint pointA(polygon.front().x(),polygon.back().y());
    QPoint pointB(polygon.back().x(),polygon.back().y());
    QPoint pointC((polygon.back().x()+polygon.front().x())/2,polygon.front().y());

    m_polygon<<pointA<<pointB<<pointC;
}
void Triangle::drow(QPaintDevice * device)
{
    if(!m_polygon.empty())
    {
        m_painter.begin(device);
        m_painter.setPen(m_pen);
        m_painter.drawPolygon(m_polygon);
        m_painter.end();
    }else
    {
        qDebug()<<"m_polygon is empty\n";
    }
}
