#ifndef SUDOKUFIELD_H
#define SUDOKUFIELD_H

#include <QVector>
#include <QString>

struct SudokuField {
    QVector<QString> squares[9];

    QVector<QString> columns[9];

    QVector<QString> rows[9];
};

#endif // SUDOKUFIELD_H
