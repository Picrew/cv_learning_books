#include "mainwindow.h"
#include "ui_mainwindow.h"

/*有时我们在布局的时候为了方便操作，通常可以讲几个控件结合起来，自己封装一个类去自定义控件，
 *
 * 这样就可以在下次想使用时直接组合拖动控件*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

