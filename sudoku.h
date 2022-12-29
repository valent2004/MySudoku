#ifndef SUDOKU_H
#define SUDOKU_H

#include "sudokufield.h"
#include <QString>

class Sudoku
{
    int id;
    QString name;
    SudokuField sudokuField;
public:
    Sudoku(QString name, SudokuField sudokuField, int id = 0);
    Sudoku(QString name, QString sequence, int id = 0);
    void setId(int id);
    int getId();
    void setName(QString name);
    QString getName();
    void setSudokuField(SudokuField sudokuField);
    SudokuField getSudokuField();
    QString getSudokuFieldAsSequence();
};

#endif // SUDOKU_H
