#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMinimumSize(300,300);
       setMaximumSize(300,300);

}

MainWindow::~MainWindow()
{
    delete ui;
}

