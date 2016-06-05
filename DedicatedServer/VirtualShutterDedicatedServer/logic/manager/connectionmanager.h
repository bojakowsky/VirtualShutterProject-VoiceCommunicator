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

    void setAddress(const QHostAddress &value);
    void setPort(int value);

    void Run();

private:
    UDPBroadcast* broadcast = 0;
    TCPServer* server = 0;

    UserManager *userManager = 0;
    ChannelsManager *channelManager = 0;

    QHostAddress address;
    int port;
};

#endif // CONNECTIONMANAGER_H
