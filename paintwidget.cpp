#include "paintwidget.h"
#include "paintareafilter.h"


PaintWidget::PaintWidget(QWidget *parent)
    :QWidget(parent)
{
    //create PaintArea
    TuningPaintarea(pArea);

    //create Buttons Wgt
    FillButtons(buttonCircle,   ":/Shapes/Circle.jpg");
    FillButtons(buttonSquare,   ":/Shapes/Square.jpg");
    FillButtons(buttonTriangle, ":/Shapes/Triangle.jpg");
    FillButtons(butElastick,    ":/Shapes/Elastick.jpg");
    FillButtons(buttonShape,    ":/Shapes/Pen.jpg" );

    //create LineWidth Spinbox
    FillLineWidthSpinbox(LineWidth);

    //create LineStyle Wgt
    FilleLineStyleList(StylesComboBox);

    ColorBox = new ColorWidget(this);
    ColorBox->setSizePolicy(QSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum));
    //connects
    connect(buttonSquare,SIGNAL(pressed()),&PaintWidgetController::getInstance(),SLOT(SquareButtonPress()));
    connect(buttonCircle,SIGNAL(pressed()),&PaintWidgetController::getInstance(),SLOT(CircleButtonPress()));
    connect(buttonTriangle,SIGNAL(pressed()),&PaintWidgetController::getInstance(),SLOT(TriangleButtonPress()));
    connect(butElastick,SIGNAL(pressed()),&PaintWidgetController::getInstance(),SLOT(ElastickButtonPress()));
    connect(buttonShape,SIGNAL(pressed()),&PaintWidgetController::getInstance(),SLOT(PencilButtonPress()));
    connect(LineWidth,SIGNAL(valueChanged(int)),&PaintWidgetController::getInstance(),SLOT(WidthChanged(int)));
    connect(StylesComboBox,SIGNAL(currentIndexChanged(int)),&PaintWidgetController::getInstance(),SLOT(StyleChanged(int)));

    QHBoxLayout * buttonLayot = new QHBoxLayout;
    buttonLayot->addWidget(buttonCircle);
    buttonLayot->addWidget(buttonSquare);
    buttonLayot->addWidget(buttonTriangle);
    buttonLayot->addWidget(butElastick);
    buttonLayot->addWidget(buttonShape);
    buttonLayot->addWidget(LineWidth);
    buttonLayot->addWidget(StylesComboBox);
    buttonLayot->addWidget(ColorBox);

    buttonLayot->addStretch(1);

    QVBoxLayout*mainLayout = new QVBoxLayout;

    mainLayout->addLayout(buttonLayot);
    mainLayout->addWidget(pArea);


    buttonCircle->installEventFilter(this);

    this->setLayout(mainLayout);
}

void PaintWidget::TuningPaintarea(PaintArea *& lable)
{
    lable = new PaintArea(this);
    QPalette  palette (Qt::white);
    lable->setPalette(palette);
    lable->setAutoFillBackground(true);
}

void PaintWidget::FillButtons(QPushButton *&but, const QString &iconPath)
{
    but = new QPushButton(this);
    QImage img(iconPath);
    QPixmap pix(QPixmap::fromImage(img.scaled(20,20,Qt::IgnoreAspectRatio)));
    but->setIcon(pix);
    but->setIconSize(pix.size());
    but->setStyle(QStyleFactory::create("QFusionStyle"));
}

void PaintWidget::FillLineWidthSpinbox(QSpinBox *& spb)
{
    spb = new QSpinBox(this);
    spb->setFixedSize(35,25);
    spb->setValue(3);
}

void PaintWidget::FilleLineStyleList(QComboBox *& cbox )
{
    cbox = new QComboBox(this);
    QStringList lst;
    lst<<"SolidLine"<<"DashLine"<<"DotLine"<<"DashDotLine"<<"DashDotDotLine";
    cbox->addItems(lst);

}


