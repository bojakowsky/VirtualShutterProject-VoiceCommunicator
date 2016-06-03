#ifndef SERVERITEM_H
#define SERVERITEM_H

#include <stdio.h>
#include <string>
#include <QHostAddress>

class ServerItem
{
public:
    ServerItem();
    ServerItem(std::string name, QHostAddress ip, int port);


    std::string getName() const;
    void setName(const std::string &value);

    QHostAddress getIp() const;
    void setIp(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

private:
    std::string name;
    QHostAddress ip;
    int port;
};

#endif // SERVERITEM_H
