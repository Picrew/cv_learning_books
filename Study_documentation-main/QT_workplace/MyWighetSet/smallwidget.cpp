#include "smallwidget.h"
#include "ui_smallwidget.h"

SmallWidget::SmallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SmallWidget)
{
    ui->setupUi(this);
    void (QSpinBox::*sigValueChange)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, sigValueChange, ui->horizontalSlider, &QSlider::setValue);

    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}

SmallWidget::~SmallWidget()
{
    delete ui;
}


int SmallWidget::getValue(){
    return ui->spinBox->value();
}


void SmallWidget::SetValue(int value){

    if(value >0 && value < 100){
        ui->spinBox->setValue(value);
    }
}
