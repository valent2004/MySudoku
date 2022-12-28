#include "sudoku.h"
#include <QDebug>

Sudoku::Sudoku(QString name, SudokuField sudokuField, int id)
{
    this->id = id;
    this->name = name;
    this->sudokuField = sudokuField;
}

void Sudoku::setId(int id)
{
    this->id = id;
}

int Sudoku::getId()
{
    return id;
}

void Sudoku::setName(QString name)
{
    this->name = name;
}

QString Sudoku::getName()
{
    return name;
}

void Sudoku::setSudokuField(SudokuField sudokuField)
{
    this->sudokuField = sudokuField;
}

SudokuField Sudoku::getSudokuField()
{
    return sudokuField;
}

QString Sudoku::getSudokuFieldAsSequence()
{
    QString sequence;
    for (int j = 0; j < 9; j++)  //row index
    {
        for (int i = 0; i < 9; i++)
        {
            if (sudokuField.rows[j].at(i).isEmpty())
            {
                sequence.push_back('X');
            } else
            {
                sequence.push_back(sudokuField.rows[j].at(i).at(0));
            }
        }
    }
    qDebug() << sequence;
    return sequence;
}

