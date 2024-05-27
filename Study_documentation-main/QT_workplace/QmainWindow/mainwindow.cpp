#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QLabel>
#include <QDebug>
#include <QDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 处理菜单栏按钮
    connect(ui->actionopen, &QAction::triggered, this, [=](){
        QDialog dlg(this);
        // 显示模态对话框，exec
        dlg.exec();   // 会阻塞窗口

        QString fileName = QFileDialog::getOpenFileName(this, "打开图像", "D:\\");
        qDebug() << fileName.toUtf8().data();
    });


    connect(ui->actionsave, &QAction::triggered, this, [=](){
        QDialog *dlg = new QDialog(this);
        // 显示非模态对话框， show
        // 设置对话框属性
        dlg->setAttribute(Qt::WA_DeleteOnClose);
        dlg->show();   // 不会阻塞窗口，要显示，必须new一下

    });

    connect(ui->actionedit, &QAction::triggered, this, [=](){
        if(QMessageBox::Ok == QMessageBox::critical(this, "打开错误", "图片类型不符", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel)){
            qDebug() << "重新打开";
        }
    });

    ui->dockWidget->show();


    QPushButton *button1 = new QPushButton("状态1", this);
    ui->statusbar->addWidget(button1);

    QLabel* label1 = new QLabel("状态2",this);
    ui->statusbar->addWidget(label1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

