#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include <stdio.h>
#include <string>
#include <QHostAddress>
#include "logic/manager/channelsmanager.h"
#include "logic/manager/usermanager.h"
#include "logic/manager/connectionmanager.h"
#include "logic/manager/filemanager.h"

class ServerManager
{
public:
    ServerManager();
    ~ServerManager();

    QHostAddress getIp() const;
    void setIp(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

    std::string getServerName() const;
    void setServerName(const std::string &value);

    std::string getPassword() const;
    void setPassword(const std::string &value);

    int getNumberOfUsersAllowed() const;
    void setNumberOfUsersAllowed(int value);

    bool getIsRunning() const;
    void setIsRunning(bool value);

    void Configure(QHostAddress ip, int port, std::string serverName, std::string password, int numberOfUsersAllowed);
    void Run();
    void Stop();

    ChannelsManager *getChannelsManager() const;

    UserManager *getUserManager() const;

    ConnectionManager *getConnectionManager() const;

    FileManager *getFileManager() const;

protected:

private:
    QHostAddress ip;
    int port;
    std::string serverName;
    std::string password;
    int numberOfUsersAllowed;
    bool isRunning;

    ChannelsManager *channelsManager;
    UserManager *userManager;
    ConnectionManager *connectionManager;
    FileManager *fileManager;

};

#endif // SERVERMANAGER_H
