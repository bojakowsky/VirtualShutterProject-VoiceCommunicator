#include "addchanneldialog.h"
#include "ui_addchanneldialog.h"

addChannelDialog::addChannelDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addChannelDialog)
{
    ui->setupUi(this);
}

addChannelDialog::~addChannelDialog()
{
    delete ui;
}
