#include "informdialog.h"
#include "ui_informdialog.h"

InformDialog::InformDialog(std::string informMessage, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InformDialog)
{
    ui->setupUi(this);

    QString qInformMessage = QString::fromStdString(informMessage);
    ui->informMessage->setText(qInformMessage);
}

InformDialog::~InformDialog()
{
    qDebug("Dialog closing");
    delete ui;
}

void InformDialog::on_closeButton_clicked()
{
    QDialog::close();
    QDialog::destroy(true, true);
}

