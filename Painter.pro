#-------------------------------------------------
#
# Project created by QtCreator 2017-01-11T10:24:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Painter
TEMPLATE = app


SOURCES += main.cpp \
    paintwidget.cpp \
    paintarea.cpp \
    Filters/paintareafilter.cpp \
    QShapes/triangle.cpp \
    QShapes/circle.cpp \
    QShapes/qshape.cpp \
    QShapes/elastick.cpp \
    Strategies/trianglestrategy.cpp \
    Strategies/circlestrategy.cpp \
    Strategies/squarestrategy.cpp \
    Strategies/shapestrategy.cpp \
    Strategies/elastickstrategy.cpp \
    QShapes/square.cpp \
    paintwidgetcontroller.cpp \
    colorwidget.cpp

HEADERS  += \
    paintwidget.h \
    paintareafilter.h \
    paintarea.h \
    Filters/paintareafilter.h \
    QShapes/qshape.h \
    QShapes/triangle.h \
    QShapes/circle.h \
    QShapes/ishape.h \
    QShapes/elastick.h \
    Strategies/istrategy.h \
    Strategies/trianglestrategy.h \
    Strategies/circlestrategy.h \
    Strategies/squarestrategy.h \
    Strategies/shapestrategy.h \
    Strategies/elastickstrategy.h \
    QShapes/square.h \
    paintwidgetcontroller.h \
    colorwidget.h


RESOURCES += \
    qml.qrc

DISTFILES +=

