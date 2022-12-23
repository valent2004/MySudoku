#include "playsudokudialog.h"
#include "ui_playsudokudialog.h"
#include <QMessageBox>

PlaySudokuDialog::PlaySudokuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaySudokuDialog)
{
    CreateSudokuDialog sudoku;
    ui->setupUi(this);
    this->setWindowTitle(sudoku.name);
}

PlaySudokuDialog::~PlaySudokuDialog()
{
    delete ui;
}

void PlaySudokuDialog::setNumbers(CreateSudokuDialog& sudoku)
{
    ui->lineEdit_2->setText(sudoku.square1[0]);
    ui->lineEdit_3->setText(sudoku.square1[1]);
    ui->lineEdit_4->setText(sudoku.square1[2]);
    ui->lineEdit_15->setText(sudoku.square1[3]);
    ui->lineEdit_19->setText(sudoku.square1[4]);
    ui->lineEdit_18->setText(sudoku.square1[5]);
    ui->lineEdit_24->setText(sudoku.square1[6]);
    ui->lineEdit_28->setText(sudoku.square1[7]);
    ui->lineEdit_27->setText(sudoku.square1[8]);
    ui->lineEdit_5->setText(sudoku.square2[0]);
    ui->lineEdit_7->setText(sudoku.square2[1]);
    ui->lineEdit_9->setText(sudoku.square2[2]);
    ui->lineEdit_14->setText(sudoku.square2[3]);
    ui->lineEdit_12->setText(sudoku.square2[4]);
    ui->lineEdit_13->setText(sudoku.square2[5]);
    ui->lineEdit_23->setText(sudoku.square2[6]);
    ui->lineEdit_21->setText(sudoku.square2[7]);
    ui->lineEdit_22->setText(sudoku.square2[8]);
    ui->lineEdit_8->setText(sudoku.square3[0]);
    ui->lineEdit_6->setText(sudoku.square3[1]);
    ui->lineEdit_10->setText(sudoku.square3[2]);
    ui->lineEdit_17->setText(sudoku.square3[3]);
    ui->lineEdit_11->setText(sudoku.square3[4]);
    ui->lineEdit_16->setText(sudoku.square3[5]);
    ui->lineEdit_26->setText(sudoku.square3[6]);
    ui->lineEdit_20->setText(sudoku.square3[7]);
    ui->lineEdit_25->setText(sudoku.square3[8]);
    ui->lineEdit_33->setText(sudoku.square4[0]);
    ui->lineEdit_37->setText(sudoku.square4[1]);
    ui->lineEdit_36->setText(sudoku.square4[2]);
    ui->lineEdit_42->setText(sudoku.square4[3]);
    ui->lineEdit_46->setText(sudoku.square4[4]);
    ui->lineEdit_45->setText(sudoku.square4[5]);
    ui->lineEdit_51->setText(sudoku.square4[6]);
    ui->lineEdit_55->setText(sudoku.square4[7]);
    ui->lineEdit_54->setText(sudoku.square4[8]);
    ui->lineEdit_32->setText(sudoku.square5[0]);
    ui->lineEdit_30->setText(sudoku.square5[1]);
    ui->lineEdit_31->setText(sudoku.square5[2]);
    ui->lineEdit_41->setText(sudoku.square5[3]);
    ui->lineEdit_39->setText(sudoku.square5[4]);
    ui->lineEdit_40->setText(sudoku.square5[5]);
    ui->lineEdit_50->setText(sudoku.square5[6]);
    ui->lineEdit_48->setText(sudoku.square5[7]);
    ui->lineEdit_49->setText(sudoku.square5[8]);
    ui->lineEdit_35->setText(sudoku.square6[0]);
    ui->lineEdit_29->setText(sudoku.square6[1]);
    ui->lineEdit_34->setText(sudoku.square6[2]);
    ui->lineEdit_44->setText(sudoku.square6[3]);
    ui->lineEdit_38->setText(sudoku.square6[4]);
    ui->lineEdit_43->setText(sudoku.square6[5]);
    ui->lineEdit_53->setText(sudoku.square6[6]);
    ui->lineEdit_47->setText(sudoku.square6[7]);
    ui->lineEdit_52->setText(sudoku.square6[8]);
    ui->lineEdit_60->setText(sudoku.square7[0]);
    ui->lineEdit_64->setText(sudoku.square7[1]);
    ui->lineEdit_63->setText(sudoku.square7[2]);
    ui->lineEdit_69->setText(sudoku.square7[3]);
    ui->lineEdit_73->setText(sudoku.square7[4]);
    ui->lineEdit_72->setText(sudoku.square7[5]);
    ui->lineEdit_78->setText(sudoku.square7[6]);
    ui->lineEdit_82->setText(sudoku.square7[7]);
    ui->lineEdit_81->setText(sudoku.square7[8]);
    ui->lineEdit_59->setText(sudoku.square8[0]);
    ui->lineEdit_57->setText(sudoku.square8[1]);
    ui->lineEdit_58->setText(sudoku.square8[2]);
    ui->lineEdit_68->setText(sudoku.square8[3]);
    ui->lineEdit_66->setText(sudoku.square8[4]);
    ui->lineEdit_67->setText(sudoku.square8[5]);
    ui->lineEdit_77->setText(sudoku.square8[6]);
    ui->lineEdit_75->setText(sudoku.square8[7]);
    ui->lineEdit_76->setText(sudoku.square8[8]);
    ui->lineEdit_62->setText(sudoku.square9[0]);
    ui->lineEdit_56->setText(sudoku.square9[1]);
    ui->lineEdit_61->setText(sudoku.square9[2]);
    ui->lineEdit_71->setText(sudoku.square9[3]);
    ui->lineEdit_65->setText(sudoku.square9[4]);
    ui->lineEdit_70->setText(sudoku.square9[5]);
    ui->lineEdit_80->setText(sudoku.square9[6]);
    ui->lineEdit_74->setText(sudoku.square9[7]);
    ui->lineEdit_79->setText(sudoku.square9[8]);
}

