#ifndef USER_H
#define USER_H
#include <stdio.h>
#include <string>
#include <QHostAddress>
class User
{
public:
    User();
    User(QHostAddress ip, int port, std::string userName);

    QHostAddress getIp() const;
    void setIp(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

    std::string getUserName() const;
    void setUserName(const std::string &value);

    bool getIsBanned() const;
    void setIsBanned(bool value);

    std::string getChannelName() const;
    void setChannelName(const std::string &value);

private:
    QHostAddress ip;
    int port;
    std::string userName;
    bool isBanned = false;
    std::string channelName = "Global";
};

#endif // USER_H
