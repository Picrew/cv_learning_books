#include "mywidget.h"
#include "mybutton.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{

    /* 如果窗口需要依附另外一个窗口，需要给该窗口指定父类*/
    /* 父窗口显示的时候，子窗口也会随之显示*/
    // 一般在构造函数里进行一些初始化工作
    b2 = new QPushButton("hello, qt", this);
    // b2->setText("hello, qt");
    b2->move(100,100);
    b1.setParent(this);
    b1.setText("我是老二");
    b1.move(200,200);   // 移动位置
    b1.resize(50,50);   // 改变大小
    //创建自定义按钮对象
    MyButton* btn = new MyButton(this);
    btn->setText("wo shi my button");
    connect(btn, &QPushButton::clicked, this, [=](){
        b1.setText("lamda表达式改变");
        btn->hide();
    });

    QPushButton *b3 = new QPushButton("点击跳转", this);
    b3->move(50,50);

    // 设置窗口标题
    this->setWindowTitle("这是一个demo");
    //this->resize(400,500);
    this->setFixedSize(400,500);
    // 设置窗口图标
    this->setWindowIcon(QIcon("C:\\Users\\94960\\Desktop\\JISOO\\7080ab5bgy1gs9dm8cl69j20j60nwn4c.jpg"));

    // 需求点击b1关闭窗口
    // connect(b1, 发出的信号, this, 处理信号的槽函数)；
    //1.信号只有函数声明，不需要函数定义
    //2.槽函数需要声明也需要定义，其实就是回调函数
    connect(&b1, &QPushButton::clicked, this, &MyWidget::close);

    // 自定义槽函数
    /*
        1. 槽函数在Qt5中可以是任意类成员函数，全局函数，静态函数，lamda表达式（隐式函数）
        2.槽函数需要与信号对应（返回值，参数）
        3.信号没有返回值，槽函数返回值：void
        4.void mysig（int，double，Qstring）；
          void myslot（int， double）可以；
        5.槽函数的参数是为了接受信号传过来的数据
        6.槽函数的参数应该是不能够大于信号的参数个数，可以少于信号的参数个数
        7.槽函数可以重载
    */
    connect(b2, &QPushButton::clicked, this, &MyWidget::slotForMainWidget);
    connect(b3, &QPushButton::clicked, this, &MyWidget::jumpToWin2);

    void(SubWidget::*mySigSub)() = &SubWidget::sigSub;
    connect(&subw, mySigSub, this, &MyWidget::slotShowme);
    void(SubWidget::*mySigPlus)(int, QString) = &SubWidget::sigSub;
    connect(&subw, mySigPlus, this, &MyWidget::slotPrintFunc);
}

MyWidget::~MyWidget()
{
}

void MyWidget::slotForMainWidget(){
    b2->setText("我被老大修改了");
}

void MyWidget::jumpToWin2(){
    hide();
    subw.show();
}

void MyWidget::slotShowme(){
    show();
    subw.hide();
}

void MyWidget::slotPrintFunc(int n, QString str){
    qDebug() << n << "," << str.toUtf8().data();
}
