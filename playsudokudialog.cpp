#include "playsudokudialog.h"
#include "ui_playsudokudialog.h"
#include <QMessageBox>

PlaySudokuDialog::PlaySudokuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaySudokuDialog)
{
    ui->setupUi(this);
}

PlaySudokuDialog::~PlaySudokuDialog()
{
    delete ui;
}

void PlaySudokuDialog::setNumbers(SudokuField newSudoku)
{
    ui->lineEdit_2->setText(newSudoku.square1[0]);
    ui->lineEdit_3->setText(newSudoku.square1[1]);
    ui->lineEdit_4->setText(newSudoku.square1[2]);
    ui->lineEdit_15->setText(newSudoku.square1[3]);
    ui->lineEdit_19->setText(newSudoku.square1[4]);
    ui->lineEdit_18->setText(newSudoku.square1[5]);
    ui->lineEdit_24->setText(newSudoku.square1[6]);
    ui->lineEdit_28->setText(newSudoku.square1[7]);
    ui->lineEdit_27->setText(newSudoku.square1[8]);
    ui->lineEdit_5->setText(newSudoku.square2[0]);
    ui->lineEdit_7->setText(newSudoku.square2[1]);
    ui->lineEdit_9->setText(newSudoku.square2[2]);
    ui->lineEdit_14->setText(newSudoku.square2[3]);
    ui->lineEdit_12->setText(newSudoku.square2[4]);
    ui->lineEdit_13->setText(newSudoku.square2[5]);
    ui->lineEdit_23->setText(newSudoku.square2[6]);
    ui->lineEdit_21->setText(newSudoku.square2[7]);
    ui->lineEdit_22->setText(newSudoku.square2[8]);
    ui->lineEdit_8->setText(newSudoku.square3[0]);
    ui->lineEdit_6->setText(newSudoku.square3[1]);
    ui->lineEdit_10->setText(newSudoku.square3[2]);
    ui->lineEdit_17->setText(newSudoku.square3[3]);
    ui->lineEdit_11->setText(newSudoku.square3[4]);
    ui->lineEdit_16->setText(newSudoku.square3[5]);
    ui->lineEdit_26->setText(newSudoku.square3[6]);
    ui->lineEdit_20->setText(newSudoku.square3[7]);
    ui->lineEdit_25->setText(newSudoku.square3[8]);
    ui->lineEdit_33->setText(newSudoku.square4[0]);
    ui->lineEdit_37->setText(newSudoku.square4[1]);
    ui->lineEdit_36->setText(newSudoku.square4[2]);
    ui->lineEdit_42->setText(newSudoku.square4[3]);
    ui->lineEdit_46->setText(newSudoku.square4[4]);
    ui->lineEdit_45->setText(newSudoku.square4[5]);
    ui->lineEdit_51->setText(newSudoku.square4[6]);
    ui->lineEdit_55->setText(newSudoku.square4[7]);
    ui->lineEdit_54->setText(newSudoku.square4[8]);
    ui->lineEdit_32->setText(newSudoku.square5[0]);
    ui->lineEdit_30->setText(newSudoku.square5[1]);
    ui->lineEdit_31->setText(newSudoku.square5[2]);
    ui->lineEdit_41->setText(newSudoku.square5[3]);
    ui->lineEdit_39->setText(newSudoku.square5[4]);
    ui->lineEdit_40->setText(newSudoku.square5[5]);
    ui->lineEdit_50->setText(newSudoku.square5[6]);
    ui->lineEdit_48->setText(newSudoku.square5[7]);
    ui->lineEdit_49->setText(newSudoku.square5[8]);
    ui->lineEdit_35->setText(newSudoku.square6[0]);
    ui->lineEdit_29->setText(newSudoku.square6[1]);
    ui->lineEdit_34->setText(newSudoku.square6[2]);
    ui->lineEdit_44->setText(newSudoku.square6[3]);
    ui->lineEdit_38->setText(newSudoku.square6[4]);
    ui->lineEdit_43->setText(newSudoku.square6[5]);
    ui->lineEdit_53->setText(newSudoku.square6[6]);
    ui->lineEdit_47->setText(newSudoku.square6[7]);
    ui->lineEdit_52->setText(newSudoku.square6[8]);
    ui->lineEdit_60->setText(newSudoku.square7[0]);
    ui->lineEdit_64->setText(newSudoku.square7[1]);
    ui->lineEdit_63->setText(newSudoku.square7[2]);
    ui->lineEdit_69->setText(newSudoku.square7[3]);
    ui->lineEdit_73->setText(newSudoku.square7[4]);
    ui->lineEdit_72->setText(newSudoku.square7[5]);
    ui->lineEdit_78->setText(newSudoku.square7[6]);
    ui->lineEdit_82->setText(newSudoku.square7[7]);
    ui->lineEdit_81->setText(newSudoku.square7[8]);
    ui->lineEdit_59->setText(newSudoku.square8[0]);
    ui->lineEdit_57->setText(newSudoku.square8[1]);
    ui->lineEdit_58->setText(newSudoku.square8[2]);
    ui->lineEdit_68->setText(newSudoku.square8[3]);
    ui->lineEdit_66->setText(newSudoku.square8[4]);
    ui->lineEdit_67->setText(newSudoku.square8[5]);
    ui->lineEdit_77->setText(newSudoku.square8[6]);
    ui->lineEdit_75->setText(newSudoku.square8[7]);
    ui->lineEdit_76->setText(newSudoku.square8[8]);
    ui->lineEdit_62->setText(newSudoku.square9[0]);
    ui->lineEdit_56->setText(newSudoku.square9[1]);
    ui->lineEdit_61->setText(newSudoku.square9[2]);
    ui->lineEdit_71->setText(newSudoku.square9[3]);
    ui->lineEdit_65->setText(newSudoku.square9[4]);
    ui->lineEdit_70->setText(newSudoku.square9[5]);
    ui->lineEdit_80->setText(newSudoku.square9[6]);
    ui->lineEdit_74->setText(newSudoku.square9[7]);
    ui->lineEdit_79->setText(newSudoku.square9[8]);
}

