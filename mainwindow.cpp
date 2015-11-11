#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "poligono.h"
#include "arco.h"
#include "cubo.h"
#include "prismatriangular.h"
#include "prismarectangular.h"
#include "cono.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    poligono poli;
    poli.setModal(true);
    poli.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Arco arc;
    arc.setModal(true);
    arc.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    cubo cu;
    cu.setModal(true);
    cu.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    prismaTriangular prismaT;
    prismaT.setModal(true);
    prismaT.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    prismaRectangular prismaR;
    prismaR.setModal(true);
    prismaR.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    cono co;
    co.setModal(true);
    co.exec();
}
