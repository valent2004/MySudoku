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

    sudokuField.square1.push_back(ui->lineEdit_2->text());
    sudokuField.square1.push_back(ui->lineEdit_3->text());
    sudokuField.square1.push_back(ui->lineEdit_4->text());
    sudokuField.square1.push_back(ui->lineEdit_15->text());
    sudokuField.square1.push_back(ui->lineEdit_19->text());
    sudokuField.square1.push_back(ui->lineEdit_18->text());
    sudokuField.square1.push_back(ui->lineEdit_24->text());
    sudokuField.square1.push_back(ui->lineEdit_28->text());
    sudokuField.square1.push_back(ui->lineEdit_27->text());
    sudokuField.square2.push_back(ui->lineEdit_5->text());
    sudokuField.square2.push_back(ui->lineEdit_7->text());
    sudokuField.square2.push_back(ui->lineEdit_9->text());
    sudokuField.square2.push_back(ui->lineEdit_14->text());
    sudokuField.square2.push_back(ui->lineEdit_12->text());
    sudokuField.square2.push_back(ui->lineEdit_13->text());
    sudokuField.square2.push_back(ui->lineEdit_23->text());
    sudokuField.square2.push_back(ui->lineEdit_21->text());
    sudokuField.square2.push_back(ui->lineEdit_22->text());
    sudokuField.square3.push_back(ui->lineEdit_8->text());
    sudokuField.square3.push_back(ui->lineEdit_6->text());
    sudokuField.square3.push_back(ui->lineEdit_10->text());
    sudokuField.square3.push_back(ui->lineEdit_17->text());
    sudokuField.square3.push_back(ui->lineEdit_11->text());
    sudokuField.square3.push_back(ui->lineEdit_16->text());
    sudokuField.square3.push_back(ui->lineEdit_26->text());
    sudokuField.square3.push_back(ui->lineEdit_20->text());
    sudokuField.square3.push_back(ui->lineEdit_25->text());
    sudokuField.square4.push_back(ui->lineEdit_33->text());
    sudokuField.square4.push_back(ui->lineEdit_37->text());
    sudokuField.square4.push_back(ui->lineEdit_36->text());
    sudokuField.square4.push_back(ui->lineEdit_42->text());
    sudokuField.square4.push_back(ui->lineEdit_46->text());
    sudokuField.square4.push_back(ui->lineEdit_45->text());
    sudokuField.square4.push_back(ui->lineEdit_51->text());
    sudokuField.square4.push_back(ui->lineEdit_55->text());
    sudokuField.square4.push_back(ui->lineEdit_54->text());
    sudokuField.square5.push_back(ui->lineEdit_32->text());
    sudokuField.square5.push_back(ui->lineEdit_30->text());
    sudokuField.square5.push_back(ui->lineEdit_31->text());
    sudokuField.square5.push_back(ui->lineEdit_41->text());
    sudokuField.square5.push_back(ui->lineEdit_39->text());
    sudokuField.square5.push_back(ui->lineEdit_40->text());
    sudokuField.square5.push_back(ui->lineEdit_50->text());
    sudokuField.square5.push_back(ui->lineEdit_48->text());
    sudokuField.square5.push_back(ui->lineEdit_49->text());
    sudokuField.square6.push_back(ui->lineEdit_35->text());
    sudokuField.square6.push_back(ui->lineEdit_29->text());
    sudokuField.square6.push_back(ui->lineEdit_34->text());
    sudokuField.square6.push_back(ui->lineEdit_44->text());
    sudokuField.square6.push_back(ui->lineEdit_38->text());
    sudokuField.square6.push_back(ui->lineEdit_43->text());
    sudokuField.square6.push_back(ui->lineEdit_53->text());
    sudokuField.square6.push_back(ui->lineEdit_47->text());
    sudokuField.square6.push_back(ui->lineEdit_52->text());
    sudokuField.square7.push_back(ui->lineEdit_60->text());
    sudokuField.square7.push_back(ui->lineEdit_64->text());
    sudokuField.square7.push_back(ui->lineEdit_63->text());
    sudokuField.square7.push_back(ui->lineEdit_69->text());
    sudokuField.square7.push_back(ui->lineEdit_73->text());
    sudokuField.square7.push_back(ui->lineEdit_72->text());
    sudokuField.square7.push_back(ui->lineEdit_78->text());
    sudokuField.square7.push_back(ui->lineEdit_82->text());
    sudokuField.square7.push_back(ui->lineEdit_81->text());
    sudokuField.square8.push_back(ui->lineEdit_59->text());
    sudokuField.square8.push_back(ui->lineEdit_57->text());
    sudokuField.square8.push_back(ui->lineEdit_58->text());
    sudokuField.square8.push_back(ui->lineEdit_68->text());
    sudokuField.square8.push_back(ui->lineEdit_66->text());
    sudokuField.square8.push_back(ui->lineEdit_67->text());
    sudokuField.square8.push_back(ui->lineEdit_77->text());
    sudokuField.square8.push_back(ui->lineEdit_75->text());
    sudokuField.square8.push_back(ui->lineEdit_76->text());
    sudokuField.square9.push_back(ui->lineEdit_62->text());
    sudokuField.square9.push_back(ui->lineEdit_56->text());
    sudokuField.square9.push_back(ui->lineEdit_61->text());
    sudokuField.square9.push_back(ui->lineEdit_71->text());
    sudokuField.square9.push_back(ui->lineEdit_65->text());
    sudokuField.square9.push_back(ui->lineEdit_70->text());
    sudokuField.square9.push_back(ui->lineEdit_80->text());
    sudokuField.square9.push_back(ui->lineEdit_74->text());
    sudokuField.square9.push_back(ui->lineEdit_79->text());
    sudokuField.column1.push_back(ui->lineEdit_2->text());
    sudokuField.column1.push_back(ui->lineEdit_15->text());
    sudokuField.column1.push_back(ui->lineEdit_24->text());
    sudokuField.column1.push_back(ui->lineEdit_33->text());
    sudokuField.column1.push_back(ui->lineEdit_42->text());
    sudokuField.column1.push_back(ui->lineEdit_51->text());
    sudokuField.column1.push_back(ui->lineEdit_60->text());
    sudokuField.column1.push_back(ui->lineEdit_69->text());
    sudokuField.column1.push_back(ui->lineEdit_78->text());
    sudokuField.column2.push_back(ui->lineEdit_3->text());
    sudokuField.column2.push_back(ui->lineEdit_19->text());
    sudokuField.column2.push_back(ui->lineEdit_28->text());
    sudokuField.column2.push_back(ui->lineEdit_37->text());
    sudokuField.column2.push_back(ui->lineEdit_46->text());
    sudokuField.column2.push_back(ui->lineEdit_55->text());
    sudokuField.column2.push_back(ui->lineEdit_64->text());
    sudokuField.column2.push_back(ui->lineEdit_73->text());
    sudokuField.column2.push_back(ui->lineEdit_82->text());
    sudokuField.column3.push_back(ui->lineEdit_4->text());
    sudokuField.column3.push_back(ui->lineEdit_18->text());
    sudokuField.column3.push_back(ui->lineEdit_27->text());
    sudokuField.column3.push_back(ui->lineEdit_36->text());
    sudokuField.column3.push_back(ui->lineEdit_45->text());
    sudokuField.column3.push_back(ui->lineEdit_54->text());
    sudokuField.column3.push_back(ui->lineEdit_63->text());
    sudokuField.column3.push_back(ui->lineEdit_72->text());
    sudokuField.column3.push_back(ui->lineEdit_81->text());
    sudokuField.column4.push_back(ui->lineEdit_5->text());
    sudokuField.column4.push_back(ui->lineEdit_14->text());
    sudokuField.column4.push_back(ui->lineEdit_23->text());
    sudokuField.column4.push_back(ui->lineEdit_32->text());
    sudokuField.column4.push_back(ui->lineEdit_41->text());
    sudokuField.column4.push_back(ui->lineEdit_50->text());
    sudokuField.column4.push_back(ui->lineEdit_59->text());
    sudokuField.column4.push_back(ui->lineEdit_68->text());
    sudokuField.column4.push_back(ui->lineEdit_77->text());
    sudokuField.column5.push_back(ui->lineEdit_7->text());
    sudokuField.column5.push_back(ui->lineEdit_12->text());
    sudokuField.column5.push_back(ui->lineEdit_21->text());
    sudokuField.column5.push_back(ui->lineEdit_30->text());
    sudokuField.column5.push_back(ui->lineEdit_39->text());
    sudokuField.column5.push_back(ui->lineEdit_48->text());
    sudokuField.column5.push_back(ui->lineEdit_57->text());
    sudokuField.column5.push_back(ui->lineEdit_66->text());
    sudokuField.column5.push_back(ui->lineEdit_75->text());
    sudokuField.column6.push_back(ui->lineEdit_9->text());
    sudokuField.column6.push_back(ui->lineEdit_13->text());
    sudokuField.column6.push_back(ui->lineEdit_22->text());
    sudokuField.column6.push_back(ui->lineEdit_31->text());
    sudokuField.column6.push_back(ui->lineEdit_40->text());
    sudokuField.column6.push_back(ui->lineEdit_49->text());
    sudokuField.column6.push_back(ui->lineEdit_58->text());
    sudokuField.column6.push_back(ui->lineEdit_67->text());
    sudokuField.column6.push_back(ui->lineEdit_76->text());
    sudokuField.column7.push_back(ui->lineEdit_8->text());
    sudokuField.column7.push_back(ui->lineEdit_17->text());
    sudokuField.column7.push_back(ui->lineEdit_26->text());
    sudokuField.column7.push_back(ui->lineEdit_35->text());
    sudokuField.column7.push_back(ui->lineEdit_44->text());
    sudokuField.column7.push_back(ui->lineEdit_53->text());
    sudokuField.column7.push_back(ui->lineEdit_62->text());
    sudokuField.column7.push_back(ui->lineEdit_71->text());
    sudokuField.column7.push_back(ui->lineEdit_80->text());
    sudokuField.column8.push_back(ui->lineEdit_6->text());
    sudokuField.column8.push_back(ui->lineEdit_11->text());
    sudokuField.column8.push_back(ui->lineEdit_20->text());
    sudokuField.column8.push_back(ui->lineEdit_29->text());
    sudokuField.column8.push_back(ui->lineEdit_38->text());
    sudokuField.column8.push_back(ui->lineEdit_47->text());
    sudokuField.column8.push_back(ui->lineEdit_56->text());
    sudokuField.column8.push_back(ui->lineEdit_65->text());
    sudokuField.column8.push_back(ui->lineEdit_74->text());
    sudokuField.column9.push_back(ui->lineEdit_10->text());
    sudokuField.column9.push_back(ui->lineEdit_16->text());
    sudokuField.column9.push_back(ui->lineEdit_25->text());
    sudokuField.column9.push_back(ui->lineEdit_34->text());
    sudokuField.column9.push_back(ui->lineEdit_43->text());
    sudokuField.column9.push_back(ui->lineEdit_52->text());
    sudokuField.column9.push_back(ui->lineEdit_61->text());
    sudokuField.column9.push_back(ui->lineEdit_70->text());
    sudokuField.column9.push_back(ui->lineEdit_79->text());
    sudokuField.row1.push_back(ui->lineEdit_2->text());
    sudokuField.row1.push_back(ui->lineEdit_3->text());
    sudokuField.row1.push_back(ui->lineEdit_4->text());
    sudokuField.row1.push_back(ui->lineEdit_5->text());
    sudokuField.row1.push_back(ui->lineEdit_6->text());
    sudokuField.row1.push_back(ui->lineEdit_7->text());
    sudokuField.row1.push_back(ui->lineEdit_8->text());
    sudokuField.row1.push_back(ui->lineEdit_9->text());
    sudokuField.row1.push_back(ui->lineEdit_10->text());
    sudokuField.row2.push_back(ui->lineEdit_11->text());
    sudokuField.row2.push_back(ui->lineEdit_12->text());
    sudokuField.row2.push_back(ui->lineEdit_13->text());
    sudokuField.row2.push_back(ui->lineEdit_14->text());
    sudokuField.row2.push_back(ui->lineEdit_15->text());
    sudokuField.row2.push_back(ui->lineEdit_16->text());
    sudokuField.row2.push_back(ui->lineEdit_17->text());
    sudokuField.row2.push_back(ui->lineEdit_18->text());
    sudokuField.row2.push_back(ui->lineEdit_19->text());
    sudokuField.row3.push_back(ui->lineEdit_20->text());
    sudokuField.row3.push_back(ui->lineEdit_21->text());
    sudokuField.row3.push_back(ui->lineEdit_22->text());
    sudokuField.row3.push_back(ui->lineEdit_23->text());
    sudokuField.row3.push_back(ui->lineEdit_24->text());
    sudokuField.row3.push_back(ui->lineEdit_25->text());
    sudokuField.row3.push_back(ui->lineEdit_26->text());
    sudokuField.row3.push_back(ui->lineEdit_27->text());
    sudokuField.row3.push_back(ui->lineEdit_28->text());
    sudokuField.row4.push_back(ui->lineEdit_29->text());
    sudokuField.row4.push_back(ui->lineEdit_30->text());
    sudokuField.row4.push_back(ui->lineEdit_31->text());
    sudokuField.row4.push_back(ui->lineEdit_32->text());
    sudokuField.row4.push_back(ui->lineEdit_33->text());
    sudokuField.row4.push_back(ui->lineEdit_34->text());
    sudokuField.row4.push_back(ui->lineEdit_35->text());
    sudokuField.row4.push_back(ui->lineEdit_36->text());
    sudokuField.row4.push_back(ui->lineEdit_37->text());
    sudokuField.row5.push_back(ui->lineEdit_38->text());
    sudokuField.row5.push_back(ui->lineEdit_39->text());
    sudokuField.row5.push_back(ui->lineEdit_40->text());
    sudokuField.row5.push_back(ui->lineEdit_41->text());
    sudokuField.row5.push_back(ui->lineEdit_42->text());
    sudokuField.row5.push_back(ui->lineEdit_43->text());
    sudokuField.row5.push_back(ui->lineEdit_44->text());
    sudokuField.row5.push_back(ui->lineEdit_45->text());
    sudokuField.row5.push_back(ui->lineEdit_46->text());
    sudokuField.row6.push_back(ui->lineEdit_47->text());
    sudokuField.row6.push_back(ui->lineEdit_48->text());
    sudokuField.row6.push_back(ui->lineEdit_49->text());
    sudokuField.row6.push_back(ui->lineEdit_50->text());
    sudokuField.row6.push_back(ui->lineEdit_51->text());
    sudokuField.row6.push_back(ui->lineEdit_52->text());
    sudokuField.row6.push_back(ui->lineEdit_53->text());
    sudokuField.row6.push_back(ui->lineEdit_54->text());
    sudokuField.row6.push_back(ui->lineEdit_55->text());
    sudokuField.row7.push_back(ui->lineEdit_56->text());
    sudokuField.row7.push_back(ui->lineEdit_57->text());
    sudokuField.row7.push_back(ui->lineEdit_58->text());
    sudokuField.row7.push_back(ui->lineEdit_59->text());
    sudokuField.row7.push_back(ui->lineEdit_60->text());
    sudokuField.row7.push_back(ui->lineEdit_61->text());
    sudokuField.row7.push_back(ui->lineEdit_62->text());
    sudokuField.row7.push_back(ui->lineEdit_63->text());
    sudokuField.row7.push_back(ui->lineEdit_64->text());
    sudokuField.row8.push_back(ui->lineEdit_65->text());
    sudokuField.row8.push_back(ui->lineEdit_66->text());
    sudokuField.row8.push_back(ui->lineEdit_67->text());
    sudokuField.row8.push_back(ui->lineEdit_68->text());
    sudokuField.row8.push_back(ui->lineEdit_69->text());
    sudokuField.row8.push_back(ui->lineEdit_70->text());
    sudokuField.row8.push_back(ui->lineEdit_71->text());
    sudokuField.row8.push_back(ui->lineEdit_72->text());
    sudokuField.row8.push_back(ui->lineEdit_73->text());
    sudokuField.row9.push_back(ui->lineEdit_74->text());
    sudokuField.row9.push_back(ui->lineEdit_75->text());
    sudokuField.row9.push_back(ui->lineEdit_76->text());
    sudokuField.row9.push_back(ui->lineEdit_77->text());
    sudokuField.row9.push_back(ui->lineEdit_78->text());
    sudokuField.row9.push_back(ui->lineEdit_79->text());
    sudokuField.row9.push_back(ui->lineEdit_80->text());
    sudokuField.row9.push_back(ui->lineEdit_81->text());
    sudokuField.row9.push_back(ui->lineEdit_82->text());
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(sudokuField.square1, notSame, this_one, num, u, count_num);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(sudokuField.square1, notSame, this_one, num, u, count_num);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(sudokuField.square2, notSame2, this_one, num, u2, count_num);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(sudokuField.square2, notSame2, this_one, num, u2, count_num);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(sudokuField.square3, notSame3, this_one, num, u3, count_num);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(sudokuField.square3, notSame3, this_one, num, u3, count_num);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(sudokuField.square4, notSame4, this_one, num, u4, count_num);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(sudokuField.square4, notSame4, this_one, num, u4, count_num);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(sudokuField.square5, notSame5, this_one, num, u5, count_num);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(sudokuField.square5, notSame5, this_one, num, u5, count_num);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(sudokuField.square6, notSame6, this_one, num, u6, count_num);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(sudokuField.square6, notSame6, this_one, num, u6, count_num);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(sudokuField.square7, notSame7, this_one, num, u7, count_num);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(sudokuField.square7, notSame7, this_one, num, u7, count_num);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(sudokuField.square8, notSame8, this_one, num, u8, count_num);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(sudokuField.square8, notSame8, this_one, num, u8, count_num);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(sudokuField.square9, notSame9, this_one, num, u9, count_num);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(sudokuField.square9, notSame9, this_one, num, u9, count_num);
                                        QVector<QString> notSameColumn1;
                                        int uC1 = 0;
                                        right = massive(sudokuField.column1, notSameColumn1, this_one, num, uC1, count_num);
                                        if(right >= 0 && count_num >= 10)
                                        {
                                            notSameColumn1.clear();
                                            massive(sudokuField.column1, notSameColumn1, this_one, num, uC1, count_num);
                                            QVector<QString> notSameColumn2;
                                            int uC2 = 0;
                                            right = massive(sudokuField.column2, notSameColumn2, this_one, num, uC2, count_num);
                                            if(right >= 0)
                                            {
                                                notSameColumn2.clear();
                                                massive(sudokuField.column2, notSameColumn2, this_one, num, uC2, count_num);
                                                QVector<QString> notSameColumn3;
                                                int uC3 = 0;
                                                right = massive(sudokuField.column3, notSameColumn3, this_one, num, uC3, count_num);
                                                if(right >= 0)
                                                {
                                                    notSameColumn3.clear();
                                                    massive(sudokuField.column3, notSameColumn3, this_one, num, uC3, count_num);
                                                    QVector<QString> notSameColumn4;
                                                    int uC4 = 0;
                                                    right = massive(sudokuField.column4, notSameColumn4, this_one, num, uC4, count_num);
                                                    if(right >= 0)
                                                    {
                                                        notSameColumn4.clear();
                                                        massive(sudokuField.column4, notSameColumn4, this_one, num, uC4, count_num);
                                                        QVector<QString> notSameColumn5;
                                                        int uC5 = 0;
                                                        right = massive(sudokuField.column5, notSameColumn5, this_one, num, uC5, count_num);
                                                        if(right >= 0)
                                                        {
                                                            notSameColumn5.clear();
                                                            massive(sudokuField.column5, notSameColumn5, this_one, num, uC5, count_num);
                                                            QVector<QString> notSameColumn6;
                                                            int uC6 = 0;
                                                            right = massive(sudokuField.column6, notSameColumn6, this_one, num, uC6, count_num);
                                                            if(right >= 0)
                                                            {
                                                                notSameColumn6.clear();
                                                                massive(sudokuField.column6, notSameColumn6, this_one, num, uC6, count_num);
                                                                QVector<QString> notSameColumn7;
                                                                int uC7 = 0;
                                                                right = massive(sudokuField.column7, notSameColumn7, this_one, num, uC7, count_num);
                                                                if(right >= 0)
                                                                {
                                                                    notSameColumn7.clear();
                                                                    massive(sudokuField.column7, notSameColumn7, this_one, num, uC7, count_num);
                                                                    QVector<QString> notSameColumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(sudokuField.column8, notSameColumn8, this_one, num, uC8, count_num);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSameColumn8.clear();
                                                                        massive(sudokuField.column8, notSameColumn8, this_one, num, uC8, count_num);
                                                                        QVector<QString> notSameColumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(sudokuField.column9, notSameColumn9, this_one, num, uC9, count_num);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSameColumn9.clear();
                                                                            massive(sudokuField.column9, notSameColumn9, this_one, num, uC9, count_num);
                                                                            QVector<QString> notSameRow1;
                                                                            int uR1 = 0;
                                                                            right = massive(sudokuField.row1, notSameRow1, this_one, num, uR1, count_num);
                                                                            if(right >= 0)
                                                                            {
                                                                                notSameRow1.clear();
                                                                                massive(sudokuField.row1, notSameRow1, this_one, num, uR1, count_num);
                                                                                QVector<QString> notSameRow2;
                                                                                int uR2 = 0;
                                                                                right = massive(sudokuField.row2, notSameRow2, this_one, num, uR2, count_num);
                                                                                if(right >= 0)
                                                                                {
                                                                                    notSameRow2.clear();
                                                                                    massive(sudokuField.row2, notSameRow2, this_one, num, uR2, count_num);
                                                                                    QVector<QString> notSameRow3;
                                                                                    int uR3 = 0;
                                                                                    right = massive(sudokuField.row3, notSameRow3, this_one, num, uR3, count_num);
                                                                                    if(right >= 0)
                                                                                    {
                                                                                        notSameRow3.clear();
                                                                                        massive(sudokuField.row3, notSameRow3, this_one, num, uR3, count_num);
                                                                                        QVector<QString> notSameRow4;
                                                                                        int uR4 = 0;
                                                                                        right = massive(sudokuField.row4, notSameRow4, this_one, num, uR4, count_num);
                                                                                        if(right >= 0)
                                                                                        {
                                                                                            notSameRow4.clear();
                                                                                            massive(sudokuField.row4, notSameRow4, this_one, num, uR4, count_num);
                                                                                            QVector<QString> notSameRow5;
                                                                                            int uR5 = 0;
                                                                                            right = massive(sudokuField.row5, notSameRow5, this_one, num, uR5, count_num);
                                                                                            if(right >= 0)
                                                                                            {
                                                                                                notSameRow5.clear();
                                                                                                massive(sudokuField.row5, notSameRow5, this_one, num, uR5, count_num);
                                                                                                QVector<QString> notSameRow6;
                                                                                                int uR6 = 0;
                                                                                                right = massive(sudokuField.row6, notSameRow6, this_one, num, uR6, count_num);
                                                                                                if(right >= 0)
                                                                                                {
                                                                                                    notSameRow6.clear();
                                                                                                    massive(sudokuField.row6, notSameRow6, this_one, num, uR6, count_num);
                                                                                                    QVector<QString> notSameRow7;
                                                                                                    int uR7 = 0;
                                                                                                    right = massive(sudokuField.row7, notSameRow7, this_one, num, uR7, count_num);
                                                                                                    if(right >= 0)
                                                                                                    {
                                                                                                        notSameRow7.clear();
                                                                                                        massive(sudokuField.row7, notSameRow7, this_one, num, uR7, count_num);
                                                                                                        QVector<QString> notSameRow8;
                                                                                                        int uR8 = 0;
                                                                                                        right = massive(sudokuField.row8, notSameRow8, this_one, num, uR8, count_num);
                                                                                                        if(right >= 0)
                                                                                                        {
                                                                                                            notSameRow8.clear();
                                                                                                            massive(sudokuField.row8, notSameRow8, this_one, num, uR8, count_num);
                                                                                                            QVector<QString> notSameRow9;
                                                                                                            int uR9 = 0;
                                                                                                            right = massive(sudokuField.row9, notSameRow9, this_one, num, uR9, count_num);
                                                                                                            if(right >= 0)
                                                                                                            {
                                                                                                                notSameRow9.clear();
                                                                                                                massive(sudokuField.row9, notSameRow9, this_one, num, uR9, count_num);

                                                                                                                PlaySudokuDialog playSudokuDialog;
                                                                                                                playSudokuDialog.setNumbers(sudokuField);
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

