#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QThreadPool>
#include "clienttask.h"
#include <QHostAddress>
#include "logic/manager/usermanager.h"
#include "logic/manager/channelsmanager.h"
class TCPClient : public QObject
{
    Q_OBJECT
public:
    explicit TCPClient(QObject *parent = 0);
    TCPClient(ChannelsManager *channelMaanger, UserManager *userManager, QObject *parent = 0);
    void SetSocket(int descriptor);
signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();
    void TaskResult(std::string Structure);

private:
    QTcpSocket *socket;
    ChannelsManager *channelMaanger;
    UserManager *userManager;
};

#endif // TCPCLIENT_H
