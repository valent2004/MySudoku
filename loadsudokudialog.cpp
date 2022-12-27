#include "loadsudokudialog.h"
#include "ui_loadsudokudialog.h"
#include "playsudokudialog.h"
#include "sudoku.h"
#include <QPushButton>
#include <QFileDialog>
#include <QFile>
#include <QDesktopServices>
#include <QPushButton>

LoadSudokuDialog::LoadSudokuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoadSudokuDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Load Sudoku");
    dbManager = SqliteDBManager::getInstance();
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("sudokus");
    model->select();
    ui->sudokuListTableView->setModel(model);
    ui->sudokuListTableView->setColumnHidden(0, true);    // Приховуємо колонку з  id записів таблиці БД
    // Дозволяємо виділення рядків
    ui->sudokuListTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    // Встановлюємо режим виділення лише одного рядка в таблиці
    ui->sudokuListTableView->setSelectionMode(QAbstractItemView::SingleSelection);
    // Встановлюємо розмір колонок по вмісту
    ui->sudokuListTableView->resizeColumnsToContents();
    ui->sudokuListTableView->setEditTriggers(QAbstractItemView::DoubleClicked);
    ui->sudokuListTableView->horizontalHeader()->setStretchLastSection(true);
}

LoadSudokuDialog::~LoadSudokuDialog()
{
    delete ui;
}

void LoadSudokuDialog::on_UploadSudokuPB_clicked()
{
    //TODO отримання id по вибраному судоку із списка tableView

    Sudoku* loadSudoku = dbManager->loadSudokuByID(1);
    PlaySudokuDialog playSudokuDialog;
    playSudokuDialog.setNumbers(loadSudoku->getSudokuField());
    playSudokuDialog.setModal(true);
    playSudokuDialog.exec();
}
