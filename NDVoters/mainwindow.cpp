#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/Leah/Desktop/puppy.jpg");
    ui->label_pic->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
}
