#include <QtWidgets>
#include "paintareafilter.h"

PaintAreaFilter::PaintAreaFilter(QObject* parent)
    :QObject(parent)
{
}
bool PaintAreaFilter::eventFilter(QObject* obj, QEvent* event)
{
    qDebug()<<"FILTER !!!"<< event <<"\n";
    return true;

}
