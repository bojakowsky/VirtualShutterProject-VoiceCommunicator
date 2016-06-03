#include "servermanager.h"

ServerManager::ServerManager()
{
    qDebug("ServerManager created.");
    this->isRunning = false;

    channelsManager = new ChannelsManager();
    userManager = new UserManager(this->getNumberOfUsersAllowed(), this->getPassword());
    fileManager = new FileManager();
}

ServerManager::~ServerManager(){
    delete channelsManager;
    delete userManager;
    delete connectionManager;
    delete fileManager;
}

void ServerManager::Configure(QHostAddress ip, int port, std::string serverName, std::string password, int numberOfUsersAllowed){
    this->ip = ip;
    this->port = port;
    this->serverName = serverName;
    this->password = password;
    this->numberOfUsersAllowed = numberOfUsersAllowed;
}

void ServerManager::Run(){
    this->isRunning = true;
    connectionManager = new ConnectionManager(userManager, channelsManager);
}

void ServerManager::Stop(){
    this->isRunning = false;
    delete connectionManager;
    userManager->users.clear();
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

FileManager *ServerManager::getFileManager() const
{
    return fileManager;
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