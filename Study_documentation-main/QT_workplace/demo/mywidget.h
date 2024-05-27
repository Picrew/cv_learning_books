#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"

class MyWidget : public QWidget
{
    Q_OBJECT    // 如果使用信号和槽，必须添加这个宏

public:
    MyWidget(QWidget *parent = nullptr);   // 构造函数
    ~MyWidget();          // 析构函数

    // 自定义槽函数
    void slotForMainWidget();
    void jumpToWin2();
    void slotShowme();
    void slotPrintFunc(int n, QString str);

private:
    QPushButton b1;    // 在窗口中插入两个按钮
    QPushButton *b2;   // 这个要能使用必须初始化new一下
    QPushButton *b3;
    SubWidget subw;
};
#endif // MYWIDGET_H
