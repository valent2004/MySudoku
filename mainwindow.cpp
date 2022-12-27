#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createsudokudialog.h"
#include "datasudoku.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("MySudoku");
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CreateSudokuPB_clicked()
{
    CreateSudokuDialog sudoku;
    sudoku.setModal(true);
    sudoku.exec();
}


void MainWindow::on_LoadSudokuPB_clicked()
{
    DataSudoku data;
    data.setModal(true);
    data.exec();
}
