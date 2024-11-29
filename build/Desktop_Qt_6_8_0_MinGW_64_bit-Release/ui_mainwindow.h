/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtNumber1;
    QLineEdit *txtNumber2;
    QLineEdit *txtResult;
    QPushButton *addBtn;
    QPushButton *subtractBtn;
    QPushButton *divideBtn;
    QPushButton *multiplyBtn;
    QListWidget *historyListWidget;
    QLabel *label_4;
    QPushButton *clearHistoryBtn;
    QPushButton *sqrRootBtn;
    QPushButton *powerBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(688, 669);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 50, 81, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 100, 81, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 310, 51, 21));
        txtNumber1 = new QLineEdit(centralwidget);
        txtNumber1->setObjectName("txtNumber1");
        txtNumber1->setGeometry(QRect(240, 50, 221, 31));
        txtNumber2 = new QLineEdit(centralwidget);
        txtNumber2->setObjectName("txtNumber2");
        txtNumber2->setGeometry(QRect(240, 100, 221, 31));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(230, 310, 221, 31));
        txtResult->setReadOnly(true);
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(70, 160, 101, 51));
        subtractBtn = new QPushButton(centralwidget);
        subtractBtn->setObjectName("subtractBtn");
        subtractBtn->setGeometry(QRect(200, 160, 101, 51));
        divideBtn = new QPushButton(centralwidget);
        divideBtn->setObjectName("divideBtn");
        divideBtn->setGeometry(QRect(340, 160, 101, 51));
        multiplyBtn = new QPushButton(centralwidget);
        multiplyBtn->setObjectName("multiplyBtn");
        multiplyBtn->setGeometry(QRect(480, 160, 101, 51));
        historyListWidget = new QListWidget(centralwidget);
        historyListWidget->setObjectName("historyListWidget");
        historyListWidget->setGeometry(QRect(125, 411, 421, 171));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 380, 141, 21));
        clearHistoryBtn = new QPushButton(centralwidget);
        clearHistoryBtn->setObjectName("clearHistoryBtn");
        clearHistoryBtn->setGeometry(QRect(440, 600, 101, 31));
        sqrRootBtn = new QPushButton(centralwidget);
        sqrRootBtn->setObjectName("sqrRootBtn");
        sqrRootBtn->setGeometry(QRect(180, 230, 131, 51));
        powerBtn = new QPushButton(centralwidget);
        powerBtn->setObjectName("powerBtn");
        powerBtn->setGeometry(QRect(330, 230, 131, 51));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MyCalculator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subtractBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divideBtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiplyBtn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Calculation History:", nullptr));
        clearHistoryBtn->setText(QCoreApplication::translate("MainWindow", "Clear history", nullptr));
        sqrRootBtn->setText(QCoreApplication::translate("MainWindow", "\342\210\232 (square root)", nullptr));
        powerBtn->setText(QCoreApplication::translate("MainWindow", "^ (power)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
