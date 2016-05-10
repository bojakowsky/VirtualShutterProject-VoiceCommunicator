#include "applicationmanager.h"

ApplicationManager::ApplicationManager()
{

}

ApplicationManager::~ApplicationManager()
{

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

