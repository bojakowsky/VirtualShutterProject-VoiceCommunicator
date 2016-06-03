#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H
#include <QTcpServer>
#include <QUdpSocket>
#include "logic/connection/tcpserver.h"
#include "logic/connection/udpbroadcast.h"
#include "logic/manager/usermanager.h"
#include "logic/manager/channelsmanager.h"

class ConnectionManager
{
public:
    ConnectionManager(UserManager *userManager, ChannelsManager *channelManager);
    ~ConnectionManager();
private:
    UDPBroadcast* broadcast;
    TCPServer* server;

    UserManager *userManager;
    ChannelsManager *channelManager;
};

#endif // CONNECTIONMANAGER_H
