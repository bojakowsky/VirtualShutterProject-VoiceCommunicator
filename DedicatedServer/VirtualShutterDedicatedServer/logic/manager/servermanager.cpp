#include "servermanager.h"

ServerManager::ServerManager()
{
    qDebug("ServerManager created.");
    this->isRunning = false;
    channelsManager = new ChannelsManager();
    userManager = new UserManager(this->getNumberOfUsersAllowed(), this->getPassword());
}

ServerManager::~ServerManager(){
    delete channelsManager;
    delete userManager;
    delete connectionManager;
}

void ServerManager::Configure(QHostAddress ip, int port, std::string serverName, std::string password, int numberOfUsersAllowed){
    this->ip = ip;
    this->port = port;
    this->serverName = serverName;
    this->password = password;
    this->numberOfUsersAllowed = numberOfUsersAllowed;

    userManager->setServerPassword(password);
    userManager->setUsersLimit(numberOfUsersAllowed);
}

void ServerManager::Run(){
    this->isRunning = true;
    qDebug(std::to_string(userManager->users.size()).c_str());
    connectionManager = new ConnectionManager(userManager, channelsManager);
    connectionManager->setAddress(ip);
    connectionManager->setPort(port);
    connectionManager->Run();
    qDebug(std::to_string(userManager->users.size()).c_str());
}

void ServerManager::Stop(){
    this->isRunning = false;
    connectionManager->Stop();
    delete connectionManager;

}

ChannelsManager *ServerManager::getChannelsManager() const
{
    return channelsManager;
}

UserManager *ServerManager::getUserManager() const
{
    return userManager;
}

ConnectionManager *ServerManager::getConnectionManager() const
{
    return connectionManager;
}


bool ServerManager::getIsRunning() const
{
    return isRunning;
}

void ServerManager::setIsRunning(bool value)
{
    isRunning = value;
}

int ServerManager::getNumberOfUsersAllowed() const
{
    return numberOfUsersAllowed;
}

void ServerManager::setNumberOfUsersAllowed(int value)
{
    numberOfUsersAllowed = value;
}

std::string ServerManager::getPassword() const
{
    return password;
}

void ServerManager::setPassword(const std::string &value)
{
    password = value;
}

std::string ServerManager::getServerName() const
{
    return serverName;
}

void ServerManager::setServerName(const std::string &value)
{
    serverName = value;
}

int ServerManager::getPort() const
{
    return port;
}

void ServerManager::setPort(int value)
{
    port = value;
}

QHostAddress ServerManager::getIp() const
{
    return ip;
}

void ServerManager::setIp(const QHostAddress &value)
{
    ip = value;
}
