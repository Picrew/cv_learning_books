#ifndef HALCON_T_WINDOW_H
#define HALCON_T_WINDOW_H

#include "HalconCpp.h"
#include "HDevThread.h"

#include <QMainWindow>

using namespace HalconCpp;

QT_BEGIN_NAMESPACE
namespace Ui { class Halcon_t_Window; }
QT_END_NAMESPACE

class Halcon_t_Window : public QMainWindow
{
    Q_OBJECT

public:
    Halcon_t_Window(QWidget *parent = nullptr);
    ~Halcon_t_Window();
    // Local iconic variables
    HObject  ho_Image, ho_GrayImage,  ho_ImageInduced,  ho_Origin;

    // Local control variables
    HTuple  hv_dir,  hv_WindowID;


    HTuple temp_dir;

    int flag = 0;



private slots:
    void showImage();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Halcon_t_Window *ui;
};
#endif // HALCON_T_WINDOW_H
