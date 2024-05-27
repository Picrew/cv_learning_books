#include "halcon_t_window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Halcon_t_Window w;
    w.show();
    return a.exec();
}
