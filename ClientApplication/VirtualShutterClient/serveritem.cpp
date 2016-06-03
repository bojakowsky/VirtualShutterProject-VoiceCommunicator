#include "serveritem.h"

ServerItem::ServerItem()
{

}



ServerItem::ServerItem(std::string name, QHostAddress ip, int port)
{
    this->setName(name);
    this->setIp(ip);
    this->setPort(port);
}

std::string ServerItem::getName() const
{
    return name;
}

void ServerItem::setName(const std::string &value)
{
    name = value;
}

QHostAddress ServerItem::getIp(){
    return ip;
}

void ServerItem::setIp(QHostAddress ip[]){
    this->ip = ip;
}

int ServerItem::getPort() const
{
    return port;
}

void ServerItem::setPort(int port)
{
    this.port = port;
}
