#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QVariantList>
#include "sudoku.h"

class DBManager
{
public:
    virtual void connectToDataBase() = 0;
    virtual QSqlDatabase getDB() = 0;
    virtual bool save(Sudoku* sudoku) = 0;
    virtual Sudoku* loadSudokuByID(int id) = 0;
};

#endif // DBMANAGER_H
