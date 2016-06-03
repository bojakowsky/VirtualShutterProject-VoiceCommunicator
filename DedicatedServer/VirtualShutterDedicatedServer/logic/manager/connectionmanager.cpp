#include "connectionmanager.h"

ConnectionManager::ConnectionManager(UserManager *userManager, ChannelsManager *channelManager)
{
    this->userManager = userManager;
    this->channelManager = channelManager;

    this->server = new TCPServer(channelManager, userManager);
    this->broadcast = new UDPBroadcast(channelManager, userManager);

    this->server->StartServer();
    this->broadcast->broadcastSend();
}

ConnectionManager::~ConnectionManager()
{
    delete server;
    delete broadcast;
}
