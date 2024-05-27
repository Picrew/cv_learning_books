#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    b1 = new QPushButton("这是另一个窗口", this);
    b1->move(100,100);
    this->setWindowTitle("Window2");
    this->resize(200,200);

    connect(b1, &QPushButton::clicked, this, &SubWidget::myslot);
}


void SubWidget::myslot(){

    // 发送信号
    emit sigSub();
    emit sigSub(250, "你是250");
}
