#include "serveritem.h"

ServerItem::ServerItem()
{

}



ServerItem::ServerItem(std::string name, int octet1, int octet2, int octet3, int octet4, int port)
{
    this->setName(name);
    this->setOctet(octet1, 1);
    this->setNumberOfUsersAllowed(numberOfUsersAllowed);
}

std::string ServerItem::getName() const
{
    return name;
}

void ServerItem::setName(const std::string &value)
{
    name = value;
}

int ServerItem::getIp(){
    int ip[4];
    ip[0] = octet1;
    ip[1] = octet2;
    ip[2] = octet3;
    ip[3] = octet4;
    return ip;
}

void ServerItem::setIp(int ip[]){
    octet1 = ip[0];
    octet2 = ip[1];
    octet3 = ip[2];
    octet4 = ip[3];
}

int ServerItem::getPort() const
{
    return port;
}

void ServerItem::setPort(int port)
{
    this.port = port;
}