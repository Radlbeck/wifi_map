#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wifi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Wifi myfi;
    QString qstr = QString::fromStdString(myfi.raw());

    ui->textBrowser->setText(qstr);
}

MainWindow::~MainWindow()
{
    delete ui;
}