void PlaySudokuDialog::showInformation()
{
    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
}

void PlaySudokuDialog::on_pushButton_clicked()
{
    PlaySudokuDialog play;
    play.square1.push_back(ui->lineEdit_2->text());
    play.square1.push_back(ui->lineEdit_3->text());
    play.square1.push_back(ui->lineEdit_4->text());
    play.square1.push_back(ui->lineEdit_15->text());
    play.square1.push_back(ui->lineEdit_19->text());
    play.square1.push_back(ui->lineEdit_18->text());
    play.square1.push_back(ui->lineEdit_24->text());
    play.square1.push_back(ui->lineEdit_28->text());
    play.square1.push_back(ui->lineEdit_27->text());
    play.square2.push_back(ui->lineEdit_5->text());
    play.square2.push_back(ui->lineEdit_7->text());
    play.square2.push_back(ui->lineEdit_9->text());
    play.square2.push_back(ui->lineEdit_14->text());
    play.square2.push_back(ui->lineEdit_12->text());
    play.square2.push_back(ui->lineEdit_13->text());
    play.square2.push_back(ui->lineEdit_23->text());
    play.square2.push_back(ui->lineEdit_21->text());
    play.square2.push_back(ui->lineEdit_22->text());
    play.square3.push_back(ui->lineEdit_8->text());
    play.square3.push_back(ui->lineEdit_6->text());
    play.square3.push_back(ui->lineEdit_10->text());
    play.square3.push_back(ui->lineEdit_17->text());
    play.square3.push_back(ui->lineEdit_11->text());
    play.square3.push_back(ui->lineEdit_16->text());
    play.square3.push_back(ui->lineEdit_26->text());
    play.square3.push_back(ui->lineEdit_20->text());
    play.square3.push_back(ui->lineEdit_25->text());
    play.square4.push_back(ui->lineEdit_33->text());
    play.square4.push_back(ui->lineEdit_37->text());
    play.square4.push_back(ui->lineEdit_36->text());
    play.square4.push_back(ui->lineEdit_42->text());
    play.square4.push_back(ui->lineEdit_46->text());
    play.square4.push_back(ui->lineEdit_45->text());
    play.square4.push_back(ui->lineEdit_51->text());
    play.square4.push_back(ui->lineEdit_55->text());
    play.square4.push_back(ui->lineEdit_54->text());
    play.square5.push_back(ui->lineEdit_32->text());
    play.square5.push_back(ui->lineEdit_30->text());
    play.square5.push_back(ui->lineEdit_31->text());
    play.square5.push_back(ui->lineEdit_41->text());
    play.square5.push_back(ui->lineEdit_39->text());
    play.square5.push_back(ui->lineEdit_40->text());
    play.square5.push_back(ui->lineEdit_50->text());
    play.square5.push_back(ui->lineEdit_48->text());
    play.square5.push_back(ui->lineEdit_49->text());
    play.square6.push_back(ui->lineEdit_35->text());
    play.square6.push_back(ui->lineEdit_29->text());
    play.square6.push_back(ui->lineEdit_34->text());
    play.square6.push_back(ui->lineEdit_44->text());
    play.square6.push_back(ui->lineEdit_38->text());
    play.square6.push_back(ui->lineEdit_43->text());
    play.square6.push_back(ui->lineEdit_53->text());
    play.square6.push_back(ui->lineEdit_47->text());
    play.square6.push_back(ui->lineEdit_52->text());
    play.square7.push_back(ui->lineEdit_60->text());
    play.square7.push_back(ui->lineEdit_64->text());
    play.square7.push_back(ui->lineEdit_63->text());
    play.square7.push_back(ui->lineEdit_69->text());
    play.square7.push_back(ui->lineEdit_73->text());
    play.square7.push_back(ui->lineEdit_72->text());
    play.square7.push_back(ui->lineEdit_78->text());
    play.square7.push_back(ui->lineEdit_82->text());
    play.square7.push_back(ui->lineEdit_81->text());
    play.square8.push_back(ui->lineEdit_59->text());
    play.square8.push_back(ui->lineEdit_57->text());
    play.square8.push_back(ui->lineEdit_58->text());
    play.square8.push_back(ui->lineEdit_68->text());
    play.square8.push_back(ui->lineEdit_66->text());
    play.square8.push_back(ui->lineEdit_67->text());
    play.square8.push_back(ui->lineEdit_77->text());
    play.square8.push_back(ui->lineEdit_75->text());
    play.square8.push_back(ui->lineEdit_76->text());
    play.square9.push_back(ui->lineEdit_62->text());
    play.square9.push_back(ui->lineEdit_56->text());
    play.square9.push_back(ui->lineEdit_61->text());
    play.square9.push_back(ui->lineEdit_71->text());
    play.square9.push_back(ui->lineEdit_65->text());
    play.square9.push_back(ui->lineEdit_70->text());
    play.square9.push_back(ui->lineEdit_80->text());
    play.square9.push_back(ui->lineEdit_74->text());
    play.square9.push_back(ui->lineEdit_79->text());
    play.column1.push_back(ui->lineEdit_2->text());
    play.column1.push_back(ui->lineEdit_15->text());
    play.column1.push_back(ui->lineEdit_24->text());
    play.column1.push_back(ui->lineEdit_33->text());
    play.column1.push_back(ui->lineEdit_42->text());
    play.column1.push_back(ui->lineEdit_51->text());
    play.column1.push_back(ui->lineEdit_60->text());
    play.column1.push_back(ui->lineEdit_69->text());
    play.column1.push_back(ui->lineEdit_78->text());
    play.column2.push_back(ui->lineEdit_3->text());
    play.column2.push_back(ui->lineEdit_19->text());
    play.column2.push_back(ui->lineEdit_28->text());
    play.column2.push_back(ui->lineEdit_37->text());
    play.column2.push_back(ui->lineEdit_46->text());
    play.column2.push_back(ui->lineEdit_55->text());
    play.column2.push_back(ui->lineEdit_64->text());
    play.column2.push_back(ui->lineEdit_73->text());
    play.column2.push_back(ui->lineEdit_82->text());
    play.column3.push_back(ui->lineEdit_4->text());
    play.column3.push_back(ui->lineEdit_18->text());
    play.column3.push_back(ui->lineEdit_27->text());
    play.column3.push_back(ui->lineEdit_36->text());
    play.column3.push_back(ui->lineEdit_45->text());
    play.column3.push_back(ui->lineEdit_54->text());
    play.column3.push_back(ui->lineEdit_63->text());
    play.column3.push_back(ui->lineEdit_72->text());
    play.column3.push_back(ui->lineEdit_81->text());
    play.column4.push_back(ui->lineEdit_5->text());
    play.column4.push_back(ui->lineEdit_14->text());
    play.column4.push_back(ui->lineEdit_23->text());
    play.column4.push_back(ui->lineEdit_32->text());
    play.column4.push_back(ui->lineEdit_41->text());
    play.column4.push_back(ui->lineEdit_50->text());
    play.column4.push_back(ui->lineEdit_59->text());
    play.column4.push_back(ui->lineEdit_68->text());
    play.column4.push_back(ui->lineEdit_77->text());
    play.column5.push_back(ui->lineEdit_7->text());
    play.column5.push_back(ui->lineEdit_12->text());
    play.column5.push_back(ui->lineEdit_21->text());
    play.column5.push_back(ui->lineEdit_30->text());
    play.column5.push_back(ui->lineEdit_39->text());
    play.column5.push_back(ui->lineEdit_48->text());
    play.column5.push_back(ui->lineEdit_57->text());
    play.column5.push_back(ui->lineEdit_66->text());
    play.column5.push_back(ui->lineEdit_75->text());
    play.column6.push_back(ui->lineEdit_9->text());
    play.column6.push_back(ui->lineEdit_13->text());
    play.column6.push_back(ui->lineEdit_22->text());
    play.column6.push_back(ui->lineEdit_31->text());
    play.column6.push_back(ui->lineEdit_40->text());
    play.column6.push_back(ui->lineEdit_49->text());
    play.column6.push_back(ui->lineEdit_58->text());
    play.column6.push_back(ui->lineEdit_67->text());
    play.column6.push_back(ui->lineEdit_76->text());
    play.column7.push_back(ui->lineEdit_8->text());
    play.column7.push_back(ui->lineEdit_17->text());
    play.column7.push_back(ui->lineEdit_26->text());
    play.column7.push_back(ui->lineEdit_35->text());
    play.column7.push_back(ui->lineEdit_44->text());
    play.column7.push_back(ui->lineEdit_53->text());
    play.column7.push_back(ui->lineEdit_62->text());
    play.column7.push_back(ui->lineEdit_71->text());
    play.column7.push_back(ui->lineEdit_80->text());
    play.column8.push_back(ui->lineEdit_6->text());
    play.column8.push_back(ui->lineEdit_11->text());
    play.column8.push_back(ui->lineEdit_20->text());
    play.column8.push_back(ui->lineEdit_29->text());
    play.column8.push_back(ui->lineEdit_38->text());
    play.column8.push_back(ui->lineEdit_47->text());
    play.column8.push_back(ui->lineEdit_56->text());
    play.column8.push_back(ui->lineEdit_65->text());
    play.column8.push_back(ui->lineEdit_74->text());
    play.column9.push_back(ui->lineEdit_10->text());
    play.column9.push_back(ui->lineEdit_16->text());
    play.column9.push_back(ui->lineEdit_25->text());
    play.column9.push_back(ui->lineEdit_34->text());
    play.column9.push_back(ui->lineEdit_43->text());
    play.column9.push_back(ui->lineEdit_52->text());
    play.column9.push_back(ui->lineEdit_61->text());
    play.column9.push_back(ui->lineEdit_70->text());
    play.column9.push_back(ui->lineEdit_79->text());
    play.row1.push_back(ui->lineEdit_2->text());
    play.row1.push_back(ui->lineEdit_3->text());
    play.row1.push_back(ui->lineEdit_4->text());
    play.row1.push_back(ui->lineEdit_5->text());
    play.row1.push_back(ui->lineEdit_6->text());
    play.row1.push_back(ui->lineEdit_7->text());
    play.row1.push_back(ui->lineEdit_8->text());
    play.row1.push_back(ui->lineEdit_9->text());
    play.row1.push_back(ui->lineEdit_10->text());
    play.row2.push_back(ui->lineEdit_11->text());
    play.row2.push_back(ui->lineEdit_12->text());
    play.row2.push_back(ui->lineEdit_13->text());
    play.row2.push_back(ui->lineEdit_14->text());
    play.row2.push_back(ui->lineEdit_15->text());
    play.row2.push_back(ui->lineEdit_16->text());
    play.row2.push_back(ui->lineEdit_17->text());
    play.row2.push_back(ui->lineEdit_18->text());
    play.row2.push_back(ui->lineEdit_19->text());
    play.row3.push_back(ui->lineEdit_20->text());
    play.row3.push_back(ui->lineEdit_21->text());
    play.row3.push_back(ui->lineEdit_22->text());
    play.row3.push_back(ui->lineEdit_23->text());
    play.row3.push_back(ui->lineEdit_24->text());
    play.row3.push_back(ui->lineEdit_25->text());
    play.row3.push_back(ui->lineEdit_26->text());
    play.row3.push_back(ui->lineEdit_27->text());
    play.row3.push_back(ui->lineEdit_28->text());
    play.row4.push_back(ui->lineEdit_29->text());
    play.row4.push_back(ui->lineEdit_30->text());
    play.row4.push_back(ui->lineEdit_31->text());
    play.row4.push_back(ui->lineEdit_32->text());
    play.row4.push_back(ui->lineEdit_33->text());
    play.row4.push_back(ui->lineEdit_34->text());
    play.row4.push_back(ui->lineEdit_35->text());
    play.row4.push_back(ui->lineEdit_36->text());
    play.row4.push_back(ui->lineEdit_37->text());
    play.row5.push_back(ui->lineEdit_38->text());
    play.row5.push_back(ui->lineEdit_39->text());
    play.row5.push_back(ui->lineEdit_40->text());
    play.row5.push_back(ui->lineEdit_41->text());
    play.row5.push_back(ui->lineEdit_42->text());
    play.row5.push_back(ui->lineEdit_43->text());
    play.row5.push_back(ui->lineEdit_44->text());
    play.row5.push_back(ui->lineEdit_45->text());
    play.row5.push_back(ui->lineEdit_46->text());
    play.row6.push_back(ui->lineEdit_47->text());
    play.row6.push_back(ui->lineEdit_48->text());
    play.row6.push_back(ui->lineEdit_49->text());
    play.row6.push_back(ui->lineEdit_50->text());
    play.row6.push_back(ui->lineEdit_51->text());
    play.row6.push_back(ui->lineEdit_52->text());
    play.row6.push_back(ui->lineEdit_53->text());
    play.row6.push_back(ui->lineEdit_54->text());
    play.row6.push_back(ui->lineEdit_55->text());
    play.row7.push_back(ui->lineEdit_56->text());
    play.row7.push_back(ui->lineEdit_57->text());
    play.row7.push_back(ui->lineEdit_58->text());
    play.row7.push_back(ui->lineEdit_59->text());
    play.row7.push_back(ui->lineEdit_60->text());
    play.row7.push_back(ui->lineEdit_61->text());
    play.row7.push_back(ui->lineEdit_62->text());
    play.row7.push_back(ui->lineEdit_63->text());
    play.row7.push_back(ui->lineEdit_64->text());
    play.row8.push_back(ui->lineEdit_65->text());
    play.row8.push_back(ui->lineEdit_66->text());
    play.row8.push_back(ui->lineEdit_67->text());
    play.row8.push_back(ui->lineEdit_68->text());
    play.row8.push_back(ui->lineEdit_69->text());
    play.row8.push_back(ui->lineEdit_70->text());
    play.row8.push_back(ui->lineEdit_71->text());
    play.row8.push_back(ui->lineEdit_72->text());
    play.row8.push_back(ui->lineEdit_73->text());
    play.row9.push_back(ui->lineEdit_74->text());
    play.row9.push_back(ui->lineEdit_75->text());
    play.row9.push_back(ui->lineEdit_76->text());
    play.row9.push_back(ui->lineEdit_77->text());
    play.row9.push_back(ui->lineEdit_78->text());
    play.row9.push_back(ui->lineEdit_79->text());
    play.row9.push_back(ui->lineEdit_80->text());
    play.row9.push_back(ui->lineEdit_81->text());
    play.row9.push_back(ui->lineEdit_82->text());
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(play.square1, notSame, this_one, num, u);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(play.square1, notSame, this_one, num, u);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(play.square2, notSame2, this_one, num, u2);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(play.square2, notSame2, this_one, num, u2);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(play.square3, notSame3, this_one, num, u3);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(play.square3, notSame3, this_one, num, u3);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(play.square4, notSame4, this_one, num, u4);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(play.square4, notSame4, this_one, num, u4);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(play.square5, notSame5, this_one, num, u5);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(play.square5, notSame5, this_one, num, u5);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(play.square6, notSame6, this_one, num, u6);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(play.square6, notSame6, this_one, num, u6);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(play.square7, notSame7, this_one, num, u7);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(play.square7, notSame7, this_one, num, u7);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(play.square8, notSame8, this_one, num, u8);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(play.square8, notSame8, this_one, num, u8);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(play.square9, notSame9, this_one, num, u9);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(play.square9, notSame9, this_one, num, u9);
                                        QVector<QString> notSameColumn1;
                                        int uC1 = 0;
                                        right = massive(play.column1, notSameColumn1, this_one, num, uC1);
                                        if(right >= 0 && count_num == 81)
                                        {
                                            notSameColumn1.clear();
                                            massive(play.column1, notSameColumn1, this_one, num, uC1);
                                            QVector<QString> notSameColumn2;
                                            int uC2 = 0;
                                            right = massive(play.column2, notSameColumn2, this_one, num, uC2);
                                            if(right >= 0)
                                            {
                                                notSameColumn2.clear();
                                                massive(play.column2, notSameColumn2, this_one, num, uC2);
                                                QVector<QString> notSameColumn3;
                                                int uC3 = 0;
                                                right = massive(play.column3, notSameColumn3, this_one, num, uC3);
                                                if(right >= 0)
                                                {
                                                    notSameColumn3.clear();
                                                    massive(play.column3, notSameColumn3, this_one, num, uC3);
                                                    QVector<QString> notSameColumn4;
                                                    int uC4 = 0;
                                                    right = massive(play.column4, notSameColumn4, this_one, num, uC4);
                                                    if(right >= 0)
                                                    {
                                                        notSameColumn4.clear();
                                                        massive(play.column4, notSameColumn4, this_one, num, uC4);
                                                        QVector<QString> notSameColumn5;
                                                        int uC5 = 0;
                                                        right = massive(play.column5, notSameColumn5, this_one, num, uC5);
                                                        if(right >= 0)
                                                        {
                                                            notSameColumn5.clear();
                                                            massive(play.column5, notSameColumn5, this_one, num, uC5);
                                                            QVector<QString> notSameColumn6;
                                                            int uC6 = 0;
                                                            right = massive(play.column6, notSameColumn6, this_one, num, uC6);
                                                            if(right >= 0)
                                                            {
                                                                notSameColumn6.clear();
                                                                massive(play.column6, notSameColumn6, this_one, num, uC6);
                                                                QVector<QString> notSameColumn7;
                                                                int uC7 = 0;
                                                                right = massive(play.column7, notSameColumn7, this_one, num, uC7);
                                                                if(right >= 0)
                                                                {
                                                                    notSameColumn7.clear();
                                                                    massive(play.column7, notSameColumn7, this_one, num, uC7);
                                                                    QVector<QString> notSameColumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(play.column8, notSameColumn8, this_one, num, uC8);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSameColumn8.clear();
                                                                        massive(play.column8, notSameColumn8, this_one, num, uC8);
                                                                        QVector<QString> notSameColumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(play.column9, notSameColumn9, this_one, num, uC9);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSameColumn9.clear();
                                                                            massive(play.column9, notSameColumn9, this_one, num, uC9);
                                                                            QVector<QString> notSameRow1;
                                                                            int uR1 = 0;
                                                                            right = massive(play.row1, notSameRow1, this_one, num, uR1);
                                                                            if(right >= 0)
                                                                            {
                                                                                notSameRow1.clear();
                                                                                massive(play.row1, notSameRow1, this_one, num, uR1);
                                                                                QVector<QString> notSameRow2;
                                                                                int uR2 = 0;
                                                                                right = massive(play.row2, notSameRow2, this_one, num, uR2);
                                                                                if(right >= 0)
                                                                                {
                                                                                    notSameRow2.clear();
                                                                                    massive(play.row2, notSameRow2, this_one, num, uR2);
                                                                                    QVector<QString> notSameRow3;
                                                                                    int uR3 = 0;
                                                                                    right = massive(play.row3, notSameRow3, this_one, num, uR3);
                                                                                    if(right >= 0)
                                                                                    {
                                                                                        notSameRow3.clear();
                                                                                        massive(play.row3, notSameRow3, this_one, num, uR3);
                                                                                        QVector<QString> notSameRow4;
                                                                                        int uR4 = 0;
                                                                                        right = massive(play.row4, notSameRow4, this_one, num, uR4);
                                                                                        if(right >= 0)
                                                                                        {
                                                                                            notSameRow4.clear();
                                                                                            massive(play.row4, notSameRow4, this_one, num, uR4);
                                                                                            QVector<QString> notSameRow5;
                                                                                            int uR5 = 0;
                                                                                            right = massive(play.row5, notSameRow5, this_one, num, uR5);
                                                                                            if(right >= 0)
                                                                                            {
                                                                                                notSameRow5.clear();
                                                                                                massive(play.row5, notSameRow5, this_one, num, uR5);
                                                                                                QVector<QString> notSameRow6;
                                                                                                int uR6 = 0;
                                                                                                right = massive(play.row6, notSameRow6, this_one, num, uR6);
                                                                                                if(right >= 0)
                                                                                                {
                                                                                                    notSameRow6.clear();
                                                                                                    massive(play.row6, notSameRow6, this_one, num, uR6);
                                                                                                    QVector<QString> notSameRow7;
                                                                                                    int uR7 = 0;
                                                                                                    right = massive(play.row7, notSameRow7, this_one, num, uR7);
                                                                                                    if(right >= 0)
                                                                                                    {
                                                                                                        notSameRow7.clear();
                                                                                                        massive(play.row7, notSameRow7, this_one, num, uR7);
                                                                                                        QVector<QString> notSameRow8;
                                                                                                        int uR8 = 0;
                                                                                                        right = massive(play.row8, notSameRow8, this_one, num, uR8);
                                                                                                        if(right >= 0)
                                                                                                        {
                                                                                                            notSameRow8.clear();
                                                                                                            massive(play.row8, notSameRow8, this_one, num, uR8);
                                                                                                            QVector<QString> notSameRow9;
                                                                                                            int uR9 = 0;
                                                                                                            right = massive(play.row9, notSameRow9, this_one, num, uR9);
                                                                                                            if(right >= 0)
                                                                                                            {
                                                                                                                notSameRow9.clear();
                                                                                                                massive(play.row9, notSameRow9, this_one, num, uR9);
                                                                                                                QMessageBox::information(this,"Congratulations!","You win the puzzle!");
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                showInformation();
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            showInformation();
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        showInformation();
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    showInformation();
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                showInformation();
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            showInformation();
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        showInformation();
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    showInformation();
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                showInformation();
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            showInformation();
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        showInformation();
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    showInformation();
                                                                }
                                                            }
                                                            else
                                                            {
                                                                showInformation();
                                                            }
                                                        }
                                                        else
                                                        {
                                                            showInformation();
                                                        }

                                                    }
                                                    else
                                                    {
                                                        showInformation();
                                                    }
                                                }
                                                else
                                                {
                                                    showInformation();
                                                }
                                            }
                                            else
                                            {
                                                showInformation();
                                            }
                                        }
                                        else
                                        {
                                            showInformation();
                                        }
                                    }
                                    else
                                    {
                                        showInformation();
                                    }
                                }
                                else
                                {
                                    showInformation();
                                }
                            }
                            else
                            {
                                showInformation();
                            }
                        }
                        else
                        {
                            showInformation();
                        }
                    }
                    else
                    {
                        showInformation();
                    }
                }
                else
                {
                    showInformation();
                }
            }
            else
            {
                showInformation();
            }
        }
        else
        {
            showInformation();
        }
    }
    else
    {
        showInformation();
    }
}

bool PlaySudokuDialog::check(QVector<QString> sq1, int inter, QString num[])
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

int PlaySudokuDialog::massive(QVector<QString> sq1, QVector<QString> notSame, QString this_is, QString *num, int integer)
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
