#include "paintarea.h"
#include "Strategies/elastickstrategy.h"
#include "Strategies/circlestrategy.h"
#include "paintwidgetcontroller.h"

PaintArea::PaintArea(QWidget *parent)
    :QLabel(parent)
    ,m_draw(false)
    ,m_shapes()
    ,m_polygone()
{
}

void PaintArea::mousePressEvent(QMouseEvent* event)
{
    qDebug()<<event<<"\n";

    m_draw = true;
    m_polygone.clear();
    m_polygone<< QPoint(event->x(),event->y());
    IShape* shape = PaintWidgetController::getInstance().createShape();
    m_shapes.push_back(shape);
}

void PaintArea::mouseReleaseEvent(QMouseEvent* event)
{
    m_draw = false;
    m_polygone<< QPoint(event->x(),event->y());
    if(m_shapes.size()>0)
    {
        if(m_polygone.size()>0)
        m_shapes.back()->createShape(m_polygone);
    }
    this->update();
    qDebug()<<event<<"\n";
}

void PaintArea::mouseMoveEvent(QMouseEvent*event)
{
    qDebug()<<event<<"\n";
    if(m_draw)
    {
        m_polygone << QPoint(event->x(),event->y());
        if(m_shapes.size()>0)
        {
            m_shapes.back()->createShape(m_polygone);
        }
        this->update();
    }
}

void PaintArea::paintEvent(QPaintEvent* event)
{
    qDebug()<<event<<"\n";
    for(int i =0;i<m_shapes.size();++i)
    {
        m_shapes[i]->drow(this);
    }
}