void PlaySudokuDialog::showInformation()
{
    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
}

void PlaySudokuDialog::on_pushButton_clicked()
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
    sudokuField.rows[0].push_back(ui->lineEdit_2->text());
    sudokuField.rows[0].push_back(ui->lineEdit_3->text());
    sudokuField.rows[0].push_back(ui->lineEdit_4->text());
    sudokuField.rows[0].push_back(ui->lineEdit_5->text());
    sudokuField.rows[0].push_back(ui->lineEdit_6->text());
    sudokuField.rows[0].push_back(ui->lineEdit_7->text());
    sudokuField.rows[0].push_back(ui->lineEdit_8->text());
    sudokuField.rows[0].push_back(ui->lineEdit_9->text());
    sudokuField.rows[0].push_back(ui->lineEdit_10->text());
    sudokuField.rows[1].push_back(ui->lineEdit_11->text());
    sudokuField.rows[1].push_back(ui->lineEdit_12->text());
    sudokuField.rows[1].push_back(ui->lineEdit_13->text());
    sudokuField.rows[1].push_back(ui->lineEdit_14->text());
    sudokuField.rows[1].push_back(ui->lineEdit_15->text());
    sudokuField.rows[1].push_back(ui->lineEdit_16->text());
    sudokuField.rows[1].push_back(ui->lineEdit_17->text());
    sudokuField.rows[1].push_back(ui->lineEdit_18->text());
    sudokuField.rows[1].push_back(ui->lineEdit_19->text());
    sudokuField.rows[2].push_back(ui->lineEdit_20->text());
    sudokuField.rows[2].push_back(ui->lineEdit_21->text());
    sudokuField.rows[2].push_back(ui->lineEdit_22->text());
    sudokuField.rows[2].push_back(ui->lineEdit_23->text());
    sudokuField.rows[2].push_back(ui->lineEdit_24->text());
    sudokuField.rows[2].push_back(ui->lineEdit_25->text());
    sudokuField.rows[2].push_back(ui->lineEdit_26->text());
    sudokuField.rows[2].push_back(ui->lineEdit_27->text());
    sudokuField.rows[2].push_back(ui->lineEdit_28->text());
    sudokuField.rows[3].push_back(ui->lineEdit_29->text());
    sudokuField.rows[3].push_back(ui->lineEdit_30->text());
    sudokuField.rows[3].push_back(ui->lineEdit_31->text());
    sudokuField.rows[3].push_back(ui->lineEdit_32->text());
    sudokuField.rows[3].push_back(ui->lineEdit_33->text());
    sudokuField.rows[3].push_back(ui->lineEdit_34->text());
    sudokuField.rows[3].push_back(ui->lineEdit_35->text());
    sudokuField.rows[3].push_back(ui->lineEdit_36->text());
    sudokuField.rows[3].push_back(ui->lineEdit_37->text());
    sudokuField.rows[4].push_back(ui->lineEdit_38->text());
    sudokuField.rows[4].push_back(ui->lineEdit_39->text());
    sudokuField.rows[4].push_back(ui->lineEdit_40->text());
    sudokuField.rows[4].push_back(ui->lineEdit_41->text());
    sudokuField.rows[4].push_back(ui->lineEdit_42->text());
    sudokuField.rows[4].push_back(ui->lineEdit_43->text());
    sudokuField.rows[4].push_back(ui->lineEdit_44->text());
    sudokuField.rows[4].push_back(ui->lineEdit_45->text());
    sudokuField.rows[4].push_back(ui->lineEdit_46->text());
    sudokuField.rows[5].push_back(ui->lineEdit_47->text());
    sudokuField.rows[5].push_back(ui->lineEdit_48->text());
    sudokuField.rows[5].push_back(ui->lineEdit_49->text());
    sudokuField.rows[5].push_back(ui->lineEdit_50->text());
    sudokuField.rows[5].push_back(ui->lineEdit_51->text());
    sudokuField.rows[5].push_back(ui->lineEdit_52->text());
    sudokuField.rows[5].push_back(ui->lineEdit_53->text());
    sudokuField.rows[5].push_back(ui->lineEdit_54->text());
    sudokuField.rows[5].push_back(ui->lineEdit_55->text());
    sudokuField.rows[6].push_back(ui->lineEdit_56->text());
    sudokuField.rows[6].push_back(ui->lineEdit_57->text());
    sudokuField.rows[6].push_back(ui->lineEdit_58->text());
    sudokuField.rows[6].push_back(ui->lineEdit_59->text());
    sudokuField.rows[6].push_back(ui->lineEdit_60->text());
    sudokuField.rows[6].push_back(ui->lineEdit_61->text());
    sudokuField.rows[6].push_back(ui->lineEdit_62->text());
    sudokuField.rows[6].push_back(ui->lineEdit_63->text());
    sudokuField.rows[6].push_back(ui->lineEdit_64->text());
    sudokuField.rows[7].push_back(ui->lineEdit_65->text());
    sudokuField.rows[7].push_back(ui->lineEdit_66->text());
    sudokuField.rows[7].push_back(ui->lineEdit_67->text());
    sudokuField.rows[7].push_back(ui->lineEdit_68->text());
    sudokuField.rows[7].push_back(ui->lineEdit_69->text());
    sudokuField.rows[7].push_back(ui->lineEdit_70->text());
    sudokuField.rows[7].push_back(ui->lineEdit_71->text());
    sudokuField.rows[7].push_back(ui->lineEdit_72->text());
    sudokuField.rows[7].push_back(ui->lineEdit_73->text());
    sudokuField.rows[8].push_back(ui->lineEdit_74->text());
    sudokuField.rows[8].push_back(ui->lineEdit_75->text());
    sudokuField.rows[8].push_back(ui->lineEdit_76->text());
    sudokuField.rows[8].push_back(ui->lineEdit_77->text());
    sudokuField.rows[8].push_back(ui->lineEdit_78->text());
    sudokuField.rows[8].push_back(ui->lineEdit_79->text());
    sudokuField.rows[8].push_back(ui->lineEdit_80->text());
    sudokuField.rows[8].push_back(ui->lineEdit_81->text());
    sudokuField.rows[8].push_back(ui->lineEdit_82->text());
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(sudokuField.square1, notSame, this_one, num, u);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(sudokuField.square1, notSame, this_one, num, u);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(sudokuField.square2, notSame2, this_one, num, u2);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(sudokuField.square2, notSame2, this_one, num, u2);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(sudokuField.square3, notSame3, this_one, num, u3);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(sudokuField.square3, notSame3, this_one, num, u3);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(sudokuField.square4, notSame4, this_one, num, u4);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(sudokuField.square4, notSame4, this_one, num, u4);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(sudokuField.square5, notSame5, this_one, num, u5);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(sudokuField.square5, notSame5, this_one, num, u5);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(sudokuField.square6, notSame6, this_one, num, u6);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(sudokuField.square6, notSame6, this_one, num, u6);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(sudokuField.square7, notSame7, this_one, num, u7);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(sudokuField.square7, notSame7, this_one, num, u7);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(sudokuField.square8, notSame8, this_one, num, u8);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(sudokuField.square8, notSame8, this_one, num, u8);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(sudokuField.square9, notSame9, this_one, num, u9);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(sudokuField.square9, notSame9, this_one, num, u9);
                                        QVector<QString> notSameColumn1;
                                        int uC1 = 0;
                                        right = massive(sudokuField.column1, notSameColumn1, this_one, num, uC1);
                                        if(right >= 0 && count_num == 81)
                                        {
                                            notSameColumn1.clear();
                                            massive(sudokuField.column1, notSameColumn1, this_one, num, uC1);
                                            QVector<QString> notSameColumn2;
                                            int uC2 = 0;
                                            right = massive(sudokuField.column2, notSameColumn2, this_one, num, uC2);
                                            if(right >= 0)
                                            {
                                                notSameColumn2.clear();
                                                massive(sudokuField.column2, notSameColumn2, this_one, num, uC2);
                                                QVector<QString> notSameColumn3;
                                                int uC3 = 0;
                                                right = massive(sudokuField.column3, notSameColumn3, this_one, num, uC3);
                                                if(right >= 0)
                                                {
                                                    notSameColumn3.clear();
                                                    massive(sudokuField.column3, notSameColumn3, this_one, num, uC3);
                                                    QVector<QString> notSameColumn4;
                                                    int uC4 = 0;
                                                    right = massive(sudokuField.column4, notSameColumn4, this_one, num, uC4);
                                                    if(right >= 0)
                                                    {
                                                        notSameColumn4.clear();
                                                        massive(sudokuField.column4, notSameColumn4, this_one, num, uC4);
                                                        QVector<QString> notSameColumn5;
                                                        int uC5 = 0;
                                                        right = massive(sudokuField.column5, notSameColumn5, this_one, num, uC5);
                                                        if(right >= 0)
                                                        {
                                                            notSameColumn5.clear();
                                                            massive(sudokuField.column5, notSameColumn5, this_one, num, uC5);
                                                            QVector<QString> notSameColumn6;
                                                            int uC6 = 0;
                                                            right = massive(sudokuField.column6, notSameColumn6, this_one, num, uC6);
                                                            if(right >= 0)
                                                            {
                                                                notSameColumn6.clear();
                                                                massive(sudokuField.column6, notSameColumn6, this_one, num, uC6);
                                                                QVector<QString> notSameColumn7;
                                                                int uC7 = 0;
                                                                right = massive(sudokuField.column7, notSameColumn7, this_one, num, uC7);
                                                                if(right >= 0)
                                                                {
                                                                    notSameColumn7.clear();
                                                                    massive(sudokuField.column7, notSameColumn7, this_one, num, uC7);
                                                                    QVector<QString> notSameColumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(sudokuField.column8, notSameColumn8, this_one, num, uC8);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSameColumn8.clear();
                                                                        massive(sudokuField.column8, notSameColumn8, this_one, num, uC8);
                                                                        QVector<QString> notSameColumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(sudokuField.column9, notSameColumn9, this_one, num, uC9);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSameColumn9.clear();
                                                                            massive(sudokuField.column9, notSameColumn9, this_one, num, uC9);
                                                                            QVector<QString> notSameRow1;
                                                                            int uR1 = 0;
                                                                            right = massive(sudokuField.rows[0], notSameRow1, this_one, num, uR1);
                                                                            if(right >= 0)
                                                                            {
                                                                                notSameRow1.clear();
                                                                                massive(sudokuField.rows[0], notSameRow1, this_one, num, uR1);
                                                                                QVector<QString> notSameRow2;
                                                                                int uR2 = 0;
                                                                                right = massive(sudokuField.rows[1], notSameRow2, this_one, num, uR2);
                                                                                if(right >= 0)
                                                                                {
                                                                                    notSameRow2.clear();
                                                                                    massive(sudokuField.rows[1], notSameRow2, this_one, num, uR2);
                                                                                    QVector<QString> notSameRow3;
                                                                                    int uR3 = 0;
                                                                                    right = massive(sudokuField.rows[2], notSameRow3, this_one, num, uR3);
                                                                                    if(right >= 0)
                                                                                    {
                                                                                        notSameRow3.clear();
                                                                                        massive(sudokuField.rows[2], notSameRow3, this_one, num, uR3);
                                                                                        QVector<QString> notSameRow4;
                                                                                        int uR4 = 0;
                                                                                        right = massive(sudokuField.rows[3], notSameRow4, this_one, num, uR4);
                                                                                        if(right >= 0)
                                                                                        {
                                                                                            notSameRow4.clear();
                                                                                            massive(sudokuField.rows[3], notSameRow4, this_one, num, uR4);
                                                                                            QVector<QString> notSameRow5;
                                                                                            int uR5 = 0;
                                                                                            right = massive(sudokuField.rows[4], notSameRow5, this_one, num, uR5);
                                                                                            if(right >= 0)
                                                                                            {
                                                                                                notSameRow5.clear();
                                                                                                massive(sudokuField.rows[4], notSameRow5, this_one, num, uR5);
                                                                                                QVector<QString> notSameRow6;
                                                                                                int uR6 = 0;
                                                                                                right = massive(sudokuField.rows[5], notSameRow6, this_one, num, uR6);
                                                                                                if(right >= 0)
                                                                                                {
                                                                                                    notSameRow6.clear();
                                                                                                    massive(sudokuField.rows[5], notSameRow6, this_one, num, uR6);
                                                                                                    QVector<QString> notSameRow7;
                                                                                                    int uR7 = 0;
                                                                                                    right = massive(sudokuField.rows[6], notSameRow7, this_one, num, uR7);
                                                                                                    if(right >= 0)
                                                                                                    {
                                                                                                        notSameRow7.clear();
                                                                                                        massive(sudokuField.rows[6], notSameRow7, this_one, num, uR7);
                                                                                                        QVector<QString> notSameRow8;
                                                                                                        int uR8 = 0;
                                                                                                        right = massive(sudokuField.rows[7], notSameRow8, this_one, num, uR8);
                                                                                                        if(right >= 0)
                                                                                                        {
                                                                                                            notSameRow8.clear();
                                                                                                            massive(sudokuField.rows[7], notSameRow8, this_one, num, uR8);
                                                                                                            QVector<QString> notSameRow9;
                                                                                                            int uR9 = 0;
                                                                                                            right = massive(sudokuField.rows[8], notSameRow9, this_one, num, uR9);
                                                                                                            if(right >= 0)
                                                                                                            {
                                                                                                                notSameRow9.clear();
                                                                                                                massive(sudokuField.rows[8], notSameRow9, this_one, num, uR9);
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
