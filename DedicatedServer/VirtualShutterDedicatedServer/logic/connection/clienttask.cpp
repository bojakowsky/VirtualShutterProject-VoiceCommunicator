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
    std::string structure = channelsManager->BuildChannelStructure(userManager);
    emit Result(structure);
}
