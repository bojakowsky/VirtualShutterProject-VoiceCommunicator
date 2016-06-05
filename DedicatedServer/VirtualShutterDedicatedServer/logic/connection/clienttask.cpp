#include "clienttask.h"

ClientTask::ClientTask()
{

}

void ClientTask::setManagers(ChannelsManager *channelsManager, UserManager *userManager)
{
    this->channelsManager = channelsManager;
    this->userManager = userManager;
}

void ClientTask::run()
{
    QString structure = QString::fromStdString(channelsManager->BuildChannelStructure(userManager));
    emit Result(structure);
}
