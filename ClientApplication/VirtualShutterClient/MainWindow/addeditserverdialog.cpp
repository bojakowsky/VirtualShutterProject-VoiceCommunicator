#include "MainWindow/addeditserverdialog.h"
#include "ui_addeditserverdialog.h"

AddEditServerDialog::AddEditServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEditServerDialog)
{
    ui->setupUi(this);
}

AddEditServerDialog::~AddEditServerDialog()
{
    delete ui;
}
