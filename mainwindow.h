#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Calculator.h"
#include "ScientificCalculator.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    // GUI Main Window class declaration

    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_addBtn_clicked();

        void on_subtractBtn_clicked();

        void on_divideBtn_clicked();

        void on_multiplyBtn_clicked();

        void updateHistoryDisplay();

        void on_clearHistoryBtn_clicked();

        void on_sqrRootBtn_clicked();

        void on_powerBtn_clicked();

    private:
        Ui::MainWindow *ui;
        Calculator calculator;
        ScientificCalculator scientificCalculator;
};
#endif // MAINWINDOW_H
