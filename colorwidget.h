#ifndef COLORWIDGET_H
#define COLORWIDGET_H

#include <QtWidgets>

class ColorWidget:public QWidget
{
    Q_OBJECT
public:
    ColorWidget(QWidget *parent=0);
private:
    QColorDialog* ColorDi;
    QPushButton *   button;
public slots:
    void ButtonToggled(bool toggled);
private:

};

#endif // COLORWIDGET_H
