#ifndef APPLICATIONMANAGER_H
#define APPLICATIONMANAGER_H

#include <stdio.h>
#include <string>
#include <QHostAddress>
#include "logic/manager/favouritesmanager.h"
#include "logic/connection/tcpclient.h"
#include "logic/connection/udpplayer.h"
#include "logic/connection/udpsender.h"
class ApplicationManager
{
public:
    ApplicationManager();
    ~ApplicationManager();

    void CheckServerData();

    std::string getUserName() const;
    void setUserName(const std::string &value);

    QHostAddress getIp_address() const;
    void setIp_address(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

    FavouritesManager *getFavourites() const;

    TCPClient *getTcpClient();

    UDPPlayer *getUdpPlayer();

    UdpSender *getUdpSender();

protected:

private:
    FavouritesManager *favourites;
    TCPClient *tcpClient;
    UDPPlayer *udpPlayer;
    UdpSender *udpSender;

    std::string userName;
    QHostAddress ip_address;
    int port;
};


#endif // APPLICATIONMANAGER_H
