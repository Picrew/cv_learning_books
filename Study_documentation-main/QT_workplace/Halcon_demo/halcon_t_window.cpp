#include "halcon_t_window.h"
#include "ui_halcon_t_window.h"

#include <QFileDialog>
#include <QDebug>

Halcon_t_Window::Halcon_t_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Halcon_t_Window)
{

    ui->setupUi(this);

    Hlong MainWndID = (Hlong)this->ui->graphicsView->winId();  // 将控件和Halcon窗口绑定起来，指定父窗口，很重要！
    OpenWindow(0, 0, ui->graphicsView->width(), ui->graphicsView->height(), MainWndID, "visible", "", &hv_WindowID);
    SetPart(hv_WindowID, 0, 0, 600, 800);
    SetDraw(hv_WindowID, "margin");
    HDevWindowStack::Push(hv_WindowID);

    connect(ui->pushButton, &QPushButton::clicked, this, [=](){
        QString fileName = QFileDialog::getOpenFileName(this, "打开图像", "D:\\", "Images (*.png *.jpeg *.jpg)");
        temp_dir = HTuple(fileName.toLatin1().data());
        Halcon_t_Window::showImage();

    });

}

Halcon_t_Window::~Halcon_t_Window()
{
    delete ui;
}


void Halcon_t_Window::showImage(){

    ClearWindow(hv_WindowID);
    ReadImage(&ho_Image, temp_dir);
    if (HDevWindowStack::IsOpen())
        DispObj(ho_Image, HDevWindowStack::GetActive());
    flag = 1;

}


void Halcon_t_Window::on_pushButton_2_clicked()
{
    HObject temp_Image;
    switch (flag) {
        case 1: {temp_Image = ho_Image; break;}
        case 2: {temp_Image = ho_GrayImage; break;}
        case 3: {temp_Image = ho_ImageInduced; break;}
        case 4: {temp_Image = ho_Origin; break;}
    }
    ClearWindow(hv_WindowID);
    Rgb1ToGray(temp_Image, &ho_GrayImage);
    if (HDevWindowStack::IsOpen())
        DispObj(ho_GrayImage, HDevWindowStack::GetActive());
    flag = 2;
}

void Halcon_t_Window::on_pushButton_3_clicked()
{
    HObject  ho_Rectangle, temp_Image;

    // Local control variables
    HTuple  hv_Row1, hv_Column1;
    HTuple  hv_Row2, hv_Column2;

    switch (flag) {
        case 1: {temp_Image = ho_Image; break;}
        case 2: {temp_Image = ho_GrayImage; break;}
        case 3: {temp_Image = ho_ImageInduced; break;}
        case 4: {temp_Image = ho_Origin; break;}
    }

    DrawRectangle1(hv_WindowID, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

    GenRectangle1(&ho_Rectangle, hv_Row1, hv_Column1, hv_Row2, hv_Column2);
    ReduceDomain(temp_Image, ho_Rectangle, &ho_ImageInduced);
    ClearWindow(hv_WindowID);
    if (HDevWindowStack::IsOpen())
        DispObj(ho_ImageInduced, HDevWindowStack::GetActive());
    flag = 3;
}

void Halcon_t_Window::on_pushButton_4_clicked()
{
    ClearWindow(hv_WindowID);
    ReadImage(&ho_Origin, temp_dir);
    if (HDevWindowStack::IsOpen())
        DispObj(ho_Origin, HDevWindowStack::GetActive());
    flag =4;
}
