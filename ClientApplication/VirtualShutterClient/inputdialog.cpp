#include "inputdialog.h"
#include "ui_inputdialog.h"

InputDialog::InputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputDialog)
{
    ui->setupUi(this);
}

InputDialog::~InputDialog()
{
    delete ui;
}

void InputDialog::on_pushButton_clicked()
{
    setInput(ui->lineEdit->text());
    QDialog::accept();
}

QString InputDialog::getInput() const
{
    return input;
}

void InputDialog::setInput(const QString &value)
{
    input = value;
}
