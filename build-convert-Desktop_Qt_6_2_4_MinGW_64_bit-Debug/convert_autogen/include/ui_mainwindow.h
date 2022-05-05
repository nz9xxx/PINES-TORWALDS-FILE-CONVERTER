/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *actionWindows_version_1_0;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuSimple_File_Converter;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 320);
        MainWindow->setMaximumSize(QSize(550, 320));
        MainWindow->setAcceptDrops(true);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        actionWindows_version_1_0 = new QAction(MainWindow);
        actionWindows_version_1_0->setObjectName(QString::fromUtf8("actionWindows_version_1_0"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 240, 100, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 240, 100, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 240, 100, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 431, 61));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(110, 160, 331, 23));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 21));
        menuSimple_File_Converter = new QMenu(menubar);
        menuSimple_File_Converter->setObjectName(QString::fromUtf8("menuSimple_File_Converter"));
        menu = new QMenu(menuSimple_File_Converter);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSimple_File_Converter->menuAction());
        menuSimple_File_Converter->addAction(menu->menuAction());
        menuSimple_File_Converter->addAction(actionWindows_version_1_0);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\320\265\320\273\320\270: \320\227\320\260\321\210\321\202\320\276\320\262 \320\220\321\200\321\202\321\221\320\274 \320\270 \320\234\320\270\321\205\320\260\320\270\320\273 \320\224\320\276\321\201\320\272\320\260\320\273\321\203", nullptr));
        actionWindows_version_1_0->setText(QCoreApplication::translate("MainWindow", "Windows version 1.0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "NTFS", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "exFAT", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "FAT32", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt;\">\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\320\265 \321\201\321\216\320\264\320\260</span></p></body></html>", nullptr));
        menuSimple_File_Converter->setTitle(QCoreApplication::translate("MainWindow", "SFC", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
