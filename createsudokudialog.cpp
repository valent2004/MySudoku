#include <QMessageBox>
#include <QFileDialog>
#include "createsudokudialog.h"
#include "playsudokudialog.h"
#include "ui_createsudokudialog.h"
#include "sqlitedbmanager.h"
#include "sudoku.h"

CreateSudokuDialog::CreateSudokuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateSudokuDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Create Sudoku");
}

CreateSudokuDialog::~CreateSudokuDialog()
{
    delete ui;
}

void CreateSudokuDialog::on_savePB_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,"Wrong","You don't have your name");
    }
    else
    {
        DBManager *dbManager = SqliteDBManager::getInstance();
        Sudoku *newSudoku = new Sudoku(ui->lineEdit->text(), this->sudokuField);
        if (dbManager->save(newSudoku))
        {
            QMessageBox::information(this,"SAVED","You save sudoku in name " + ui->lineEdit->text());
        }
    }
}


void CreateSudokuDialog::on_playPB_clicked()
{
    for(int i = 0; i < 9; i++)
    {
        sudokuField.squares[i].clear();
        sudokuField.columns[i].clear();
        sudokuField.rows[i].clear();
    }
    sudokuField.squares[0].push_back(ui->lineEdit_01->text());
    sudokuField.squares[0].push_back(ui->lineEdit_02->text());
    sudokuField.squares[0].push_back(ui->lineEdit_03->text());
    sudokuField.squares[0].push_back(ui->lineEdit_11->text());
    sudokuField.squares[0].push_back(ui->lineEdit_12->text());
    sudokuField.squares[0].push_back(ui->lineEdit_13->text());
    sudokuField.squares[0].push_back(ui->lineEdit_21->text());
    sudokuField.squares[0].push_back(ui->lineEdit_22->text());
    sudokuField.squares[0].push_back(ui->lineEdit_23->text());
    sudokuField.squares[1].push_back(ui->lineEdit_04->text());
    sudokuField.squares[1].push_back(ui->lineEdit_05->text());
    sudokuField.squares[1].push_back(ui->lineEdit_06->text());
    sudokuField.squares[1].push_back(ui->lineEdit_14->text());
    sudokuField.squares[1].push_back(ui->lineEdit_15->text());
    sudokuField.squares[1].push_back(ui->lineEdit_16->text());
    sudokuField.squares[1].push_back(ui->lineEdit_24->text());
    sudokuField.squares[1].push_back(ui->lineEdit_25->text());
    sudokuField.squares[1].push_back(ui->lineEdit_26->text());
    sudokuField.squares[2].push_back(ui->lineEdit_07->text());
    sudokuField.squares[2].push_back(ui->lineEdit_08->text());
    sudokuField.squares[2].push_back(ui->lineEdit_09->text());
    sudokuField.squares[2].push_back(ui->lineEdit_17->text());
    sudokuField.squares[2].push_back(ui->lineEdit_18->text());
    sudokuField.squares[2].push_back(ui->lineEdit_19->text());
    sudokuField.squares[2].push_back(ui->lineEdit_27->text());
    sudokuField.squares[2].push_back(ui->lineEdit_28->text());
    sudokuField.squares[2].push_back(ui->lineEdit_29->text());
    sudokuField.squares[3].push_back(ui->lineEdit_31->text());
    sudokuField.squares[3].push_back(ui->lineEdit_32->text());
    sudokuField.squares[3].push_back(ui->lineEdit_33->text());
    sudokuField.squares[3].push_back(ui->lineEdit_41->text());
    sudokuField.squares[3].push_back(ui->lineEdit_42->text());
    sudokuField.squares[3].push_back(ui->lineEdit_43->text());
    sudokuField.squares[3].push_back(ui->lineEdit_51->text());
    sudokuField.squares[3].push_back(ui->lineEdit_52->text());
    sudokuField.squares[3].push_back(ui->lineEdit_53->text());
    sudokuField.squares[4].push_back(ui->lineEdit_34->text());
    sudokuField.squares[4].push_back(ui->lineEdit_35->text());
    sudokuField.squares[4].push_back(ui->lineEdit_36->text());
    sudokuField.squares[4].push_back(ui->lineEdit_44->text());
    sudokuField.squares[4].push_back(ui->lineEdit_45->text());
    sudokuField.squares[4].push_back(ui->lineEdit_46->text());
    sudokuField.squares[4].push_back(ui->lineEdit_54->text());
    sudokuField.squares[4].push_back(ui->lineEdit_55->text());
    sudokuField.squares[4].push_back(ui->lineEdit_56->text());
    sudokuField.squares[5].push_back(ui->lineEdit_37->text());
    sudokuField.squares[5].push_back(ui->lineEdit_38->text());
    sudokuField.squares[5].push_back(ui->lineEdit_39->text());
    sudokuField.squares[5].push_back(ui->lineEdit_47->text());
    sudokuField.squares[5].push_back(ui->lineEdit_48->text());
    sudokuField.squares[5].push_back(ui->lineEdit_49->text());
    sudokuField.squares[5].push_back(ui->lineEdit_57->text());
    sudokuField.squares[5].push_back(ui->lineEdit_58->text());
    sudokuField.squares[5].push_back(ui->lineEdit_59->text());
    sudokuField.squares[6].push_back(ui->lineEdit_61->text());
    sudokuField.squares[6].push_back(ui->lineEdit_62->text());
    sudokuField.squares[6].push_back(ui->lineEdit_63->text());
    sudokuField.squares[6].push_back(ui->lineEdit_71->text());
    sudokuField.squares[6].push_back(ui->lineEdit_72->text());
    sudokuField.squares[6].push_back(ui->lineEdit_73->text());
    sudokuField.squares[6].push_back(ui->lineEdit_81->text());
    sudokuField.squares[6].push_back(ui->lineEdit_82->text());
    sudokuField.squares[6].push_back(ui->lineEdit_83->text());
    sudokuField.squares[7].push_back(ui->lineEdit_64->text());
    sudokuField.squares[7].push_back(ui->lineEdit_65->text());
    sudokuField.squares[7].push_back(ui->lineEdit_66->text());
    sudokuField.squares[7].push_back(ui->lineEdit_74->text());
    sudokuField.squares[7].push_back(ui->lineEdit_75->text());
    sudokuField.squares[7].push_back(ui->lineEdit_76->text());
    sudokuField.squares[7].push_back(ui->lineEdit_84->text());
    sudokuField.squares[7].push_back(ui->lineEdit_85->text());
    sudokuField.squares[7].push_back(ui->lineEdit_86->text());
    sudokuField.squares[8].push_back(ui->lineEdit_67->text());
    sudokuField.squares[8].push_back(ui->lineEdit_68->text());
    sudokuField.squares[8].push_back(ui->lineEdit_69->text());
    sudokuField.squares[8].push_back(ui->lineEdit_77->text());
    sudokuField.squares[8].push_back(ui->lineEdit_78->text());
    sudokuField.squares[8].push_back(ui->lineEdit_79->text());
    sudokuField.squares[8].push_back(ui->lineEdit_87->text());
    sudokuField.squares[8].push_back(ui->lineEdit_88->text());
    sudokuField.squares[8].push_back(ui->lineEdit_89->text());
    sudokuField.columns[0].push_back(ui->lineEdit_01->text());
    sudokuField.columns[0].push_back(ui->lineEdit_11->text());
    sudokuField.columns[0].push_back(ui->lineEdit_21->text());
    sudokuField.columns[0].push_back(ui->lineEdit_31->text());
    sudokuField.columns[0].push_back(ui->lineEdit_41->text());
    sudokuField.columns[0].push_back(ui->lineEdit_51->text());
    sudokuField.columns[0].push_back(ui->lineEdit_61->text());
    sudokuField.columns[0].push_back(ui->lineEdit_71->text());
    sudokuField.columns[0].push_back(ui->lineEdit_81->text());
    sudokuField.columns[1].push_back(ui->lineEdit_02->text());
    sudokuField.columns[1].push_back(ui->lineEdit_12->text());
    sudokuField.columns[1].push_back(ui->lineEdit_22->text());
    sudokuField.columns[1].push_back(ui->lineEdit_32->text());
    sudokuField.columns[1].push_back(ui->lineEdit_42->text());
    sudokuField.columns[1].push_back(ui->lineEdit_52->text());
    sudokuField.columns[1].push_back(ui->lineEdit_62->text());
    sudokuField.columns[1].push_back(ui->lineEdit_72->text());
    sudokuField.columns[1].push_back(ui->lineEdit_82->text());
    sudokuField.columns[2].push_back(ui->lineEdit_03->text());
    sudokuField.columns[2].push_back(ui->lineEdit_13->text());
    sudokuField.columns[2].push_back(ui->lineEdit_23->text());
    sudokuField.columns[2].push_back(ui->lineEdit_33->text());
    sudokuField.columns[2].push_back(ui->lineEdit_43->text());
    sudokuField.columns[2].push_back(ui->lineEdit_53->text());
    sudokuField.columns[2].push_back(ui->lineEdit_63->text());
    sudokuField.columns[2].push_back(ui->lineEdit_73->text());
    sudokuField.columns[2].push_back(ui->lineEdit_83->text());
    sudokuField.columns[3].push_back(ui->lineEdit_04->text());
    sudokuField.columns[3].push_back(ui->lineEdit_14->text());
    sudokuField.columns[3].push_back(ui->lineEdit_24->text());
    sudokuField.columns[3].push_back(ui->lineEdit_34->text());
    sudokuField.columns[3].push_back(ui->lineEdit_44->text());
    sudokuField.columns[3].push_back(ui->lineEdit_54->text());
    sudokuField.columns[3].push_back(ui->lineEdit_64->text());
    sudokuField.columns[3].push_back(ui->lineEdit_74->text());
    sudokuField.columns[3].push_back(ui->lineEdit_84->text());
    sudokuField.columns[4].push_back(ui->lineEdit_05->text());
    sudokuField.columns[4].push_back(ui->lineEdit_15->text());
    sudokuField.columns[4].push_back(ui->lineEdit_25->text());
    sudokuField.columns[4].push_back(ui->lineEdit_35->text());
    sudokuField.columns[4].push_back(ui->lineEdit_45->text());
    sudokuField.columns[4].push_back(ui->lineEdit_55->text());
    sudokuField.columns[4].push_back(ui->lineEdit_65->text());
    sudokuField.columns[4].push_back(ui->lineEdit_75->text());
    sudokuField.columns[4].push_back(ui->lineEdit_85->text());
    sudokuField.columns[5].push_back(ui->lineEdit_06->text());
    sudokuField.columns[5].push_back(ui->lineEdit_16->text());
    sudokuField.columns[5].push_back(ui->lineEdit_26->text());
    sudokuField.columns[5].push_back(ui->lineEdit_36->text());
    sudokuField.columns[5].push_back(ui->lineEdit_46->text());
    sudokuField.columns[5].push_back(ui->lineEdit_56->text());
    sudokuField.columns[5].push_back(ui->lineEdit_66->text());
    sudokuField.columns[5].push_back(ui->lineEdit_76->text());
    sudokuField.columns[5].push_back(ui->lineEdit_86->text());
    sudokuField.columns[6].push_back(ui->lineEdit_07->text());
    sudokuField.columns[6].push_back(ui->lineEdit_17->text());
    sudokuField.columns[6].push_back(ui->lineEdit_27->text());
    sudokuField.columns[6].push_back(ui->lineEdit_37->text());
    sudokuField.columns[6].push_back(ui->lineEdit_47->text());
    sudokuField.columns[6].push_back(ui->lineEdit_57->text());
    sudokuField.columns[6].push_back(ui->lineEdit_67->text());
    sudokuField.columns[6].push_back(ui->lineEdit_77->text());
    sudokuField.columns[6].push_back(ui->lineEdit_87->text());
    sudokuField.columns[7].push_back(ui->lineEdit_08->text());
    sudokuField.columns[7].push_back(ui->lineEdit_18->text());
    sudokuField.columns[7].push_back(ui->lineEdit_28->text());
    sudokuField.columns[7].push_back(ui->lineEdit_38->text());
    sudokuField.columns[7].push_back(ui->lineEdit_48->text());
    sudokuField.columns[7].push_back(ui->lineEdit_58->text());
    sudokuField.columns[7].push_back(ui->lineEdit_68->text());
    sudokuField.columns[7].push_back(ui->lineEdit_78->text());
    sudokuField.columns[7].push_back(ui->lineEdit_88->text());
    sudokuField.columns[8].push_back(ui->lineEdit_09->text());
    sudokuField.columns[8].push_back(ui->lineEdit_19->text());
    sudokuField.columns[8].push_back(ui->lineEdit_29->text());
    sudokuField.columns[8].push_back(ui->lineEdit_39->text());
    sudokuField.columns[8].push_back(ui->lineEdit_49->text());
    sudokuField.columns[8].push_back(ui->lineEdit_59->text());
    sudokuField.columns[8].push_back(ui->lineEdit_69->text());
    sudokuField.columns[8].push_back(ui->lineEdit_79->text());
    sudokuField.columns[8].push_back(ui->lineEdit_89->text());
    sudokuField.rows[0].push_back(ui->lineEdit_01->text());
    sudokuField.rows[0].push_back(ui->lineEdit_02->text());
    sudokuField.rows[0].push_back(ui->lineEdit_03->text());
    sudokuField.rows[0].push_back(ui->lineEdit_04->text());
    sudokuField.rows[0].push_back(ui->lineEdit_05->text());
    sudokuField.rows[0].push_back(ui->lineEdit_06->text());
    sudokuField.rows[0].push_back(ui->lineEdit_07->text());
    sudokuField.rows[0].push_back(ui->lineEdit_08->text());
    sudokuField.rows[0].push_back(ui->lineEdit_09->text());
    sudokuField.rows[1].push_back(ui->lineEdit_11->text());
    sudokuField.rows[1].push_back(ui->lineEdit_12->text());
    sudokuField.rows[1].push_back(ui->lineEdit_13->text());
    sudokuField.rows[1].push_back(ui->lineEdit_14->text());
    sudokuField.rows[1].push_back(ui->lineEdit_15->text());
    sudokuField.rows[1].push_back(ui->lineEdit_16->text());
    sudokuField.rows[1].push_back(ui->lineEdit_17->text());
    sudokuField.rows[1].push_back(ui->lineEdit_18->text());
    sudokuField.rows[1].push_back(ui->lineEdit_19->text());
    sudokuField.rows[2].push_back(ui->lineEdit_21->text());
    sudokuField.rows[2].push_back(ui->lineEdit_22->text());
    sudokuField.rows[2].push_back(ui->lineEdit_23->text());
    sudokuField.rows[2].push_back(ui->lineEdit_24->text());
    sudokuField.rows[2].push_back(ui->lineEdit_25->text());
    sudokuField.rows[2].push_back(ui->lineEdit_26->text());
    sudokuField.rows[2].push_back(ui->lineEdit_27->text());
    sudokuField.rows[2].push_back(ui->lineEdit_28->text());
    sudokuField.rows[2].push_back(ui->lineEdit_29->text());
    sudokuField.rows[3].push_back(ui->lineEdit_31->text());
    sudokuField.rows[3].push_back(ui->lineEdit_32->text());
    sudokuField.rows[3].push_back(ui->lineEdit_33->text());
    sudokuField.rows[3].push_back(ui->lineEdit_34->text());
    sudokuField.rows[3].push_back(ui->lineEdit_35->text());
    sudokuField.rows[3].push_back(ui->lineEdit_36->text());
    sudokuField.rows[3].push_back(ui->lineEdit_37->text());
    sudokuField.rows[3].push_back(ui->lineEdit_38->text());
    sudokuField.rows[3].push_back(ui->lineEdit_39->text());
    sudokuField.rows[4].push_back(ui->lineEdit_41->text());
    sudokuField.rows[4].push_back(ui->lineEdit_42->text());
    sudokuField.rows[4].push_back(ui->lineEdit_43->text());
    sudokuField.rows[4].push_back(ui->lineEdit_44->text());
    sudokuField.rows[4].push_back(ui->lineEdit_45->text());
    sudokuField.rows[4].push_back(ui->lineEdit_46->text());
    sudokuField.rows[4].push_back(ui->lineEdit_47->text());
    sudokuField.rows[4].push_back(ui->lineEdit_48->text());
    sudokuField.rows[4].push_back(ui->lineEdit_49->text());
    sudokuField.rows[5].push_back(ui->lineEdit_51->text());
    sudokuField.rows[5].push_back(ui->lineEdit_52->text());
    sudokuField.rows[5].push_back(ui->lineEdit_53->text());
    sudokuField.rows[5].push_back(ui->lineEdit_54->text());
    sudokuField.rows[5].push_back(ui->lineEdit_55->text());
    sudokuField.rows[5].push_back(ui->lineEdit_56->text());
    sudokuField.rows[5].push_back(ui->lineEdit_57->text());
    sudokuField.rows[5].push_back(ui->lineEdit_58->text());
    sudokuField.rows[5].push_back(ui->lineEdit_59->text());
    sudokuField.rows[6].push_back(ui->lineEdit_61->text());
    sudokuField.rows[6].push_back(ui->lineEdit_62->text());
    sudokuField.rows[6].push_back(ui->lineEdit_63->text());
    sudokuField.rows[6].push_back(ui->lineEdit_64->text());
    sudokuField.rows[6].push_back(ui->lineEdit_65->text());
    sudokuField.rows[6].push_back(ui->lineEdit_66->text());
    sudokuField.rows[6].push_back(ui->lineEdit_67->text());
    sudokuField.rows[6].push_back(ui->lineEdit_68->text());
    sudokuField.rows[6].push_back(ui->lineEdit_69->text());
    sudokuField.rows[7].push_back(ui->lineEdit_71->text());
    sudokuField.rows[7].push_back(ui->lineEdit_72->text());
    sudokuField.rows[7].push_back(ui->lineEdit_73->text());
    sudokuField.rows[7].push_back(ui->lineEdit_74->text());
    sudokuField.rows[7].push_back(ui->lineEdit_75->text());
    sudokuField.rows[7].push_back(ui->lineEdit_76->text());
    sudokuField.rows[7].push_back(ui->lineEdit_77->text());
    sudokuField.rows[7].push_back(ui->lineEdit_78->text());
    sudokuField.rows[7].push_back(ui->lineEdit_79->text());
    sudokuField.rows[8].push_back(ui->lineEdit_81->text());
    sudokuField.rows[8].push_back(ui->lineEdit_82->text());
    sudokuField.rows[8].push_back(ui->lineEdit_83->text());
    sudokuField.rows[8].push_back(ui->lineEdit_84->text());
    sudokuField.rows[8].push_back(ui->lineEdit_85->text());
    sudokuField.rows[8].push_back(ui->lineEdit_86->text());
    sudokuField.rows[8].push_back(ui->lineEdit_87->text());
    sudokuField.rows[8].push_back(ui->lineEdit_88->text());
    sudokuField.rows[8].push_back(ui->lineEdit_89->text());
    Sudoku *newSudoku = new Sudoku("new",sudokuField);
    newSudoku->getSudokuFieldAsSequence();
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(sudokuField.squares[0], notSame, this_one, num, u, count_num);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(sudokuField.squares[0], notSame, this_one, num, u, count_num);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(sudokuField.squares[1], notSame2, this_one, num, u2, count_num);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(sudokuField.squares[1], notSame2, this_one, num, u2, count_num);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(sudokuField.squares[2], notSame3, this_one, num, u3, count_num);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(sudokuField.squares[2], notSame3, this_one, num, u3, count_num);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(sudokuField.squares[3], notSame4, this_one, num, u4, count_num);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(sudokuField.squares[3], notSame4, this_one, num, u4, count_num);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(sudokuField.squares[4], notSame5, this_one, num, u5, count_num);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(sudokuField.squares[4], notSame5, this_one, num, u5, count_num);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(sudokuField.squares[5], notSame6, this_one, num, u6, count_num);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(sudokuField.squares[5], notSame6, this_one, num, u6, count_num);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(sudokuField.squares[6], notSame7, this_one, num, u7, count_num);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(sudokuField.squares[6], notSame7, this_one, num, u7, count_num);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(sudokuField.squares[7], notSame8, this_one, num, u8, count_num);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(sudokuField.squares[7], notSame8, this_one, num, u8, count_num);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(sudokuField.squares[8], notSame9, this_one, num, u9, count_num);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(sudokuField.squares[8], notSame9, this_one, num, u9, count_num);
                                        QVector<QString> notSamecolumn1;
                                        int uC1 = 0;
                                        right = massive(sudokuField.columns[0], notSamecolumn1, this_one, num, uC1, count_num);
                                        if(right >= 0 && count_num >= 10)
                                        {
                                            notSamecolumn1.clear();
                                            massive(sudokuField.columns[0], notSamecolumn1, this_one, num, uC1, count_num);
                                            QVector<QString> notSamecolumn2;
                                            int uC2 = 0;
                                            right = massive(sudokuField.columns[1], notSamecolumn2, this_one, num, uC2, count_num);
                                            if(right >= 0)
                                            {
                                                notSamecolumn2.clear();
                                                massive(sudokuField.columns[1], notSamecolumn2, this_one, num, uC2, count_num);
                                                QVector<QString> notSamecolumns3;
                                                int uC3 = 0;
                                                right = massive(sudokuField.columns[2], notSamecolumns3, this_one, num, uC3, count_num);
                                                if(right >= 0)
                                                {
                                                    notSamecolumns3.clear();
                                                    massive(sudokuField.columns[2], notSamecolumns3, this_one, num, uC3, count_num);
                                                    QVector<QString> notSamecolumn4;
                                                    int uC4 = 0;
                                                    right = massive(sudokuField.columns[3], notSamecolumn4, this_one, num, uC4, count_num);
                                                    if(right >= 0)
                                                    {
                                                        notSamecolumn4.clear();
                                                        massive(sudokuField.columns[3], notSamecolumn4, this_one, num, uC4, count_num);
                                                        QVector<QString> notSamecolumn5;
                                                        int uC5 = 0;
                                                        right = massive(sudokuField.columns[4], notSamecolumn5, this_one, num, uC5, count_num);
                                                        if(right >= 0)
                                                        {
                                                            notSamecolumn5.clear();
                                                            massive(sudokuField.columns[4], notSamecolumn5, this_one, num, uC5, count_num);
                                                            QVector<QString> notSamecolumn6;
                                                            int uC6 = 0;
                                                            right = massive(sudokuField.columns[5], notSamecolumn6, this_one, num, uC6, count_num);
                                                            if(right >= 0)
                                                            {
                                                                notSamecolumn6.clear();
                                                                massive(sudokuField.columns[5], notSamecolumn6, this_one, num, uC6, count_num);
                                                                QVector<QString> notSamecolumn7;
                                                                int uC7 = 0;
                                                                right = massive(sudokuField.columns[6], notSamecolumn7, this_one, num, uC7, count_num);
                                                                if(right >= 0)
                                                                {
                                                                    notSamecolumn7.clear();
                                                                    massive(sudokuField.columns[6], notSamecolumn7, this_one, num, uC7, count_num);
                                                                    QVector<QString> notSamecolumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(sudokuField.columns[7], notSamecolumn8, this_one, num, uC8, count_num);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSamecolumn8.clear();
                                                                        massive(sudokuField.columns[7], notSamecolumn8, this_one, num, uC8, count_num);
                                                                        QVector<QString> notSamecolumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(sudokuField.columns[8], notSamecolumn9, this_one, num, uC9, count_num);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSamecolumn9.clear();
                                                                            massive(sudokuField.columns[8], notSamecolumn9, this_one, num, uC9, count_num);
                                                                            QVector<QString> notSameRow1;
                                                                            int uR1 = 0;
                                                                            right = massive(sudokuField.rows[0], notSameRow1, this_one, num, uR1, count_num);
                                                                            if(right >= 0)
                                                                            {
                                                                                notSameRow1.clear();
                                                                                massive(sudokuField.rows[0], notSameRow1, this_one, num, uR1, count_num);
                                                                                QVector<QString> notSameRow2;
                                                                                int uR2 = 0;
                                                                                right = massive(sudokuField.rows[1], notSameRow2, this_one, num, uR2, count_num);
                                                                                if(right >= 0)
                                                                                {
                                                                                    notSameRow2.clear();
                                                                                    massive(sudokuField.rows[1], notSameRow2, this_one, num, uR2, count_num);
                                                                                    QVector<QString> notSameRow3;
                                                                                    int uR3 = 0;
                                                                                    right = massive(sudokuField.rows[2], notSameRow3, this_one, num, uR3, count_num);
                                                                                    if(right >= 0)
                                                                                    {
                                                                                        notSameRow3.clear();
                                                                                        massive(sudokuField.rows[2], notSameRow3, this_one, num, uR3, count_num);
                                                                                        QVector<QString> notSameRow4;
                                                                                        int uR4 = 0;
                                                                                        right = massive(sudokuField.rows[3], notSameRow4, this_one, num, uR4, count_num);
                                                                                        if(right >= 0)
                                                                                        {
                                                                                            notSameRow4.clear();
                                                                                            massive(sudokuField.rows[3], notSameRow4, this_one, num, uR4, count_num);
                                                                                            QVector<QString> notSameRow5;
                                                                                            int uR5 = 0;
                                                                                            right = massive(sudokuField.rows[4], notSameRow5, this_one, num, uR5, count_num);
                                                                                            if(right >= 0)
                                                                                            {
                                                                                                notSameRow5.clear();
                                                                                                massive(sudokuField.rows[4], notSameRow5, this_one, num, uR5, count_num);
                                                                                                QVector<QString> notSameRow6;
                                                                                                int uR6 = 0;
                                                                                                right = massive(sudokuField.rows[5], notSameRow6, this_one, num, uR6, count_num);
                                                                                                if(right >= 0)
                                                                                                {
                                                                                                    notSameRow6.clear();
                                                                                                    massive(sudokuField.rows[5], notSameRow6, this_one, num, uR6, count_num);
                                                                                                    QVector<QString> notSameRow7;
                                                                                                    int uR7 = 0;
                                                                                                    right = massive(sudokuField.rows[6], notSameRow7, this_one, num, uR7, count_num);
                                                                                                    if(right >= 0)
                                                                                                    {
                                                                                                        notSameRow7.clear();
                                                                                                        massive(sudokuField.rows[6], notSameRow7, this_one, num, uR7, count_num);
                                                                                                        QVector<QString> notSameRow8;
                                                                                                        int uR8 = 0;
                                                                                                        right = massive(sudokuField.rows[7], notSameRow8, this_one, num, uR8, count_num);
                                                                                                        if(right >= 0)
                                                                                                        {
                                                                                                            notSameRow8.clear();
                                                                                                            massive(sudokuField.rows[7], notSameRow8, this_one, num, uR8, count_num);
                                                                                                            QVector<QString> notSameRow9;
                                                                                                            int uR9 = 0;
                                                                                                            right = massive(sudokuField.rows[8], notSameRow9, this_one, num, uR9, count_num);
                                                                                                            if(right >= 0)
                                                                                                            {
                                                                                                                notSameRow9.clear();
                                                                                                                massive(sudokuField.rows[8], notSameRow9, this_one, num, uR9, count_num);
                                                                                                                PlaySudokuDialog playSudokuDialog;
                                                                                                                playSudokuDialog.setNumbers(this->sudokuField);
                                                                                                                playSudokuDialog.setModal(true);
                                                                                                                playSudokuDialog.exec();
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                                }
                                                            }
                                                            else
                                                            {
                                                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                            }
                                                        }
                                                        else
                                                        {
                                                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                        }

                                                    }
                                                    else
                                                    {
                                                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                    }
                                                }
                                                else
                                                {
                                                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                                }
                                            }
                                            else
                                            {
                                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                            }
                                        }
                                        else
                                        {
                                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                        }
                                    }
                                    else
                                    {
                                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                    }
                                }
                                else
                                {
                                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                                }
                            }
                            else
                            {
                                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                            }
                        }
                        else
                        {
                            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                        }
                    }
                    else
                    {
                        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                    }
                }
                else
                {
                    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
                }
            }
            else
            {
                QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
            }
        }
        else
        {
            QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
        }
    }
    else
    {
        QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
    }
}

