#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent) : QTcpServer(parent)
{

}

TCPServer::TCPServer(ChannelsManager *channelMaanger, UserManager *userManager)
{
    this->channelMaanger = channelMaanger;
    this->userManager = userManager;
}

void TCPServer::StartServer()
{
    QHostAddress addr("192.168.0.100");
    if (listen(addr, 1234)){
        qDebug() << "Server started";
    }
    else qDebug() << "Server not started";
}
void TCPServer::incomingConnection(qintptr handle)
{
    qDebug() << "New incoming connection";
    TCPClient *client = new TCPClient(channelMaanger, userManager, this);
    client->SetSocket(handle);


}
