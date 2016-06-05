#include "connectionmanager.h"

ConnectionManager::ConnectionManager(UserManager *userManager, ChannelsManager *channelManager)
{
    this->userManager = userManager;
    this->channelManager = channelManager;

    this->server = new TCPServer(channelManager, userManager);
    this->broadcast = new UDPBroadcast(channelManager, userManager);

}

ConnectionManager::~ConnectionManager()
{
    delete server;
    delete broadcast;
}

void ConnectionManager::setAddress(const QHostAddress &value)
{
    address = value;
}

void ConnectionManager::setPort(int value)
{
    port = value;
}

void ConnectionManager::Run()
{
    this->server->StartServer(this->address, this->port);
    this->broadcast->StartBroadcast(this->address, this->port);
}

void ConnectionManager::Stop()
{
    this->broadcast->StopBroadcast();
    this->userManager->users.clear();
    this->userManager->decUsersActual();
}
