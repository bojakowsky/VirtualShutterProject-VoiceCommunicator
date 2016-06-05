#ifndef CHANNELDIALOG_H
#define CHANNELDIALOG_H

#include <QDialog>
#include "logic/model/channel.h"
#include "logic/fieldvalidator.h"
#include "informdialog.h"
#include <stdio.h>
#include <string>
#include <QAbstractButton>
#include <QPushButton>
#include "logic/manager/channelsmanager.h"
namespace Ui {
class ChannelDialog;
}

class ChannelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChannelDialog(QWidget *parent = 0, Channel *ch = 0);
    ~ChannelDialog();

    Channel getDialogResult() const;

private slots:

    void on_buttonBox_clicked(QAbstractButton *button);
    void accept();

private:
    Ui::ChannelDialog *ui = 0;
    InformDialog *error = 0;
    Channel createChannel();
    Channel editChannel();

    bool wasThereAnyError = false;
    Channel dialogResult;
};

#endif // CHANNELDIALOG_H
