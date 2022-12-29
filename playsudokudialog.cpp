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
    ui->lineEdit_01->setText(newSudoku.squares[0][0]);
    ui->lineEdit_02->setText(newSudoku.squares[0][1]);
    ui->lineEdit_03->setText(newSudoku.squares[0][2]);
    ui->lineEdit_11->setText(newSudoku.squares[0][3]);
    ui->lineEdit_12->setText(newSudoku.squares[0][4]);
    ui->lineEdit_13->setText(newSudoku.squares[0][5]);
    ui->lineEdit_21->setText(newSudoku.squares[0][6]);
    ui->lineEdit_22->setText(newSudoku.squares[0][7]);
    ui->lineEdit_23->setText(newSudoku.squares[0][8]);
    ui->lineEdit_04->setText(newSudoku.squares[1][0]);
    ui->lineEdit_05->setText(newSudoku.squares[1][1]);
    ui->lineEdit_06->setText(newSudoku.squares[1][2]);
    ui->lineEdit_14->setText(newSudoku.squares[1][3]);
    ui->lineEdit_15->setText(newSudoku.squares[1][4]);
    ui->lineEdit_16->setText(newSudoku.squares[1][5]);
    ui->lineEdit_24->setText(newSudoku.squares[1][6]);
    ui->lineEdit_25->setText(newSudoku.squares[1][7]);
    ui->lineEdit_26->setText(newSudoku.squares[1][8]);
    ui->lineEdit_07->setText(newSudoku.squares[2][0]);
    ui->lineEdit_08->setText(newSudoku.squares[2][1]);
    ui->lineEdit_09->setText(newSudoku.squares[2][2]);
    ui->lineEdit_17->setText(newSudoku.squares[2][3]);
    ui->lineEdit_18->setText(newSudoku.squares[2][4]);
    ui->lineEdit_19->setText(newSudoku.squares[2][5]);
    ui->lineEdit_27->setText(newSudoku.squares[2][6]);
    ui->lineEdit_28->setText(newSudoku.squares[2][7]);
    ui->lineEdit_29->setText(newSudoku.squares[2][8]);
    ui->lineEdit_31->setText(newSudoku.squares[3][0]);
    ui->lineEdit_32->setText(newSudoku.squares[3][1]);
    ui->lineEdit_33->setText(newSudoku.squares[3][2]);
    ui->lineEdit_41->setText(newSudoku.squares[3][3]);
    ui->lineEdit_42->setText(newSudoku.squares[3][4]);
    ui->lineEdit_43->setText(newSudoku.squares[3][5]);
    ui->lineEdit_51->setText(newSudoku.squares[3][6]);
    ui->lineEdit_52->setText(newSudoku.squares[3][7]);
    ui->lineEdit_53->setText(newSudoku.squares[3][8]);
    ui->lineEdit_34->setText(newSudoku.squares[4][0]);
    ui->lineEdit_35->setText(newSudoku.squares[4][1]);
    ui->lineEdit_36->setText(newSudoku.squares[4][2]);
    ui->lineEdit_44->setText(newSudoku.squares[4][3]);
    ui->lineEdit_45->setText(newSudoku.squares[4][4]);
    ui->lineEdit_46->setText(newSudoku.squares[4][5]);
    ui->lineEdit_54->setText(newSudoku.squares[4][6]);
    ui->lineEdit_55->setText(newSudoku.squares[4][7]);
    ui->lineEdit_56->setText(newSudoku.squares[4][8]);
    ui->lineEdit_37->setText(newSudoku.squares[5][0]);
    ui->lineEdit_38->setText(newSudoku.squares[5][1]);
    ui->lineEdit_39->setText(newSudoku.squares[5][2]);
    ui->lineEdit_47->setText(newSudoku.squares[5][3]);
    ui->lineEdit_48->setText(newSudoku.squares[5][4]);
    ui->lineEdit_49->setText(newSudoku.squares[5][5]);
    ui->lineEdit_57->setText(newSudoku.squares[5][6]);
    ui->lineEdit_58->setText(newSudoku.squares[5][7]);
    ui->lineEdit_59->setText(newSudoku.squares[5][8]);
    ui->lineEdit_61->setText(newSudoku.squares[6][0]);
    ui->lineEdit_62->setText(newSudoku.squares[6][1]);
    ui->lineEdit_63->setText(newSudoku.squares[6][2]);
    ui->lineEdit_71->setText(newSudoku.squares[6][3]);
    ui->lineEdit_72->setText(newSudoku.squares[6][4]);
    ui->lineEdit_73->setText(newSudoku.squares[6][5]);
    ui->lineEdit_81->setText(newSudoku.squares[6][6]);
    ui->lineEdit_82->setText(newSudoku.squares[6][7]);
    ui->lineEdit_83->setText(newSudoku.squares[6][8]);
    ui->lineEdit_64->setText(newSudoku.squares[7][0]);
    ui->lineEdit_65->setText(newSudoku.squares[7][1]);
    ui->lineEdit_66->setText(newSudoku.squares[7][2]);
    ui->lineEdit_74->setText(newSudoku.squares[7][3]);
    ui->lineEdit_75->setText(newSudoku.squares[7][4]);
    ui->lineEdit_76->setText(newSudoku.squares[7][5]);
    ui->lineEdit_84->setText(newSudoku.squares[7][6]);
    ui->lineEdit_85->setText(newSudoku.squares[7][7]);
    ui->lineEdit_86->setText(newSudoku.squares[7][8]);
    ui->lineEdit_67->setText(newSudoku.squares[8][0]);
    ui->lineEdit_68->setText(newSudoku.squares[8][1]);
    ui->lineEdit_69->setText(newSudoku.squares[8][2]);
    ui->lineEdit_77->setText(newSudoku.squares[8][3]);
    ui->lineEdit_78->setText(newSudoku.squares[8][4]);
    ui->lineEdit_79->setText(newSudoku.squares[8][5]);
    ui->lineEdit_87->setText(newSudoku.squares[8][6]);
    ui->lineEdit_88->setText(newSudoku.squares[8][7]);
    ui->lineEdit_89->setText(newSudoku.squares[8][8]);
}

