#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QVariantList>

#include <dbmanager.h>

/* Директиви імен таблиці, полів таблиці і бази даних */
#define DATABASE_HOSTNAME   "Localhost"
#define DATABASE_NAME       "DataBase3.db"

// Клас, який реалізує логіку абстрактного класу DBManager для роботи із БД SQLite
class SqliteDBManager : public DBManager {

public:
    // Метод для отримання екземпляру даного класу (патерн Singleton)
    static SqliteDBManager* getInstance();

    // Метод для підключення до бази даних
    void connectToDataBase();

    // Метод для отримання обробника (хендлера) підключення до БД
    QSqlDatabase getDB();

    // Метод для збереження судоку
    bool save(Sudoku* sudoku);

    // Метод для загрузки судоку по id
    Sudoku* loadSudokuByID(int id);

private:
    // Обробник підключення до БД, через який буде виконуватись робота із БД
    QSqlDatabase db;

    static SqliteDBManager* instance;

    // Приватний конструктор
    SqliteDBManager();

    /* Внутрішні методи для роботи з базою даних
     * */
    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};



#endif // DATABASE_H