bool CreateSudokuDialog::check(QVector<QString> sq1, int inter, QString num[])
{
    for(int i = inter; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(sq1[i] == num[j])
            {
                return true;
            }
        }
        return false;
    }
    return false;
}

int CreateSudokuDialog::massive(QVector<QString> sq1, QVector<QString> notSame, QString this_is, QString *num, int integer, int count_numbers)
{
    if(count_numbers <= 40)
    {
        int count = 0;
        for(int i = 0; i < 9; i++)
        {
            if(check(sq1, i, num))
            {
                if(integer == 0)
                {
                    this_is = sq1[i];
                    notSame.push_back(this_is);
                    integer++;
                    count++;
                    continue;
                }
                for(int k = 0; k < integer; k++)
                {
                    if(sq1[i] == notSame[k])
                    {
                        QMessageBox::information(this,"Wrong","You have a mistake");
                        return -1;
                    }
                    if(k == integer - 1)
                    {
                        this_is = sq1[i];
                        notSame.push_back(this_is);
                        count++;
                    }
                }
                integer++;
            }
            else if(sq1[i] != "" && !check(sq1, i, num))
            {
                QMessageBox::information(this,"Wrong","You have a mistake");
                return -1;
            }
        }
        return count;
    }
    else
    {
        QMessageBox::information(this,"Wrong","You have a mistake");
    }
    return -1;
}

