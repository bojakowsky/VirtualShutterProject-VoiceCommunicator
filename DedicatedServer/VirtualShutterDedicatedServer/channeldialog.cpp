#include "channeldialog.h"
#include "ui_channeldialog.h"

ChannelDialog::ChannelDialog(QWidget *parent, Channel *ch) :
    QDialog(parent),
    ui(new Ui::ChannelDialog)
{
    ui->setupUi(this);
    if (ch != NULL){
        QString name = QString::fromStdString(ch->getName());
        QString number = QString::fromStdString(std::to_string(ch->getNumberOfUsersAllowed()));
        QString password = QString::fromStdString(ch->getPassword());
        ui->channelNameEdit->setText(name);
        ui->maxUsersEdit->setText(number);
        ui->passwordEdit->setText(password);
    }
}

ChannelDialog::~ChannelDialog()
{
    delete ui;
}

Channel ChannelDialog::createChannel()
{
    Channel channel;

    try{
        wasThereAnyError = false;

        FieldValidator validator;
        channel.setName(validator.stringIsEmptyChecker("Channel name", ui->channelNameEdit->text().toStdString()));
        channel.setNumberOfUsersAllowed(validator.intFieldChecker("Max users", ui->maxUsersEdit->text().toStdString(), 2, 16));
        channel.setPassword(ui->passwordEdit->text().toStdString());
    }
    catch(const std::exception& ex){
        if (this->error == NULL)
            this->error = new InformDialog(ex.what());
        else {
            delete this->error;
            this->error = new InformDialog(ex.what());
        }
        error->show();
        wasThereAnyError = true;
    }
    catch(...){
        qDebug("Something went really bad.");
        throw;
    }

    return channel;
}

Channel ChannelDialog::editChannel()
{
    return this->createChannel();
}

Channel ChannelDialog::getDialogResult() const
{
    return dialogResult;
}

void ChannelDialog::accept(){
    //overriding accept
}

void ChannelDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button == ui->buttonBox->button(QDialogButtonBox::Ok) ){
        dialogResult = createChannel();
        if( !wasThereAnyError ){
            QDialog::accept();
        }
    }
}
