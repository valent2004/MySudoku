#ifndef SUDOKU_H
#define SUDOKU_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class CreateSudokuDialog;
}

class CreateSudokuDialog : public QDialog
{
    Q_OBJECT
public:
    QVector<QString>square1;
    QVector<QString>square2;
    QVector<QString>square3;
    QVector<QString>square4;
    QVector<QString>square5;
    QVector<QString>square6;
    QVector<QString>square7;
    QVector<QString>square8;
    QVector<QString>square9;
    QVector<QString>column1;
    QVector<QString>column2;
    QVector<QString>column3;
    QVector<QString>column4;
    QVector<QString>column5;
    QVector<QString>column6;
    QVector<QString>column7;
    QVector<QString>column8;
    QVector<QString>column9;
    QVector<QString>row1;
    QVector<QString>row2;
    QVector<QString>row3;
    QVector<QString>row4;
    QVector<QString>row5;
    QVector<QString>row6;
    QVector<QString>row7;
    QVector<QString>row8;
    QVector<QString>row9;
    QString name;
    explicit CreateSudokuDialog(QWidget *parent = nullptr);
    bool check(QVector<QString> sq1, int inter, QString num[]);
    int massive(QVector<QString> sq1, QVector<QString> notSame, QString this_is, QString num[], int integer, int count_numbers);
    int numberPlus();
    ~CreateSudokuDialog();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::CreateSudokuDialog *ui;
};

#endif // SUDOKU_H
