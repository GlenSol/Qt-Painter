#include "elastick.h"


Elastick::Elastick()
{
    m_pen.setColor(Qt::white);
}

void Elastick::createShape(QPolygon polygon)
{
    m_polygon = polygon;
}

void Elastick::drow(QPaintDevice * device)
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

void Elastick::setColor(QColor color)
{
    qDebug()<<"you can not change color of Elastick\n";
}

void Elastick::setPenwidth(int width)
{
    m_pen.setWidth(width);
    m_painter.setPen(m_pen);
}

void Elastick::setPenStyle(Qt::PenStyle style)
{
    qDebug()<<"you can not change style of Elastick\n";
}
