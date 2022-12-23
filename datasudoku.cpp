#include "datasudoku.h"
#include "ui_datasudoku.h"
#include <QPushButton>
#include <QFileDialog>
#include <QFile>
#include <QDesktopServices>
#include <QPushButton>

DataSudoku::DataSudoku(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataSudoku)
{
    ui->setupUi(this);
    this->setWindowTitle("DataSudoku");
//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("./test.db");
//    if(db.open())
//    {
//        qDebug("open");
//        query = new QSqlQuery(db);
//        query->exec("CREATE TABLE Sudoku(sudoku TEXT, numbers INT);");
//        model = new QSqlTableModel(this, db);
//        model->setTable("Sudoku");
//        model->select();
//        ui->tableView_2->setModel(model);
//    }
//    else
//    {
//        qDebug("not open");
//    }
}

DataSudoku::~DataSudoku()
{
    delete ui;
}

void DataSudoku::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose the ini file"), "C\\", tr("Initialization file (*.ini)"));
    model->insertRow(model->rowCount());
    //QDesktopServices::openUrl(QUrl("file:///" + fileName, QUrl::TolerantMode));
}

