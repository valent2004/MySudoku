#ifndef DATASUDOKU_H
#define DATASUDOKU_H
#include <QDialog>
#include "createsudokudialog.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class DataSudoku;
}

class DataSudoku : public QDialog
{
    Q_OBJECT
public:
    int id = 0;
    explicit DataSudoku(QWidget *parent = nullptr);
    ~DataSudoku();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DataSudoku *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
};

#endif // DATASUDOKU_H
