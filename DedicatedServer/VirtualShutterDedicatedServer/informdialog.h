#ifndef INFORMDIALOG_H
#define INFORMDIALOG_H

#include <QDialog>
#include <stdio.h>

namespace Ui {
class InformDialog;
}

class InformDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InformDialog(std::string informMessage, QWidget *parent = 0);

    ~InformDialog();

private slots:
    void on_closeButton_clicked();


private:
    Ui::InformDialog *ui = 0;

};

#endif // INFORMDIALOG_H
