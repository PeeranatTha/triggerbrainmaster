#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QMainWindow view;
    view.resize(1366, 768);
    view.showFullScreen();
    view.show();
    //addPage(new UIClass);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

UIClass::UIClass(QWidget *parent)
    : QWizardPage(parent)
{

}
