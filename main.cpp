#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // Starts the program and displays the GUI
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
