#ifndef PAINTAREA_H
#define PAINTAREA_H
#include <QtWidgets>
#include <QVector>
#include <Strategies/istrategy.h>
class PaintArea:public QLabel
{
    bool m_draw;
    QVector<IShape*> m_shapes;
    QPolygon m_polygone;
public:
    PaintArea(QWidget *parent = 0);
    virtual void mousePressEvent(QMouseEvent* event);
    virtual void mouseReleaseEvent(QMouseEvent* event);
    virtual void mouseMoveEvent(QMouseEvent*event);
    virtual void paintEvent(QPaintEvent* event);
    ~PaintArea();
};

#endif // PAINTAREA_H
