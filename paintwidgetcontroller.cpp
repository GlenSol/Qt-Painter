#include "paintwidgetcontroller.h"
PaintWidgetController::PaintWidgetController()
{
    m_curStrategy = new ShapeStrategy();
    pen.setColor(Qt::black);
    pen.setWidth(3);
    pen.setStyle(Qt::SolidLine);
}

void PaintWidgetController::CircleButtonPress()
{
    qDebug()<<"CircleButtonPress\n";
    delete m_curStrategy;
    m_curStrategy = new CircleStrategy();
}

void PaintWidgetController::SquareButtonPress()
{
    qDebug()<<"SquareButtonPress\n";
    delete m_curStrategy;
    m_curStrategy = new SquareStrategy();
}

void PaintWidgetController::ElastickButtonPress()
{
    qDebug()<<"ElastickButtonPress\n";
    delete m_curStrategy;
    m_curStrategy = new ElastickStrategy();
}
void PaintWidgetController::TriangleButtonPress()
{
    qDebug()<<"TriangleButtonPress\n";
    delete m_curStrategy;
    m_curStrategy = new TriangleStrategy();
}
void PaintWidgetController::PencilButtonPress()
{
    qDebug()<<"PencilButtonPress\n";
    delete m_curStrategy;
    m_curStrategy = new ShapeStrategy();
}


IShape* PaintWidgetController::createShape()
{
    IShape * shape = m_curStrategy->createShape();
    shape->setColor(pen.color());
    shape->setPenStyle( pen.style());
    shape->setPenwidth(pen.width());
    return  shape;
}

void PaintWidgetController::WidthChanged(int width)
{
    pen.setWidth(width);
}

void PaintWidgetController::StyleChanged(int  index)
{
    pen.setStyle(Qt::PenStyle(index+1));
}
void PaintWidgetController::ColorChanged(QColor color)
{
    pen.setColor(color);
}
