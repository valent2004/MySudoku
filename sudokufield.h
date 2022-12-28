#ifndef SUDOKUFIELD_H
#define SUDOKUFIELD_H

#include <QVector>
#include <QString>

struct SudokuField {
    QVector<QString> square1;
    QVector<QString> square2;
    QVector<QString> square3;
    QVector<QString> square4;
    QVector<QString> square5;
    QVector<QString> square6;
    QVector<QString> square7;
    QVector<QString> square8;
    QVector<QString> square9;

    QVector<QString> column1;
    QVector<QString> column2;
    QVector<QString> column3;
    QVector<QString> column4;
    QVector<QString> column5;
    QVector<QString> column6;
    QVector<QString> column7;
    QVector<QString> column8;
    QVector<QString> column9;

    QVector<QString> rows[9];
};

#endif // SUDOKUFIELD_H
