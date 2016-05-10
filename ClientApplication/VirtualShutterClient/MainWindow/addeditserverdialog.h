#ifndef ADDEDITSERVERDIALOG_H
#define ADDEDITSERVERDIALOG_H

#include <QDialog>

namespace Ui {
class AddEditServerDialog;
}

class AddEditServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditServerDialog(QWidget *parent = 0);
    ~AddEditServerDialog();

private:
    Ui::AddEditServerDialog *ui;
};

#endif // ADDEDITSERVERDIALOG_H
