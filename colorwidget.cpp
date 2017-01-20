#include "colorwidget.h"
#include "paintwidgetcontroller.h"
ColorWidget::ColorWidget(QWidget * parent)
    :QWidget(parent)
{
    ColorDi = new QColorDialog(this);
    QVBoxLayout * layout= new QVBoxLayout;
    button = new QPushButton(this);
    button->setText("Color");
    button->setCheckable(true);
    button->setChecked(false);
    button->setStyle(QStyleFactory::create("QFusionStyle"));
    layout->addWidget(button);
    this->setLayout(layout);

    connect(button,SIGNAL(toggled(bool)),this,SLOT(ButtonToggled(bool)));
    connect(ColorDi,SIGNAL(colorSelected(QColor)),&PaintWidgetController::getInstance(),SLOT(ColorChanged(QColor)));
}
void ColorWidget::ButtonToggled(bool toggled)
{
    if(toggled)
    {
        ColorDi->show();
    }
    else
    {
        ColorDi->hide();
    }
}

