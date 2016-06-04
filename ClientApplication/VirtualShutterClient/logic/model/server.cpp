#include "server.h"

Server::Server()
{

}

Server::Server(std::string name, QHostAddress ip, int port, std::string password)
{
    this->setName(name);
    this->setIp(ip);
    this->setPort(port);
    this->setPassword(password);
}

std::string Server::getName() const
{
    return name;
}

void Server::setName(const std::string &value)
{
    name = value;
}

QHostAddress Server::getIp() const
{
    return ip;
}

void Server::setIp(const QHostAddress &value)
{
    ip = value;
}

int Server::getPort() const
{
    return port;
}

void Server::setPort(int value)
{
    port = value;
}

std::string Server::getPassword() const
{
    return password;
}

void Server::setPassword(const std::string &value)
{
    password = value;
}


