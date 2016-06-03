#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QAbstractSocket>
#include "tcpclient.h"
#include "logic/manager/usermanager.h"
#include "logic/manager/channelsmanager.h"
class TCPServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit TCPServer(QObject *parent = 0);
    TCPServer(ChannelsManager *channelMaanger, UserManager *userManager);
    void StartServer();

protected:
    void incomingConnection(qintptr handle);

signals:

public slots:

private:
    ChannelsManager *channelMaanger;
    UserManager *userManager;
};

#endif // TCPSERVER_H
