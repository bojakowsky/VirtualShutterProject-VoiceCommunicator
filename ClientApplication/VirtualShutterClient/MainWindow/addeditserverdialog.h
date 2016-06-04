#ifndef ADDEDITSERVERDIALOG_H
#define ADDEDITSERVERDIALOG_H

#include <QDialog>
#include "logic/fieldvalidator.h"
#include "logic/model/server.h"
#include "informdialog.h"
#include <QAbstractButton>
#include <QPushButton>
#include "logic/helper.h"
namespace Ui {
class AddEditServerDialog;
}

class AddEditServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditServerDialog(QWidget *parent = 0, Server *server = 0);
    ~AddEditServerDialog();

    Server createServer();

    Server getDialogResult() const;

private slots:
    void accept();
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::AddEditServerDialog *ui;
    InformDialog *error = 0;
    Server dialogResult;
    bool wasThereValidationError;
};

#endif // ADDEDITSERVERDIALOG_H
