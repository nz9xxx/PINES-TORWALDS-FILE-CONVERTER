#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMimeData>
#include <QDragEnterEvent>
#include <QUrl>
#include <QFile>
#include "global.h"
#include <QTextStream>
#include <QMimeData>
#include <iostream>
#include <threads.h>

std::string path;
std::string fs;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAcceptDrops(true);
//    setWindowIcon(QIcon("../unknown.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dragEnterEvent(QDragEnterEvent *e)
{
    if (e->mimeData()->hasUrls()) {
        e->acceptProposedAction();
    }
}

void MainWindow::dropEvent(QDropEvent *e)
{
    foreach (const QUrl &url, e->mimeData()->urls()) {
        QString fileName = url.toLocalFile();

        path = fileName.toStdString();
    }
}

Threads Globus;
void MainWindow::on_pushButton_clicked()
{
    fs = "NTFS";
    Globus.start();
}

void MainWindow::on_pushButton_3_clicked()
{
    fs = "FAT32";
    Globus.start();
}

void MainWindow::on_pushButton_2_clicked()
{
    fs = "exFAT";
    Globus.start();
}
