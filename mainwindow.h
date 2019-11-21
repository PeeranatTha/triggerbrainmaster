#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QScrollBar>
#include <QWizard>
#include <QWidget>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

class UIClass : public QWizardPage
{
    Q_OBJECT

public:
    UIClass(QWidget *parent = 0);

private:

};

#endif // MAINWINDOW_H
