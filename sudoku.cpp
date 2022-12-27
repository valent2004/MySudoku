#include "sudoku.h"

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

