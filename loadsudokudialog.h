#ifndef LOADSUDOKUDIALOG_H
#define LOADSUDOKUDIALOG_H
#include <QDialog>
#include "createsudokudialog.h"
#include "sqlitedbmanager.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class LoadSudokuDialog;
}

class LoadSudokuDialog : public QDialog
{
    Q_OBJECT
public:
    int id = 0;
    explicit LoadSudokuDialog(QWidget *parent = nullptr);
    ~LoadSudokuDialog();

private slots:
    void on_UploadSudokuPB_clicked();

private:
    Ui::LoadSudokuDialog *ui;
    QSqlTableModel *model;
    DBManager *dbManager;
};

#endif // LOADSUDOKUDIALOG_H
