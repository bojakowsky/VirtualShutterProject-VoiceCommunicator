#ifndef SERVERITEM_H
#define SERVERITEM_H

#include <stdio.h>
#include <string>
#include <QHostAddress>

class Server
{
public:
    Server();
    Server(std::string name, QHostAddress ip, int port, std::string password = "");


    std::string getName() const;
    void setName(const std::string &value);

    QHostAddress getIp() const;
    void setIp(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

    std::string getPassword() const;
    void setPassword(const std::string &value);

private:
    std::string name;
    QHostAddress ip;
    int port;
    std::string password;
};

#endif // SERVERITEM_H
