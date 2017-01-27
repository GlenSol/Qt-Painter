#ifndef PAINTWIDGETCONTROLLER_H
#define PAINTWIDGETCONTROLLER_H
#include <QtWidgets>
#include "Strategies/elastickstrategy.h"
#include "Strategies/shapestrategy.h"
#include "Strategies/squarestrategy.h"
#include "Strategies/trianglestrategy.h"
#include "Strategies/circlestrategy.h"

class PaintWidgetController:public QObject
{
    Q_OBJECT
private:
    PaintWidgetController();
    PaintWidgetController( const PaintWidgetController& )=delete;
    PaintWidgetController& operator=( PaintWidgetController& )=delete;
    ~PaintWidgetController();
public:
    static PaintWidgetController& getInstance()
    {
        static PaintWidgetController m_paintWigtCtrl;
        return m_paintWigtCtrl;

    }
    IShape* createShape();
private slots:
    void CircleButtonPress();
    void SquareButtonPress();
    void ElastickButtonPress();
    void TriangleButtonPress();
    void PencilButtonPress();
    void WidthChanged(int width);
    void StyleChanged(int  index);
    void ColorChanged(QColor color);
private:
    IStrategy* m_curStrategy;
    QPen pen;
};

#endif // PAINTWIDGETCONTROLLER_H
