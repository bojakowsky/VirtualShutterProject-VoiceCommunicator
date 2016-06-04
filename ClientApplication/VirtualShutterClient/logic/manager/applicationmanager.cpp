#include "applicationmanager.h"

ApplicationManager::ApplicationManager()
{
    favourites = new FavouritesManager();
    udpPlayer = new UDPPlayer();
    udpSender = new UdpSender();
    tcpClient = new TCPClient();
}

ApplicationManager::~ApplicationManager()
{
    delete favourites;
    delete udpPlayer;
    delete udpSender;
    delete tcpClient;
}

void ApplicationManager::CheckServerData(){

}

std::string ApplicationManager::getUserName() const
{
    return userName;
}

void ApplicationManager::setUserName(const std::string &value)
{
    userName = value;
}

QHostAddress ApplicationManager::getIp_address() const
{
    return ip_address;
}

void ApplicationManager::setIp_address(const QHostAddress &value)
{
    ip_address = value;
}

int ApplicationManager::getPort() const
{
    return port;
}

void ApplicationManager::setPort(int value)
{
    port = value;
}

FavouritesManager *ApplicationManager::getFavourites() const
{
    return favourites;
}

TCPClient *ApplicationManager::getTcpClient()
{
    return tcpClient;
}

UDPPlayer *ApplicationManager::getUdpPlayer()
{
    return udpPlayer;
}

UdpSender *ApplicationManager::getUdpSender()
{
    return udpSender;
}

