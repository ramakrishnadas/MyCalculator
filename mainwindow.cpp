#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addBtn_clicked()
{
    // Take the numbers from the user inputs, perform the add operation, display the result, and update the History display in the GUI

    float num1 = ui->txtNumber1->text().toFloat();
    float num2 = ui->txtNumber2->text().toFloat();

    float result = calculator.add(num1, num2);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}


void MainWindow::on_subtractBtn_clicked()
{
    // Take the numbers from the user inputs, perform the subtract operation, display the result, and update the History display in the GUI

    float num1 = ui->txtNumber1->text().toFloat();
    float num2 = ui->txtNumber2->text().toFloat();

    float result = calculator.subtract(num1, num2);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}


void MainWindow::on_divideBtn_clicked()
{
    // Take the numbers from the user inputs, perform the divide operation, display the result, and update the History display in the GUI

    float num1 = ui->txtNumber1->text().toFloat();
    float num2 = ui->txtNumber2->text().toFloat();

    float result = calculator.divide(num1, num2);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}


void MainWindow::on_multiplyBtn_clicked()
{
    // Take the numbers from the user inputs, perform the multiply operation, display the result, and update the History display in the GUI

    float num1 = ui->txtNumber1->text().toFloat();
    float num2 = ui->txtNumber2->text().toFloat();

    float result = calculator.multiply(num1, num2);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}

void MainWindow::on_clearHistoryBtn_clicked()
{
    // Erase the calculation history from both the Calculator and the ScientificCalculator classes, and update the History display in the GUI

    calculator.clearHistory();
    scientificCalculator.clearHistory();

    updateHistoryDisplay();
}

void MainWindow::updateHistoryDisplay() {
    // Update the calculation history of both the Calculator and the ScientificCalculator classes, and display the records in the History display in the GUI

    const auto& historyRecords = calculator.getHistory().get();
    const auto& otherHistoryRecords = scientificCalculator.getHistory().get();

    ui->historyListWidget->clear();

    for (const auto& record : historyRecords) {
        ui->historyListWidget->addItem(QString::fromStdString(record));
    }

    for (const auto& record : otherHistoryRecords) {
        ui->historyListWidget->addItem(QString::fromStdString(record));
    }
}

void MainWindow::on_sqrRootBtn_clicked()
{
    // Take the number from the user inputs, perform the square root operation, display the result, and update the History display in the GUI

    float num1 = ui->txtNumber1->text().toFloat();

    float result = scientificCalculator.calculateSqrRoot(num1);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}


void MainWindow::on_powerBtn_clicked()
{
    // Take the numbers from the user inputs, perform the power operation, display the result, and update the History display in the GUI

    float base = ui->txtNumber1->text().toFloat();
    float exponent = ui->txtNumber2->text().toFloat();

    float result = scientificCalculator.calculatePower(base, exponent);

    ui->txtResult->setText(QString::number(result));

    updateHistoryDisplay();
}

