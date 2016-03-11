#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    text = new QListWidgetItem;
    text->setText("");
    equation = new QListWidgetItem;
    StringCalculator::setup();
}

MainWindow::~MainWindow()
{
    delete ui;
}
// Repetitive Button Code
void MainWindow::on_btnOne_clicked()
{
    text->setText(text->text() + "1");
    ui->listDisplay->addItem(text);
    blah.append("1");
}

void MainWindow::on_btnTwo_clicked()
{
    text->setText(text->text() + "2");
    ui->listDisplay->addItem(text);
    blah.append("2");
}

void MainWindow::on_btnThree_clicked()
{
    text->setText(text->text() + "3");
    ui->listDisplay->addItem(text);
    blah.append("3");
}


void MainWindow::on_btnFour_clicked()
{
    text->setText(text->text() + "4");
    ui->listDisplay->addItem(text);
    blah.append("4");
}


void MainWindow::on_btnFive_clicked()
{
    text->setText(text->text() + "5");
    ui->listDisplay->addItem(text);
    blah.append("5");
}


void MainWindow::on_btnSix_clicked()
{
    text->setText(text->text() + "6");
    ui->listDisplay->addItem(text);
    blah.append("6");
}


void MainWindow::on_btnSeven_clicked()
{
    text->setText(text->text() + "7");
    ui->listDisplay->addItem(text);
    blah.append("7");
}


void MainWindow::on_btnEight_clicked()
{
    text->setText(text->text() + "8");
    ui->listDisplay->addItem(text);
    blah.append("8");
}


void MainWindow::on_btnNine_clicked()
{
    text->setText(text->text() + "9");
    ui->listDisplay->addItem(text);
    blah.append("9");
}

void MainWindow::on_btnZero_clicked()
{
    text->setText(text->text() + "0");
    ui->listDisplay->addItem(text);
    blah.append("0");
}

void MainWindow::on_btnDot_clicked()
{
    text->setText(text->text() + ".");
    ui->listDisplay->addItem(text);
    blah.append(".");
}

void MainWindow::on_btnLeftPar_clicked()
{
    text->setText(text->text() + "(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("("));
}

void MainWindow::on_btnRightPar_clicked()
{
    text->setText(text->text() + ")");
    ui->listDisplay->addItem(text);
     blah.append(MainWindow::addBrackets(")"));
}

void MainWindow::on_btnPow_clicked()
{
    text->setText(text->text() + "^");
    ui->listDisplay->addItem(text);
     blah.append(MainWindow::addBrackets("^"));
}

void MainWindow::on_btnDivide_clicked()
{
    text->setText(text->text() + "/");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("/"));
}

void MainWindow::on_btnMultiply_clicked()
{
    text->setText(text->text() + "*");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("*"));
}

void MainWindow::on_btnMinus_clicked()
{
    text->setText(text->text() + "-");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("-"));
}

void MainWindow::on_btnPlus_clicked()
{
    text->setText(text->text() + "+");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("+"));
}

