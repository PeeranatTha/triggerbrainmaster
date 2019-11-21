#include "mainwindow.h"
#include "myserialport.h"
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    MySerialPort iSerialPort;
    iSerialPort.openSerialPort();

    return a.exec();
}

