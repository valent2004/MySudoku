#include "createsudokudialog.h"
#include "playsudokudialog.h"
#include "datasudoku.h"
#include "ui_createsudokudialog.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QSettings>

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

void CreateSudokuDialog::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,"Wrong","You don't have your name");
    }
    else
    {
        DataSudoku data;
        QString filename = QFileDialog::getSaveFileName(this, "Save file", ui->lineEdit->text(), "Exe files (*.exe)");
        QMessageBox::information(this,"SAVED","You save sudoku in name " + ui->lineEdit->text());
    }
}


void CreateSudokuDialog::on_pushButton_2_clicked()
{
    CreateSudokuDialog sudoku;
    PlaySudokuDialog play;
    DataSudoku data;
    sudoku.square1.push_back(ui->lineEdit_2->text());
    sudoku.square1.push_back(ui->lineEdit_3->text());
    sudoku.square1.push_back(ui->lineEdit_4->text());
    sudoku.square1.push_back(ui->lineEdit_15->text());
    sudoku.square1.push_back(ui->lineEdit_19->text());
    sudoku.square1.push_back(ui->lineEdit_18->text());
    sudoku.square1.push_back(ui->lineEdit_24->text());
    sudoku.square1.push_back(ui->lineEdit_28->text());
    sudoku.square1.push_back(ui->lineEdit_27->text());
    sudoku.square2.push_back(ui->lineEdit_5->text());
    sudoku.square2.push_back(ui->lineEdit_7->text());
    sudoku.square2.push_back(ui->lineEdit_9->text());
    sudoku.square2.push_back(ui->lineEdit_14->text());
    sudoku.square2.push_back(ui->lineEdit_12->text());
    sudoku.square2.push_back(ui->lineEdit_13->text());
    sudoku.square2.push_back(ui->lineEdit_23->text());
    sudoku.square2.push_back(ui->lineEdit_21->text());
    sudoku.square2.push_back(ui->lineEdit_22->text());
    sudoku.square3.push_back(ui->lineEdit_8->text());
    sudoku.square3.push_back(ui->lineEdit_6->text());
    sudoku.square3.push_back(ui->lineEdit_10->text());
    sudoku.square3.push_back(ui->lineEdit_17->text());
    sudoku.square3.push_back(ui->lineEdit_11->text());
    sudoku.square3.push_back(ui->lineEdit_16->text());
    sudoku.square3.push_back(ui->lineEdit_26->text());
    sudoku.square3.push_back(ui->lineEdit_20->text());
    sudoku.square3.push_back(ui->lineEdit_25->text());
    sudoku.square4.push_back(ui->lineEdit_33->text());
    sudoku.square4.push_back(ui->lineEdit_37->text());
    sudoku.square4.push_back(ui->lineEdit_36->text());
    sudoku.square4.push_back(ui->lineEdit_42->text());
    sudoku.square4.push_back(ui->lineEdit_46->text());
    sudoku.square4.push_back(ui->lineEdit_45->text());
    sudoku.square4.push_back(ui->lineEdit_51->text());
    sudoku.square4.push_back(ui->lineEdit_55->text());
    sudoku.square4.push_back(ui->lineEdit_54->text());
    sudoku.square5.push_back(ui->lineEdit_32->text());
    sudoku.square5.push_back(ui->lineEdit_30->text());
    sudoku.square5.push_back(ui->lineEdit_31->text());
    sudoku.square5.push_back(ui->lineEdit_41->text());
    sudoku.square5.push_back(ui->lineEdit_39->text());
    sudoku.square5.push_back(ui->lineEdit_40->text());
    sudoku.square5.push_back(ui->lineEdit_50->text());
    sudoku.square5.push_back(ui->lineEdit_48->text());
    sudoku.square5.push_back(ui->lineEdit_49->text());
    sudoku.square6.push_back(ui->lineEdit_35->text());
    sudoku.square6.push_back(ui->lineEdit_29->text());
    sudoku.square6.push_back(ui->lineEdit_34->text());
    sudoku.square6.push_back(ui->lineEdit_44->text());
    sudoku.square6.push_back(ui->lineEdit_38->text());
    sudoku.square6.push_back(ui->lineEdit_43->text());
    sudoku.square6.push_back(ui->lineEdit_53->text());
    sudoku.square6.push_back(ui->lineEdit_47->text());
    sudoku.square6.push_back(ui->lineEdit_52->text());
    sudoku.square7.push_back(ui->lineEdit_60->text());
    sudoku.square7.push_back(ui->lineEdit_64->text());
    sudoku.square7.push_back(ui->lineEdit_63->text());
    sudoku.square7.push_back(ui->lineEdit_69->text());
    sudoku.square7.push_back(ui->lineEdit_73->text());
    sudoku.square7.push_back(ui->lineEdit_72->text());
    sudoku.square7.push_back(ui->lineEdit_78->text());
    sudoku.square7.push_back(ui->lineEdit_82->text());
    sudoku.square7.push_back(ui->lineEdit_81->text());
    sudoku.square8.push_back(ui->lineEdit_59->text());
    sudoku.square8.push_back(ui->lineEdit_57->text());
    sudoku.square8.push_back(ui->lineEdit_58->text());
    sudoku.square8.push_back(ui->lineEdit_68->text());
    sudoku.square8.push_back(ui->lineEdit_66->text());
    sudoku.square8.push_back(ui->lineEdit_67->text());
    sudoku.square8.push_back(ui->lineEdit_77->text());
    sudoku.square8.push_back(ui->lineEdit_75->text());
    sudoku.square8.push_back(ui->lineEdit_76->text());
    sudoku.square9.push_back(ui->lineEdit_62->text());
    sudoku.square9.push_back(ui->lineEdit_56->text());
    sudoku.square9.push_back(ui->lineEdit_61->text());
    sudoku.square9.push_back(ui->lineEdit_71->text());
    sudoku.square9.push_back(ui->lineEdit_65->text());
    sudoku.square9.push_back(ui->lineEdit_70->text());
    sudoku.square9.push_back(ui->lineEdit_80->text());
    sudoku.square9.push_back(ui->lineEdit_74->text());
    sudoku.square9.push_back(ui->lineEdit_79->text());
    sudoku.column1.push_back(ui->lineEdit_2->text());
    sudoku.column1.push_back(ui->lineEdit_15->text());
    sudoku.column1.push_back(ui->lineEdit_24->text());
    sudoku.column1.push_back(ui->lineEdit_33->text());
    sudoku.column1.push_back(ui->lineEdit_42->text());
    sudoku.column1.push_back(ui->lineEdit_51->text());
    sudoku.column1.push_back(ui->lineEdit_60->text());
    sudoku.column1.push_back(ui->lineEdit_69->text());
    sudoku.column1.push_back(ui->lineEdit_78->text());
    sudoku.column2.push_back(ui->lineEdit_3->text());
    sudoku.column2.push_back(ui->lineEdit_19->text());
    sudoku.column2.push_back(ui->lineEdit_28->text());
    sudoku.column2.push_back(ui->lineEdit_37->text());
    sudoku.column2.push_back(ui->lineEdit_46->text());
    sudoku.column2.push_back(ui->lineEdit_55->text());
    sudoku.column2.push_back(ui->lineEdit_64->text());
    sudoku.column2.push_back(ui->lineEdit_73->text());
    sudoku.column2.push_back(ui->lineEdit_82->text());
    sudoku.column3.push_back(ui->lineEdit_4->text());
    sudoku.column3.push_back(ui->lineEdit_18->text());
    sudoku.column3.push_back(ui->lineEdit_27->text());
    sudoku.column3.push_back(ui->lineEdit_36->text());
    sudoku.column3.push_back(ui->lineEdit_45->text());
    sudoku.column3.push_back(ui->lineEdit_54->text());
    sudoku.column3.push_back(ui->lineEdit_63->text());
    sudoku.column3.push_back(ui->lineEdit_72->text());
    sudoku.column3.push_back(ui->lineEdit_81->text());
    sudoku.column4.push_back(ui->lineEdit_5->text());
    sudoku.column4.push_back(ui->lineEdit_14->text());
    sudoku.column4.push_back(ui->lineEdit_23->text());
    sudoku.column4.push_back(ui->lineEdit_32->text());
    sudoku.column4.push_back(ui->lineEdit_41->text());
    sudoku.column4.push_back(ui->lineEdit_50->text());
    sudoku.column4.push_back(ui->lineEdit_59->text());
    sudoku.column4.push_back(ui->lineEdit_68->text());
    sudoku.column4.push_back(ui->lineEdit_77->text());
    sudoku.column5.push_back(ui->lineEdit_7->text());
    sudoku.column5.push_back(ui->lineEdit_12->text());
    sudoku.column5.push_back(ui->lineEdit_21->text());
    sudoku.column5.push_back(ui->lineEdit_30->text());
    sudoku.column5.push_back(ui->lineEdit_39->text());
    sudoku.column5.push_back(ui->lineEdit_48->text());
    sudoku.column5.push_back(ui->lineEdit_57->text());
    sudoku.column5.push_back(ui->lineEdit_66->text());
    sudoku.column5.push_back(ui->lineEdit_75->text());
    sudoku.column6.push_back(ui->lineEdit_9->text());
    sudoku.column6.push_back(ui->lineEdit_13->text());
    sudoku.column6.push_back(ui->lineEdit_22->text());
    sudoku.column6.push_back(ui->lineEdit_31->text());
    sudoku.column6.push_back(ui->lineEdit_40->text());
    sudoku.column6.push_back(ui->lineEdit_49->text());
    sudoku.column6.push_back(ui->lineEdit_58->text());
    sudoku.column6.push_back(ui->lineEdit_67->text());
    sudoku.column6.push_back(ui->lineEdit_76->text());
    sudoku.column7.push_back(ui->lineEdit_8->text());
    sudoku.column7.push_back(ui->lineEdit_17->text());
    sudoku.column7.push_back(ui->lineEdit_26->text());
    sudoku.column7.push_back(ui->lineEdit_35->text());
    sudoku.column7.push_back(ui->lineEdit_44->text());
    sudoku.column7.push_back(ui->lineEdit_53->text());
    sudoku.column7.push_back(ui->lineEdit_62->text());
    sudoku.column7.push_back(ui->lineEdit_71->text());
    sudoku.column7.push_back(ui->lineEdit_80->text());
    sudoku.column8.push_back(ui->lineEdit_6->text());
    sudoku.column8.push_back(ui->lineEdit_11->text());
    sudoku.column8.push_back(ui->lineEdit_20->text());
    sudoku.column8.push_back(ui->lineEdit_29->text());
    sudoku.column8.push_back(ui->lineEdit_38->text());
    sudoku.column8.push_back(ui->lineEdit_47->text());
    sudoku.column8.push_back(ui->lineEdit_56->text());
    sudoku.column8.push_back(ui->lineEdit_65->text());
    sudoku.column8.push_back(ui->lineEdit_74->text());
    sudoku.column9.push_back(ui->lineEdit_10->text());
    sudoku.column9.push_back(ui->lineEdit_16->text());
    sudoku.column9.push_back(ui->lineEdit_25->text());
    sudoku.column9.push_back(ui->lineEdit_34->text());
    sudoku.column9.push_back(ui->lineEdit_43->text());
    sudoku.column9.push_back(ui->lineEdit_52->text());
    sudoku.column9.push_back(ui->lineEdit_61->text());
    sudoku.column9.push_back(ui->lineEdit_70->text());
    sudoku.column9.push_back(ui->lineEdit_79->text());
    sudoku.row1.push_back(ui->lineEdit_2->text());
    sudoku.row1.push_back(ui->lineEdit_3->text());
    sudoku.row1.push_back(ui->lineEdit_4->text());
    sudoku.row1.push_back(ui->lineEdit_5->text());
    sudoku.row1.push_back(ui->lineEdit_6->text());
    sudoku.row1.push_back(ui->lineEdit_7->text());
    sudoku.row1.push_back(ui->lineEdit_8->text());
    sudoku.row1.push_back(ui->lineEdit_9->text());
    sudoku.row1.push_back(ui->lineEdit_10->text());
    sudoku.row2.push_back(ui->lineEdit_11->text());
    sudoku.row2.push_back(ui->lineEdit_12->text());
    sudoku.row2.push_back(ui->lineEdit_13->text());
    sudoku.row2.push_back(ui->lineEdit_14->text());
    sudoku.row2.push_back(ui->lineEdit_15->text());
    sudoku.row2.push_back(ui->lineEdit_16->text());
    sudoku.row2.push_back(ui->lineEdit_17->text());
    sudoku.row2.push_back(ui->lineEdit_18->text());
    sudoku.row2.push_back(ui->lineEdit_19->text());
    sudoku.row3.push_back(ui->lineEdit_20->text());
    sudoku.row3.push_back(ui->lineEdit_21->text());
    sudoku.row3.push_back(ui->lineEdit_22->text());
    sudoku.row3.push_back(ui->lineEdit_23->text());
    sudoku.row3.push_back(ui->lineEdit_24->text());
    sudoku.row3.push_back(ui->lineEdit_25->text());
    sudoku.row3.push_back(ui->lineEdit_26->text());
    sudoku.row3.push_back(ui->lineEdit_27->text());
    sudoku.row3.push_back(ui->lineEdit_28->text());
    sudoku.row4.push_back(ui->lineEdit_29->text());
    sudoku.row4.push_back(ui->lineEdit_30->text());
    sudoku.row4.push_back(ui->lineEdit_31->text());
    sudoku.row4.push_back(ui->lineEdit_32->text());
    sudoku.row4.push_back(ui->lineEdit_33->text());
    sudoku.row4.push_back(ui->lineEdit_34->text());
    sudoku.row4.push_back(ui->lineEdit_35->text());
    sudoku.row4.push_back(ui->lineEdit_36->text());
    sudoku.row4.push_back(ui->lineEdit_37->text());
    sudoku.row5.push_back(ui->lineEdit_38->text());
    sudoku.row5.push_back(ui->lineEdit_39->text());
    sudoku.row5.push_back(ui->lineEdit_40->text());
    sudoku.row5.push_back(ui->lineEdit_41->text());
    sudoku.row5.push_back(ui->lineEdit_42->text());
    sudoku.row5.push_back(ui->lineEdit_43->text());
    sudoku.row5.push_back(ui->lineEdit_44->text());
    sudoku.row5.push_back(ui->lineEdit_45->text());
    sudoku.row5.push_back(ui->lineEdit_46->text());
    sudoku.row6.push_back(ui->lineEdit_47->text());
    sudoku.row6.push_back(ui->lineEdit_48->text());
    sudoku.row6.push_back(ui->lineEdit_49->text());
    sudoku.row6.push_back(ui->lineEdit_50->text());
    sudoku.row6.push_back(ui->lineEdit_51->text());
    sudoku.row6.push_back(ui->lineEdit_52->text());
    sudoku.row6.push_back(ui->lineEdit_53->text());
    sudoku.row6.push_back(ui->lineEdit_54->text());
    sudoku.row6.push_back(ui->lineEdit_55->text());
    sudoku.row7.push_back(ui->lineEdit_56->text());
    sudoku.row7.push_back(ui->lineEdit_57->text());
    sudoku.row7.push_back(ui->lineEdit_58->text());
    sudoku.row7.push_back(ui->lineEdit_59->text());
    sudoku.row7.push_back(ui->lineEdit_60->text());
    sudoku.row7.push_back(ui->lineEdit_61->text());
    sudoku.row7.push_back(ui->lineEdit_62->text());
    sudoku.row7.push_back(ui->lineEdit_63->text());
    sudoku.row7.push_back(ui->lineEdit_64->text());
    sudoku.row8.push_back(ui->lineEdit_65->text());
    sudoku.row8.push_back(ui->lineEdit_66->text());
    sudoku.row8.push_back(ui->lineEdit_67->text());
    sudoku.row8.push_back(ui->lineEdit_68->text());
    sudoku.row8.push_back(ui->lineEdit_69->text());
    sudoku.row8.push_back(ui->lineEdit_70->text());
    sudoku.row8.push_back(ui->lineEdit_71->text());
    sudoku.row8.push_back(ui->lineEdit_72->text());
    sudoku.row8.push_back(ui->lineEdit_73->text());
    sudoku.row9.push_back(ui->lineEdit_74->text());
    sudoku.row9.push_back(ui->lineEdit_75->text());
    sudoku.row9.push_back(ui->lineEdit_76->text());
    sudoku.row9.push_back(ui->lineEdit_77->text());
    sudoku.row9.push_back(ui->lineEdit_78->text());
    sudoku.row9.push_back(ui->lineEdit_79->text());
    sudoku.row9.push_back(ui->lineEdit_80->text());
    sudoku.row9.push_back(ui->lineEdit_81->text());
    sudoku.row9.push_back(ui->lineEdit_82->text());
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(sudoku.square1, notSame, this_one, num, u, count_num);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(sudoku.square1, notSame, this_one, num, u, count_num);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(sudoku.square2, notSame2, this_one, num, u2, count_num);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(sudoku.square2, notSame2, this_one, num, u2, count_num);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(sudoku.square3, notSame3, this_one, num, u3, count_num);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(sudoku.square3, notSame3, this_one, num, u3, count_num);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(sudoku.square4, notSame4, this_one, num, u4, count_num);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(sudoku.square4, notSame4, this_one, num, u4, count_num);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(sudoku.square5, notSame5, this_one, num, u5, count_num);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(sudoku.square5, notSame5, this_one, num, u5, count_num);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(sudoku.square6, notSame6, this_one, num, u6, count_num);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(sudoku.square6, notSame6, this_one, num, u6, count_num);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(sudoku.square7, notSame7, this_one, num, u7, count_num);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(sudoku.square7, notSame7, this_one, num, u7, count_num);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(sudoku.square8, notSame8, this_one, num, u8, count_num);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(sudoku.square8, notSame8, this_one, num, u8, count_num);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(sudoku.square9, notSame9, this_one, num, u9, count_num);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(sudoku.square9, notSame9, this_one, num, u9, count_num);
                                        QVector<QString> notSameColumn1;
                                        int uC1 = 0;
                                        right = massive(sudoku.column1, notSameColumn1, this_one, num, uC1, count_num);
                                        if(right >= 0 && count_num >= 10)
                                        {
                                            notSameColumn1.clear();
                                            massive(sudoku.column1, notSameColumn1, this_one, num, uC1, count_num);
                                            QVector<QString> notSameColumn2;
                                            int uC2 = 0;
                                            right = massive(sudoku.column2, notSameColumn2, this_one, num, uC2, count_num);
                                            if(right >= 0)
                                            {
                                                notSameColumn2.clear();
                                                massive(sudoku.column2, notSameColumn2, this_one, num, uC2, count_num);
                                                QVector<QString> notSameColumn3;
                                                int uC3 = 0;
                                                right = massive(sudoku.column3, notSameColumn3, this_one, num, uC3, count_num);
                                                if(right >= 0)
                                                {
                                                    notSameColumn3.clear();
                                                    massive(sudoku.column3, notSameColumn3, this_one, num, uC3, count_num);
                                                    QVector<QString> notSameColumn4;
                                                    int uC4 = 0;
                                                    right = massive(sudoku.column4, notSameColumn4, this_one, num, uC4, count_num);
                                                    if(right >= 0)
                                                    {
                                                        notSameColumn4.clear();
                                                        massive(sudoku.column4, notSameColumn4, this_one, num, uC4, count_num);
                                                        QVector<QString> notSameColumn5;
                                                        int uC5 = 0;
                                                        right = massive(sudoku.column5, notSameColumn5, this_one, num, uC5, count_num);
                                                        if(right >= 0)
                                                        {
                                                            notSameColumn5.clear();
                                                            massive(sudoku.column5, notSameColumn5, this_one, num, uC5, count_num);
                                                            QVector<QString> notSameColumn6;
                                                            int uC6 = 0;
                                                            right = massive(sudoku.column6, notSameColumn6, this_one, num, uC6, count_num);
                                                            if(right >= 0)
                                                            {
                                                                notSameColumn6.clear();
                                                                massive(sudoku.column6, notSameColumn6, this_one, num, uC6, count_num);
                                                                QVector<QString> notSameColumn7;
                                                                int uC7 = 0;
                                                                right = massive(sudoku.column7, notSameColumn7, this_one, num, uC7, count_num);
                                                                if(right >= 0)
                                                                {
                                                                    notSameColumn7.clear();
                                                                    massive(sudoku.column7, notSameColumn7, this_one, num, uC7, count_num);
                                                                    QVector<QString> notSameColumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(sudoku.column8, notSameColumn8, this_one, num, uC8, count_num);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSameColumn8.clear();
                                                                        massive(sudoku.column8, notSameColumn8, this_one, num, uC8, count_num);
                                                                        QVector<QString> notSameColumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(sudoku.column9, notSameColumn9, this_one, num, uC9, count_num);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSameColumn9.clear();
                                                                            massive(sudoku.column9, notSameColumn9, this_one, num, uC9, count_num);
                                                                            QVector<QString> notSameRow1;
                                                                            int uR1 = 0;
                                                                            right = massive(sudoku.row1, notSameRow1, this_one, num, uR1, count_num);
                                                                            if(right >= 0)
                                                                            {
                                                                                notSameRow1.clear();
                                                                                massive(sudoku.row1, notSameRow1, this_one, num, uR1, count_num);
                                                                                QVector<QString> notSameRow2;
                                                                                int uR2 = 0;
                                                                                right = massive(sudoku.row2, notSameRow2, this_one, num, uR2, count_num);
                                                                                if(right >= 0)
                                                                                {
                                                                                    notSameRow2.clear();
                                                                                    massive(sudoku.row2, notSameRow2, this_one, num, uR2, count_num);
                                                                                    QVector<QString> notSameRow3;
                                                                                    int uR3 = 0;
                                                                                    right = massive(sudoku.row3, notSameRow3, this_one, num, uR3, count_num);
                                                                                    if(right >= 0)
                                                                                    {
                                                                                        notSameRow3.clear();
                                                                                        massive(sudoku.row3, notSameRow3, this_one, num, uR3, count_num);
                                                                                        QVector<QString> notSameRow4;
                                                                                        int uR4 = 0;
                                                                                        right = massive(sudoku.row4, notSameRow4, this_one, num, uR4, count_num);
                                                                                        if(right >= 0)
                                                                                        {
                                                                                            notSameRow4.clear();
                                                                                            massive(sudoku.row4, notSameRow4, this_one, num, uR4, count_num);
                                                                                            QVector<QString> notSameRow5;
                                                                                            int uR5 = 0;
                                                                                            right = massive(sudoku.row5, notSameRow5, this_one, num, uR5, count_num);
                                                                                            if(right >= 0)
                                                                                            {
                                                                                                notSameRow5.clear();
                                                                                                massive(sudoku.row5, notSameRow5, this_one, num, uR5, count_num);
                                                                                                QVector<QString> notSameRow6;
                                                                                                int uR6 = 0;
                                                                                                right = massive(sudoku.row6, notSameRow6, this_one, num, uR6, count_num);
                                                                                                if(right >= 0)
                                                                                                {
                                                                                                    notSameRow6.clear();
                                                                                                    massive(sudoku.row6, notSameRow6, this_one, num, uR6, count_num);
                                                                                                    QVector<QString> notSameRow7;
                                                                                                    int uR7 = 0;
                                                                                                    right = massive(sudoku.row7, notSameRow7, this_one, num, uR7, count_num);
                                                                                                    if(right >= 0)
                                                                                                    {
                                                                                                        notSameRow7.clear();
                                                                                                        massive(sudoku.row7, notSameRow7, this_one, num, uR7, count_num);
                                                                                                        QVector<QString> notSameRow8;
                                                                                                        int uR8 = 0;
                                                                                                        right = massive(sudoku.row8, notSameRow8, this_one, num, uR8, count_num);
                                                                                                        if(right >= 0)
                                                                                                        {
                                                                                                            notSameRow8.clear();
                                                                                                            massive(sudoku.row8, notSameRow8, this_one, num, uR8, count_num);
                                                                                                            QVector<QString> notSameRow9;
                                                                                                            int uR9 = 0;
                                                                                                            right = massive(sudoku.row9, notSameRow9, this_one, num, uR9, count_num);
                                                                                                            if(right >= 0)
                                                                                                            {
                                                                                                                notSameRow9.clear();
                                                                                                                massive(sudoku.row9, notSameRow9, this_one, num, uR9, count_num);
                                                                                                                play.setNumbers(sudoku);
                                                                                                                play.setModal(true);
                                                                                                                play.exec();
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

