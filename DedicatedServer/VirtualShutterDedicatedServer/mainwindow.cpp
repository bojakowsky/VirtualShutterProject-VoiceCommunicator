#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logic/fieldvalidator.h"
#include <QCoreApplication>
#include <regex>


MainWindow::MainWindow(QWidget *parent, ServerManager *serverManager) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    manager(serverManager)
{
    ui->setupUi(this);
    connect(ui->serverRunBtn, SIGNAL(released()), this, SLOT(handleSwitch()));
    connect(ui->showUsersConfigBtn, SIGNAL(released()), this, SLOT(showUsersConfig()));
    connect(ui->showChannelsConfigBtn, SIGNAL(released()), this, SLOT(showChannelsConfig()));
    connect(ui->showGeneralConfigBtn, SIGNAL(released()), this, SLOT(showGeneralConfig()));
    connect(ui->showActivitiesConfigBtn, SIGNAL(released()), this, SLOT(showActivitiesConfig()));
    connect(ui->showEventsConfigBtn, SIGNAL(released()), this, SLOT(showEventsConfig()));
    connect(ui->addChannelBtn, SIGNAL(released()), this, SLOT(addChannelShowDialog()));

    ui->usersWidget->hide();
    ui->channelsWidget->hide();
    ui->eventsWidget->hide();
    ui->activitiesWidget->hide();

    //channelListViewModel = new QStringListModel(this);
    //ui->channelsList->setModel(channelListViewModel);
    //connect(ui->channelsList, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(doNothing(const QModelIndex&)));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateUserList()));
    timer->start(1000);
}

//void doNothing(const QModelIndex &){
//    qDebug("CLICKED");
//}



void setAsActive(QPushButton *btn, QIcon whiteicon, QWidget *widget){
  //'background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt "Cantarell";'
    btn->setStyleSheet("background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt;");
    btn->setIcon(whiteicon);
    widget->show();
}

void setAsInactive(QPushButton *btn, QIcon greyicon){
  //'background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt "Cantarell";'
    btn->setStyleSheet("color: rgb(130, 131, 131);\nfont: 12pt;");
    btn->setIcon(greyicon);
}

void MainWindow::hideAll(){
    ui->activitiesWidget->hide();
    ui->channelsWidget->hide();
    ui->usersWidget->hide();
    ui->generalWidget->hide();
    ui->eventsWidget->hide();

    setAsInactive(ui->showActivitiesConfigBtn, QIcon(":/res/server-icon-06.png"));
    setAsInactive(ui->showGeneralConfigBtn, QIcon(":/res/server-icon-02.png"));
    setAsInactive(ui->showEventsConfigBtn, QIcon(":/res/server-icon-03.png"));
    setAsInactive(ui->showChannelsConfigBtn, QIcon(":/res/server-icon-10.png"));
    setAsInactive(ui->showUsersConfigBtn, QIcon(":/res/server-icon-08.png"));
}

void MainWindow::showActivitiesConfig()
{
    hideAll();
    setAsActive(ui->showActivitiesConfigBtn, QIcon(":/res/server-icon-05.png"), ui->activitiesWidget);
}

void MainWindow::showEventsConfig()
{
    hideAll();
    setAsActive(ui->showEventsConfigBtn, QIcon(":/res/server-icon-04.png"), ui->eventsWidget);
}

void MainWindow::showChannelsConfig()
{

    hideAll();
    setAsActive(ui->showChannelsConfigBtn, QIcon(":/res/server-icon-09.png"), ui->channelsWidget);
}

void MainWindow::showGeneralConfig()
{

    hideAll();
    setAsActive(ui->showGeneralConfigBtn, QIcon(":/res/server-icon-01.png"), ui->generalWidget);
}

void MainWindow::showUsersConfig()
{

    hideAll();
    setAsActive(ui->showUsersConfigBtn, QIcon(":/res/server-icon-07.png"), ui->usersWidget);
}



