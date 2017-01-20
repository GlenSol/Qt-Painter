#include <QApplication>

#include "paintwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QApplication::setStyle("QFusionStyle");
    PaintWidget wgt;
    wgt.setWindowTitle(QObject::tr("PAINTER"));
    QList<QWidget*> pwgtList =wgt.findChildren<QWidget*>();
    foreach(QWidget* pwgt, pwgtList)
    {
        pwgt->setStyle(QStyleFactory::create("Fusion"));
    }
    wgt.setMinimumHeight(200);
    wgt.show();
    return app.exec();
}
