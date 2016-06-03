#include "user.h"

User::User()
{

}

User::User(QHostAddress ip, int port, std::string userName)
{
    this->setIp(ip);
    this->setPort(port);
    this->setUserName(userName);
}

QHostAddress User::getIp() const
{
    return ip;
}

void User::setIp(const QHostAddress &value)
{
    ip = value;
}

int User::getPort() const
{
    return port;
}

void User::setPort(int value)
{
    port = value;
}

std::string User::getUserName() const
{
    return userName;
}

void User::setUserName(const std::string &value)
{
    userName = value;
}

bool User::getIsBanned() const
{
    return isBanned;
}

void User::setIsBanned(bool value)
{
    isBanned = value;
}

std::string User::getChannelName() const
{
    return channelName;
}

void User::setChannelName(const std::string &value)
{
    channelName = value;
}