void MainWindow::handleSwitch()
{
    if (manager->getIsRunning()){
        ui->serverRunBtn->setIcon(QIcon(":/res/switch-off.png"));
        manager->Stop();

    }
    else {
        try{
            FieldValidator validator;
            std::string serverName = validator.stringIsEmptyChecker("Server name", ui->serverNameEdit->text().toStdString());

            QString addressStr = ui->ipEdit->text();
            QHostAddress address = validator.ipChecker(addressStr);

            std::string portStr = ui->portEdit->text().toStdString();
            int port = validator.intFieldChecker("Port", portStr, 2, 65535);

            std::string limitStr = ui->limitEdit->text().toStdString();
            int limit = validator.intFieldChecker("Users limit", limitStr, 2, 32);

            std::string password = ui->passwordEdit->text().toStdString();

            manager->Configure(address, port, serverName, password, limit);
            manager->Run();
            ui->serverRunBtn->setIcon(QIcon(":/res/switch-on.png"));
        }
        catch(const std::exception& ex){
            if (this->error == NULL)
                this->error = new InformDialog(ex.what(), this);
            else {
                delete this->error;
                this->error = new InformDialog(ex.what(), this);
            }
            error->show();
        }
        catch(...){
            qDebug("Something went really bad.");
            throw;
        }
    }
}

void MainWindow::OpenSingleChannelDialog(Channel *ch){
    if (this->channelDialog == NULL)
        this->channelDialog = new ChannelDialog(this, ch);
    else {
        delete this->channelDialog;
        this->channelDialog = new ChannelDialog(this, ch);
    }
    channelDialog->show();
}

void MainWindow::OpenSingleChannelDialog(){
    if (this->channelDialog == NULL)
        this->channelDialog = new ChannelDialog(this);
    else {
        delete this->channelDialog;
        this->channelDialog = new ChannelDialog(this);
    }
    channelDialog->show();
}

void MainWindow::updateUserList()
{
    int row = ui->usersList->currentRow();
    ui->usersList->clear();
    for (int i = 0 ; i < manager->getUserManager()->users.size(); ++i){
        User user = manager->getUserManager()->users.at(i);
        std::string data = std::string(user.getUserName()) + "  " +
            std::string(user.getIp().toString().toStdString()) + ":" +
            std::to_string(user.getPort()) + "  " +
            std::to_string(user.getIsBanned());
        ui->usersList->addItem(data.c_str());
    }
    ui->usersList->setCurrentRow(row);

}
void MainWindow::addChannelShowDialog()
{
    this->OpenSingleChannelDialog();
    if(channelDialog->exec())
    {
        Channel ch = channelDialog->getDialogResult();
        manager->getChannelsManager()->Add(ch);

        //channelListViewModel->insertRow(channelListViewModel->rowCount());
        //QModelIndex index = channelListViewModel->index(channelListViewModel->rowCount()-1);

        //For reference
        //std::string str;
        //const char * c = str.c_str();
        std::string data = std::string(ch.getName()) + ", " + std::string(std::to_string(ch.getNumberOfUsersAllowed()));
        //channelListViewModel->setData(index, data.c_str());
        ui->channelsList->addItem(data.c_str());

    }
}

void MainWindow::on_editChannelBtn_clicked()
{
    QModelIndexList indexes = ui->channelsList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        QModelIndex index = indexes.first();
        //qDebug(std::to_string(index.row()).c_str());
        Channel ch = manager->getChannelsManager()->Get(index.row());
        this->OpenSingleChannelDialog(&ch);
        if(channelDialog->exec())
        {
            Channel ch = channelDialog->getDialogResult();
            manager->getChannelsManager()->Update(index.row(), ch);
            std::string data = std::string(ch.getName()) + ", " + std::string(std::to_string(ch.getNumberOfUsersAllowed()));
            QListWidgetItem *item = ui->channelsList->item(index.row());
            item->setText(data.c_str());
        }
    }

}

void MainWindow::on_removeChannelBtn_clicked()
{
    QModelIndexList indexes = ui->channelsList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        QModelIndex index = indexes.first();
        manager->getChannelsManager()->Remove(index.row());
        qDeleteAll(ui->channelsList->selectedItems());
        //QListWidgetItem *item = ui->channelsList->item(index.row());
        //ui->channelsList->removeItemWidget(item);
    }

}

void MainWindow::setManager(ServerManager *value)
{
    manager = value;
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_kickButton_clicked()
{
    QModelIndexList indexes = ui->usersList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        QModelIndex index = indexes.first();
        manager->getUserManager()->Kick(index.row());
        qDeleteAll(ui->usersList->selectedItems());
    }
}

void MainWindow::on_blockButton_clicked()
{
    QModelIndexList indexes = ui->usersList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        QModelIndex index = indexes.first();
        manager->getUserManager()->Ban(index.row());
        //qDeleteAll(ui->usersList->selectedItems());
    }
}

void MainWindow::on_unbanButton_clicked()
{
    QModelIndexList indexes = ui->usersList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        QModelIndex index = indexes.first();
        manager->getUserManager()->Unban(index.row());
    }
}

void MainWindow::on_moveButton_clicked()
{

}
