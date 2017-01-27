#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H
#include <QtWidgets>
#include <QWidget>
#include <QVector>
#include "paintarea.h"
#include "paintwidgetcontroller.h"
#include "colorwidget.h"
class PaintWidget:public QWidget
{
    Q_OBJECT
public:
    PaintWidget(QWidget* parent = 0);
    ~PaintWidget();
private:

    QPushButton*  buttonCircle;
    QPushButton*  buttonSquare;
    QPushButton*  buttonTriangle;
    QPushButton*  butElastick;
    QPushButton*  buttonShape;
    QSpinBox   *  LineWidth;
    QComboBox  *  StylesComboBox;
    ColorWidget*  ColorBox;
    PaintArea  *  pArea;
    QDockWidget*  pdock;
private:
    void TuningPaintarea(PaintArea *& lable);
    void FillButtons(QPushButton *&but,const QString& iconPath);
    void FillLineWidthSpinbox(QSpinBox *& spb);
    void FilleLineStyleList(QComboBox *& cbox );
};

#endif // PAINTWIDGET_H
