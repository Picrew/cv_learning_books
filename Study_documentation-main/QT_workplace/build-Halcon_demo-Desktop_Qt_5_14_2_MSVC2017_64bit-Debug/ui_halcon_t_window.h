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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Halcon_t_Window
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Halcon_t_Window)
    {
        if (Halcon_t_Window->objectName().isEmpty())
            Halcon_t_Window->setObjectName(QString::fromUtf8("Halcon_t_Window"));
        Halcon_t_Window->setEnabled(true);
        Halcon_t_Window->resize(800, 600);
        Halcon_t_Window->setMinimumSize(QSize(800, 600));
        Halcon_t_Window->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font.setPointSize(14);
        Halcon_t_Window->setFont(font);
        centralwidget = new QWidget(Halcon_t_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 591, 551));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(630, 0, 141, 551));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        Halcon_t_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Halcon_t_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
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
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Halcon_t_Window", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Halcon_t_Window", "\345\216\237\345\233\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Halcon_t_Window", "\347\201\260\345\272\246\345\214\226", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Halcon_t_Window", "\346\217\220\345\217\226ROI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Halcon_t_Window: public Ui_Halcon_t_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALCON_T_WINDOW_H
