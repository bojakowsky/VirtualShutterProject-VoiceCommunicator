#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "applicationmanager.h"
#include "MainWindow/addeditserverdialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, ApplicationManager *appManager = 0);

    ~MainWindow();

private slots:
    void on_addServerButton_clicked();

    void on_removeServerButton_clicked();

    void on_editServerButton_clicked();

private:
    Ui::MainWindow *ui;
    AddEditServerDialog *addEditServerDialog;

    ApplicationManager *manager;
};

#endif // MAINWINDOW_H
