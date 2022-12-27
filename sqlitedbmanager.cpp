#include "sqlitedbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>

SqliteDBManager* SqliteDBManager::instance = nullptr;

SqliteDBManager::SqliteDBManager(){
}

// Метод для отримання екземпляру даного класу (патерн Singleton)
SqliteDBManager* SqliteDBManager::getInstance()
{
    if(instance == nullptr){
        instance = new SqliteDBManager();
        instance->connectToDataBase();
    }
    return instance;
}

// Метод для підключення до бази даних
void SqliteDBManager::connectToDataBase()
{
    /* Перед підключенням до бази даних виконуємо перевірку на її існування.
     * В залежності від результату виконуємо відкриття бази даних або її відновлення
     * */
    if(QFile(DATABASE_NAME).exists()){
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

// Метод для отримання обробника підключення до БД
QSqlDatabase SqliteDBManager::getDB()
{
    return db;
}

// Метод відновлення бази даних
bool SqliteDBManager::restoreDataBase()
{
    if(this->openDataBase()){
        if(!this->createTables()){
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

// Метод для відкриття бази даних
bool SqliteDBManager::openDataBase()
{
    /* База даних відкривається по вказаному шляху
     * і імені бази даних, якщо вона існує
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName(DATABASE_NAME);
    if(db.open()){
        return true;
    } else
        return false;
}

// Метод закриття бази даних
void SqliteDBManager::closeDataBase()
{
    db.close();
}

// Метод для створення таблиці в базі даних
bool SqliteDBManager::createTables()
{
    /* В даному випадку використовується фурмування сирого SQL-запиту
     * з наступним його виконанням.
     * */
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE sudokus (id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR (50));")){
        qDebug() << "DataBase: error of create table 'sudokus'";
        qDebug() << query.lastError().text();
        return false;
    } else
        return true;
}

// Метод для вставки записів у базу даних
bool SqliteDBManager::save(Sudoku* sudoku)  //Збереження судоку у вигляді матриці
{
    //Запит SQL формується із QVariantList, в який передаються данні для вставки в таблицю.
    QSqlQuery query;
    query.prepare("INSERT INTO sudokus (name) "
                  "VALUES (:Name)");
    query.bindValue(":Name",        sudoku->getName());

    // Після чого виконується запит методом exec()
    if(!query.exec()){
        qDebug() << "error insert into table 'sudokus' ";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();

        return false;
    } else
        return true;
}

Sudoku* SqliteDBManager::loadSudokuByID(int id) //TODO загрузка матриці судоку із БД
{
    //Запит SQL формується із QVariantList, в який передаються данні для вставки в таблицю.
    QSqlQuery query;
    query.prepare("SELECT * FROM sudokus WHERE id = :id;");
    query.bindValue(":id", id);

    // Після чого виконується запит методом exec()
    if(!query.exec()){
        qDebug() << "error select from table 'sudokus' ";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }
    SudokuField sudokuField;
    Sudoku* sudoku = new Sudoku("name", sudokuField, id);
    return sudoku;
}
