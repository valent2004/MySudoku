#ifndef PLAYSUDOKU_H
#define PLAYSUDOKU_H

#include <QDialog>
#include "sudokufield.h"

namespace Ui {
class PlaySudokuDialog;
}

class PlaySudokuDialog : public QDialog
{
    Q_OBJECT

    SudokuField sudokuField;

public:
    explicit PlaySudokuDialog(QWidget *parent = nullptr);
    bool check(QVector<QString> sq1, int inter, QString num[]);
    int massive(QVector<QString> sq1, QVector<QString> notSame, QString this_is, QString num[], int integer);
    void setNumbers(SudokuField newSudoku);
    ~PlaySudokuDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PlaySudokuDialog *ui;
    void showInformation();
};

#endif // PLAYSUDOKU_H
