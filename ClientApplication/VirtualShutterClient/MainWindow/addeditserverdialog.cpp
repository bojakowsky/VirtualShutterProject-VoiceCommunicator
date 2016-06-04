#include "MainWindow/addeditserverdialog.h"
#include "ui_addeditserverdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

AddEditServerDialog::AddEditServerDialog(QWidget *parent, Server *server) :
    QDialog(parent),
    ui(new Ui::AddEditServerDialog)
{
    ui->setupUi(this);
    if (server != NULL){
        QString name = QString::fromStdString(server->getName());
        QString port = QString::fromStdString(std::to_string(server->getPort()));
        QHostAddress address = server->getIp();
        std::vector<std::string> ip = Helper::split(address.toString().toStdString(), '.');
        ui->serverNameLineEdit->setText(name);
        ui->portLineEdit->setText(port);
        ui->octet1->setText(ip.at(0).c_str());
        ui->octet1_2->setText(ip.at(1).c_str());
        ui->octet1_3->setText(ip.at(2).c_str());
        ui->octet1_4->setText(ip.at(3).c_str());
    }
}

AddEditServerDialog::~AddEditServerDialog()
{
    delete ui;
}

Server AddEditServerDialog::createServer()
{
    Server server;
    try {
        wasThereValidationError = false;
        FieldValidator validator;

        std::string name = validator.stringIsEmptyChecker("Server name", ui->serverNameLineEdit->text().toStdString());
        server.setName(name);

        int octet1 = validator.intFieldChecker("IP", ui->octet1->text().toStdString(), 0, 255);
        int octet2 = validator.intFieldChecker("IP", ui->octet1_2->text().toStdString(), 0, 255);
        int octet3 = validator.intFieldChecker("IP", ui->octet1_3->text().toStdString(), 0, 255);
        int octet4 = validator.intFieldChecker("IP", ui->octet1_4->text().toStdString(), 0, 255);
        QString stringAddress = QString::number(octet1) + "." + QString::number(octet2) + "." + QString::number(octet3) + "." + QString::number(octet4);
        QHostAddress addr(stringAddress);
        server.setIp(addr);

        int port = validator.intFieldChecker("Port", ui->portLineEdit->text().toStdString(), 1, 65535);
        server.setPort(port);

        std::string password = ui->passwordLineEdit->text().toStdString();
        server.setPassword(password);

    }
    catch (const std::exception& ex){
        if (this->error == NULL)
            this->error = new InformDialog(ex.what());
        else {
            delete this->error;
            this->error = new InformDialog(ex.what());
        }
        error->show();
        wasThereValidationError = true;
    }

    return server;
}

void AddEditServerDialog::accept(){
    //overloading accept
}

Server AddEditServerDialog::getDialogResult() const
{
    return dialogResult;
}

void AddEditServerDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if (button == ui->buttonBox->button(QDialogButtonBox::Ok)){
        dialogResult = createServer();
        if (!wasThereValidationError)
            QDialog::accept();
    }
    else QDialog::reject();
}
