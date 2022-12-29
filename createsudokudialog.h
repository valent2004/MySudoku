#ifndef CREATESUDOKUDIALOG_H
#define CREATESUDOKUDIALOG_H

#include <QDialog>

#include "sudokufield.h"

namespace Ui {
class CreateSudokuDialog;
}

class CreateSudokuDialog : public QDialog
{
    Q_OBJECT
    SudokuField sudokuField;
public:
    QString name;
    explicit CreateSudokuDialog(QWidget *parent = nullptr);
    bool check(QVector<QString> sq1, int inter, QString num[]);
    int massive(QVector<QString> sq1, QVector<QString> notSame, QString this_is, QString num[], int integer, int count_numbers);
    int numberPlus();
    ~CreateSudokuDialog();

private slots:
    void on_savePB_clicked();
    void on_playPB_clicked();

private:
    Ui::CreateSudokuDialog *ui;
    void readSudokuFieldFromWindow();
    void clearSudokuField();
    bool checkSudokuField();
};

#endif // CREATESUDOKUDIALOG_H
