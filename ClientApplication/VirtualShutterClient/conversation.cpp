#include "conversation.h"
#include "ui_conversation.h"

Conversation::Conversation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Conversation)
{
    ui->setupUi(this);
    listTimer = new QTimer(this);
    connect(listTimer, SIGNAL(timeout()), this, SLOT(refreshList()));
    listTimer->start(1700);
}

Conversation::~Conversation()
{
    qDebug("Fin");
    listTimer->stop();
    ui->conversationList->clear();
    manager->getTcpClient()->clear();
    delete listTimer;
    delete ui;


}

void Conversation::on_muteButton_clicked()
{
    if (manager->getUdpSender()->getIsMicMuted()){
        ui->muteButton->setStyleSheet("background-color: rgb(130, 131, 131);\nselection-background-color: rgb(0, 156, 134);\ncolor: rgb(255, 255, 255);\nborder-color: rgba(255, 255, 255, 0);");
        manager->getUdpSender()->setIsMicMuted(false);
    }
    else {
        ui->muteButton->setStyleSheet("background-color: rgb(223, 131, 131);\nselection-background-color: rgb(0, 156, 134);\ncolor: rgb(255, 255, 255);\nborder-color: rgba(255, 255, 255, 0);");
        manager->getUdpSender()->setIsMicMuted(true);
    }
}

void Conversation::on_disconnectButton_clicked()
{
    manager->getTcpClient()->Disconnect();
    manager->getUdpSender()->Disconnect();
    manager->getUdpPlayer()->Disconnect();

    parentWidget()->show();
    delete this;


}

void Conversation::refreshList()
{
    qDebug("Refressh");
    int row = ui->conversationList->currentRow();
    ui->conversationList->clear();
    std::vector<std::string> data = manager->getTcpClient()->getConversationData();
    //starting from 1, cause 0 is empty row
    for (int i = 1 ; i < data.size(); ++i){
        ui->conversationList->addItem(data.at(i).c_str());
    }
    ui->conversationList->setCurrentRow(row);

}

void Conversation::setManager(ApplicationManager *value)
{
    manager = value;
}

void Conversation::Live(Server server, std::string nickname)
{
    manager->getTcpClient()->setList(ui->logList);
    manager->getTcpClient()->Connect(server.getIp(), server.getPort(), nickname, server.getPassword());
    manager->getUdpSender()->Connect(server.getIp(), server.getPort());
    manager->getUdpPlayer()->Listen(manager->getUdpSender()->getLocalAddress(), server.getPort()-1);

    std::string infoLabel = server.getName() + " - " + server.getIp().toString().toStdString() + ":" + std::to_string(server.getPort());
    ui->serverInfoLabel->setText(QString::fromStdString(infoLabel.c_str()));

    std::string helloNickname = "Hello, " + nickname;
    ui->myUsernameLabel->setText(QString::fromStdString(helloNickname.c_str()));
}

void Conversation::on_moveButton_clicked()
{
    QModelIndexList indexes =  ui->conversationList->selectionModel()->selectedIndexes();
    if (indexes.length() == 1){
        int i = indexes.first().row();
        std::string stringRow = ui->conversationList->item(i)->text().toStdString();
        std::string channelName = Helper::split(stringRow, ' ').at(0);
        if (channelName[0] == '*'){
            channelName = channelName.substr(1, channelName.length());
            if (input == NULL)
                input = new InputDialog(this);
            else {
                delete input;
                input = new InputDialog(this);
            }
            input->show();
            if (input->exec()){
                manager->getTcpClient()->move(channelName, input->getInput().toStdString());
            }
        }
        else {
            manager->getTcpClient()->move(channelName);
        }
    }


}

void Conversation::on_muteUserButton_clicked()
{
    if (manager->getUdpPlayer()->getIsPlayerMuted()){
        ui->muteUserButton->setStyleSheet("background-color: rgb(130, 131, 131);\nselection-background-color: rgb(0, 156, 134);\ncolor: rgb(255, 255, 255);\nborder-color: rgba(255, 255, 255, 0);");
        manager->getUdpPlayer()->setIsPlayerMuted(false);
    }
    else {
        ui->muteUserButton->setStyleSheet("background-color: rgb(223, 131, 131);\nselection-background-color: rgb(0, 156, 134);\ncolor: rgb(255, 255, 255);\nborder-color: rgba(255, 255, 255, 0);");
        manager->getUdpPlayer()->setIsPlayerMuted(true);
    }
}
