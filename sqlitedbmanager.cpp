#include "sqlitedbmanager.h"

#include <QObject>
#include <QSqlQuery>
#include <QSqlRecord>
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
    if(!query.exec( "CREATE TABLE sudokus (id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR (50) NOT NULL, field_sequence VARCHAR (81) NOT NULL);")){
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
    QSqlQuery query(getDB());
    query.prepare("INSERT INTO sudokus (name, field_sequence) "
                  "VALUES (:Name, :Sequence)");
    query.bindValue(":Name",        sudoku->getName());
    query.bindValue(":Sequence",    sudoku->getSudokuFieldAsSequence());

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
    QSqlQuery query(getDB());
    query.prepare("SELECT name, field_sequence FROM sudokus WHERE id = :id;");
    query.bindValue(":id", id);
    // Після чого виконується запит методом exec()
    if(!query.exec()){
        qDebug() << "error select from table 'sudokus' ";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
    }

    Sudoku* sudoku;
    while(query.next())
    {
        QSqlRecord record = query.record();
        qDebug() << "Number of columns: " << record.count();
        qDebug() << record.value(0).toString();
        qDebug() << record.value(1).toString();

        sudoku = new Sudoku(record.value(0).toString(), record.value(1).toString(), id);
    }
    return sudoku;
}
