#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent) : QTcpServer(parent)
{

}

TCPServer::TCPServer(ChannelsManager *channelMaanger, UserManager *userManager)
{
    this->channelMaanger = channelMaanger;
    this->userManager = userManager;
}

void TCPServer::StartServer(QHostAddress address, int port)
{
    this->address = address;
    this->port = port;
    if (listen(address, port)){
        qDebug() << "Server started";
    }
    else qDebug() << "Server not started";
}
void TCPServer::incomingConnection(qintptr handle)
{
    qDebug() << "New incoming connection";
    TCPClient *client = new TCPClient(channelMaanger, userManager, this);
    client->setSendersPort(this->port);
    client->SetSocket(handle);


}