void PlaySudokuDialog::showInformation()
{
    QMessageBox::information(this,"Wrong","You can't play. I'm sorry!");
}

void PlaySudokuDialog::clearSudokuField()
{
    for(int i = 0; i < 9; i++)
    {
        sudokuField.squares[i].clear();
        sudokuField.columns[i].clear();
        sudokuField.rows[i].clear();
    }
}

void PlaySudokuDialog::readSudokuFromWindow()
{

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
}

bool PlaySudokuDialog::checkSudoku()
{
    int right = 0;
    QString this_one = "";
    QVector<QString> notSame;
    int u = 0;
    int count_num = 0;
    QString num[]= { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    right = massive(sudokuField.squares[0], notSame, this_one, num, u);
    if(right >= 0)
    {
        notSame.clear();
        count_num = count_num + massive(sudokuField.squares[0], notSame, this_one, num, u);
        QVector<QString> notSame2;
        int u2 = 0;
        right = massive(sudokuField.squares[1], notSame2, this_one, num, u2);
        if(right >= 0)
        {
            notSame2.clear();
            count_num = count_num + massive(sudokuField.squares[1], notSame2, this_one, num, u2);
            QVector<QString> notSame3;
            int u3 = 0;
            right = massive(sudokuField.squares[2], notSame3, this_one, num, u3);
            if(right >= 0)
            {
                notSame3.clear();
                count_num = count_num + massive(sudokuField.squares[2], notSame3, this_one, num, u3);
                QVector<QString> notSame4;
                int u4 = 0;
                right = massive(sudokuField.squares[3], notSame4, this_one, num, u4);
                if(right >= 0)
                {
                    notSame4.clear();
                    count_num = count_num + massive(sudokuField.squares[3], notSame4, this_one, num, u4);
                    QVector<QString> notSame5;
                    int u5 = 0;
                    right = massive(sudokuField.squares[4], notSame5, this_one, num, u5);
                    if(right >= 0)
                    {
                        notSame5.clear();
                        count_num = count_num + massive(sudokuField.squares[4], notSame5, this_one, num, u5);
                        QVector<QString> notSame6;
                        int u6 = 0;
                        right = massive(sudokuField.squares[5], notSame6, this_one, num, u6);
                        if(right >= 0)
                        {
                            notSame6.clear();
                            count_num = count_num + massive(sudokuField.squares[5], notSame6, this_one, num, u6);
                            QVector<QString> notSame7;
                            int u7 = 0;
                            right = massive(sudokuField.squares[6], notSame7, this_one, num, u7);
                            if(right >= 0)
                            {
                                notSame7.clear();
                                count_num = count_num + massive(sudokuField.squares[6], notSame7, this_one, num, u7);
                                QVector<QString> notSame8;
                                int u8 = 0;
                                right = massive(sudokuField.squares[7], notSame8, this_one, num, u8);
                                if(right >= 0)
                                {
                                    notSame8.clear();
                                    count_num = count_num + massive(sudokuField.squares[7], notSame8, this_one, num, u8);
                                    QVector<QString> notSame9;
                                    int u9 = 0;
                                    right = massive(sudokuField.squares[8], notSame9, this_one, num, u9);
                                    if(right >= 0)
                                    {
                                        notSame9.clear();
                                        count_num = count_num + massive(sudokuField.squares[8], notSame9, this_one, num, u9);
                                        QVector<QString> notSamecolumns[0];
                                        int uC1 = 0;
                                        right = massive(sudokuField.columns[0], notSamecolumns[0], this_one, num, uC1);
                                        if(right >= 0 && count_num == 81)
                                        {
                                            notSamecolumns[0].clear();
                                            massive(sudokuField.columns[0], notSamecolumns[0], this_one, num, uC1);
                                            QVector<QString> notSamecolumn2;
                                            int uC2 = 0;
                                            right = massive(sudokuField.columns[1], notSamecolumn2, this_one, num, uC2);
                                            if(right >= 0)
                                            {
                                                notSamecolumn2.clear();
                                                massive(sudokuField.columns[1], notSamecolumn2, this_one, num, uC2);
                                                QVector<QString> notSamecolumns3;
                                                int uC3 = 0;
                                                right = massive(sudokuField.columns[2], notSamecolumns3, this_one, num, uC3);
                                                if(right >= 0)
                                                {
                                                    notSamecolumns3.clear();
                                                    massive(sudokuField.columns[2], notSamecolumns3, this_one, num, uC3);
                                                    QVector<QString> notSamecolumn4;
                                                    int uC4 = 0;
                                                    right = massive(sudokuField.columns[3], notSamecolumn4, this_one, num, uC4);
                                                    if(right >= 0)
                                                    {
                                                        notSamecolumn4.clear();
                                                        massive(sudokuField.columns[3], notSamecolumn4, this_one, num, uC4);
                                                        QVector<QString> notSamecolumn5;
                                                        int uC5 = 0;
                                                        right = massive(sudokuField.columns[4], notSamecolumn5, this_one, num, uC5);
                                                        if(right >= 0)
                                                        {
                                                            notSamecolumn5.clear();
                                                            massive(sudokuField.columns[4], notSamecolumn5, this_one, num, uC5);
                                                            QVector<QString> notSamecolumn6;
                                                            int uC6 = 0;
                                                            right = massive(sudokuField.columns[5], notSamecolumn6, this_one, num, uC6);
                                                            if(right >= 0)
                                                            {
                                                                notSamecolumn6.clear();
                                                                massive(sudokuField.columns[5], notSamecolumn6, this_one, num, uC6);
                                                                QVector<QString> notSamecolumn7;
                                                                int uC7 = 0;
                                                                right = massive(sudokuField.columns[6], notSamecolumn7, this_one, num, uC7);
                                                                if(right >= 0)
                                                                {
                                                                    notSamecolumn7.clear();
                                                                    massive(sudokuField.columns[6], notSamecolumn7, this_one, num, uC7);
                                                                    QVector<QString> notSamecolumn8;
                                                                    int uC8 = 0;
                                                                    right = massive(sudokuField.columns[7], notSamecolumn8, this_one, num, uC8);
                                                                    if(right >= 0)
                                                                    {
                                                                        notSamecolumn8.clear();
                                                                        massive(sudokuField.columns[7], notSamecolumn8, this_one, num, uC8);
                                                                        QVector<QString> notSamecolumn9;
                                                                        int uC9 = 0;
                                                                        right = massive(sudokuField.columns[8], notSamecolumn9, this_one, num, uC9);
                                                                        if(right >= 0)
                                                                        {
                                                                            notSamecolumn9.clear();
                                                                            massive(sudokuField.columns[8], notSamecolumn9, this_one, num, uC9);
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
                                                                                                                return true;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    this->showInformation();
    return false;
}

void PlaySudokuDialog::on_pushButton_clicked()
{
    clearSudokuField();
    readSudokuFromWindow();
    if (this->checkSudoku())
    {
        QMessageBox::information(this,"Congratulations!","You win the puzzle!");
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