void MainWindow::on_btnLog_clicked()
{
    text->setText(text->text() + "log(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("log("));
}

void MainWindow::on_btnLn_clicked()
{
    text->setText(text->text() + "ln(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("ln("));
}

void MainWindow::on_btnE_clicked()
{
    text->setText(text->text() + "e");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("e"));
}

void MainWindow::on_btnPi_clicked()
{
    text->setText(text->text() + "pi");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("pi"));
}

void MainWindow::on_btnFact_clicked()
{
    text->setText(text->text() + "!");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("!"));
}

void MainWindow::on_btnSin_clicked()
{
    text->setText(text->text() + "sin(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("sin("));
}

void MainWindow::on_btnCos_clicked()
{
    text->setText(text->text() + "cos(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("cos("));
}

void MainWindow::on_btnTan_clicked()
{
    text->setText(text->text() + "tan(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("tan("));
}

void MainWindow::on_btnnCm_clicked()
{
    text->setText(text->text() + "C");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("C"));
}

void MainWindow::on_btnArcSin_clicked()
{
    text->setText(text->text() + "arcsin(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("arcsin("));
}

void MainWindow::on_btnArcCos_clicked()
{
    text->setText(text->text() + "arccos(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("arccos("));
}

void MainWindow::on_btnArcTan_clicked()
{
    text->setText(text->text() + "arctan(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("arctan("));
}

void MainWindow::on_btnnPm_clicked()
{
    text->setText(text->text() + "P");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("P"));
}

void MainWindow::on_btnSinh_clicked()
{
    text->setText(text->text() + "sinh(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("sinh("));
}

void MainWindow::on_btnCosh_clicked()
{
    text->setText(text->text() + "cosh(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("cosh("));
}

void MainWindow::on_btnTanh_clicked()
{
    text->setText(text->text() + "tanh(");
    ui->listDisplay->addItem(text);
    blah.append(MainWindow::addBrackets("tanh("));
}

void MainWindow::on_btnClear_clicked()
{
    text->setText("");
    ui->listDisplay->addItem(text);
}

//End of Repetitive Button Code

QString MainWindow::addBrackets(QString symbol)
{
   QString newText = symbol;
   newText.insert(0, "[");
   newText.insert(symbol.length(), "]");
   return newText;
}

void MainWindow::on_btnEval_clicked()
{
    try
    {
        equation->setText(text->text());
        QMessageBox::information(this, "New String:", blah);
        value = StringCalculator::calculateCharVector(StringCalculator::convertToVector(blah));
        QString result = QString::number(value);
        items.append(equation->text());
        items.append(result);
        ui->listDisplay->addItems(items);
        /*Since I was unable to get the loop to work to make sure it didn't print multiple times,
          I had to clear the list right after it prints. It doesn't work when just equation is
          printed, but it works with the list for whatever reason.
          The good news is that the QListWidget should theoretically still hold all of the values.*/
        items.clear();
        text->setText("");
        ui->listDisplay->setCurrentRow(ui->listDisplay->currentRow() + 2);
        ui->listDisplay->takeItem(ui->listDisplay->row(text));
        ui->listDisplay->item(ui->listDisplay->count() - 1)->setSelected(true);
        ui->listDisplay->setFocus();
    }
    catch(int e)
    {
        switch (e)
        {
            case 100:
                QMessageBox::information(this, "Error", "Syntax Error");
            break;
            case 101:
                QMessageBox::information(this, "Error", "The input ended in an operation.");
            break;
            case 102:
                QMessageBox::information(this, "Error", "A parenthesis is missing.");
            break;
            case 103:
                QMessageBox::information(this, "Error", "While this may or may not be acceptable in mathematical notation,\n"
                                                        "this calculator does not support this.");
            break;
            case 200:
                QMessageBox::information(this, "Error", "Unfortunately, the calculator did not know how to handle this calculation.");
            break;
            case 201:
                QMessageBox::information(this, "Error", "You inputed something the calculator could not expect. Well done!");
            break;
            default:
                QMessageBox::information(this, "Wow", "Look, we have an error for everything we could resonably expect and even unexpect.\n"
                                                      "You managed to do something beyond the unexpected. You're one of those people who thinks"
                                                      "that nothing fits within a binary. We expected a 0 or a 1, and you gave us a 2.\n"
                                                      "Just props to you man.");
            break;
        }
    }
}

void MainWindow::on_btnAnswer_clicked()
{
    if (ui->listDisplay->count() > 1)
    {
        text->setText(text->text() + QString::number(value));
        ui->listDisplay->addItem(text);
    }
    else
    {
        QMessageBox::information(this, "No History", "Can not append history to current calculation. No history exists.");
    }
}

void MainWindow::on_btnDelete_clicked()
{
    QString newText = text->text();
    newText.chop(1);
    text->setText(newText);
    ui->listDisplay->addItem(text);
}

//Makes the history finite
void MainWindow::on_listDisplay_currentRowChanged(int currentRow)
{
    //TODO: Check to make sure currentRow works
    if (currentRow > 50)
    {
        for (int i = 0; i <= 10; i++)
        {
            ui->listDisplay->takeItem(i);
        }
    }
}

void MainWindow::on_listDisplay_doubleClicked(const QModelIndex &index)
{
    QMessageBox::information(this, "It worked.", "Yay! :D");
    text->setText(text->text() + ui->listDisplay->item(index.row())->text());
    ui->listDisplay->addItem(text);
}

void MainWindow::on_btnSci_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_btnBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_btnSciEqual_clicked()
{
    ui->btnAnswer->click();
}

