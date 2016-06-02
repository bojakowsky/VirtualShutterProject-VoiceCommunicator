#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, ApplicationManager *appManager) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    manager(appManager)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addServerButton_clicked()
{
    addEditServerDialog = new AddEditServerDialog(this);
    addEditServerDialog ->setWindowTitle("Add");
    addEditServerDialog->show();
}

void MainWindow::on_removeServerButton_clicked()
{
  //  ui->serverListWidget->addItem("lo");
}

void MainWindow::on_editServerButton_clicked()
{
    addEditServerDialog = new AddEditServerDialog(this);
    addEditServerDialog ->setWindowTitle("Edit");
    addEditServerDialog->show();
}
