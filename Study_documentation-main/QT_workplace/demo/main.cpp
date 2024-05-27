#include "mywidget.h"

// qt中类名和头文件名一样，且没有.h
#include <QApplication>

// 应用程序入口
int main(int argc, char *argv[])
{
    // 应用程序类，每个QT程序中有且只有一个
    QApplication a(argc, argv);
    // 创建了窗口类对象，默认不显示
    MyWidget w;     // 顶层窗口

    // 显示窗口
    w.show();
    //subw.show();
    // 死循环，等待接收事件响应
    return a.exec();
}
