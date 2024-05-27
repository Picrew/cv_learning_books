/********************************************************************************
** Form generated from reading UI file 'halcon_t_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALCON_T_WINDOW_H
#define UI_HALCON_T_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Halcon_t_Window
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Halcon_t_Window)
    {
        if (Halcon_t_Window->objectName().isEmpty())
            Halcon_t_Window->setObjectName(QString::fromUtf8("Halcon_t_Window"));
        Halcon_t_Window->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        Halcon_t_Window->setFont(font);
        centralwidget = new QWidget(Halcon_t_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 350, 111, 51));
        Halcon_t_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Halcon_t_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 32));
        Halcon_t_Window->setMenuBar(menubar);
        statusbar = new QStatusBar(Halcon_t_Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Halcon_t_Window->setStatusBar(statusbar);

        retranslateUi(Halcon_t_Window);

        QMetaObject::connectSlotsByName(Halcon_t_Window);
    } // setupUi

    void retranslateUi(QMainWindow *Halcon_t_Window)
    {
        Halcon_t_Window->setWindowTitle(QCoreApplication::translate("Halcon_t_Window", "Halcon\350\201\224\345\212\250\346\265\213\350\257\225", nullptr));
        pushButton->setText(QCoreApplication::translate("Halcon_t_Window", "\347\201\260\345\272\246\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Halcon_t_Window: public Ui_Halcon_t_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALCON_T_WINDOW_H
