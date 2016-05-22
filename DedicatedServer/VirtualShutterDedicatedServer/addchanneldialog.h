#ifndef ADDCHANNELDIALOG_H
#define ADDCHANNELDIALOG_H

#include <QDialog>

namespace Ui {
class addChannelDialog;
}

class addChannelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addChannelDialog(QWidget *parent = 0);
    ~addChannelDialog();

private:
    Ui::addChannelDialog *ui;
};

#endif // ADDCHANNELDIALOG_H
