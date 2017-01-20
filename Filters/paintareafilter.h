#ifndef PAINTAREAFILTER_H
#define PAINTAREAFILTER_H
#include <QObject>

class PaintAreaFilter: public QObject
{
    Q_OBJECT
public:
    PaintAreaFilter(QObject* parent = 0);
protected:

virtual bool eventFilter(QObject* obj, QEvent* event);
};

#endif // PAINTAREAFILTER_H
