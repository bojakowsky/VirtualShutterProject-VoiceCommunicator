#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>
#include "logic/helper.h"
#include "logic/operationslogger.h"
#include "udpplayer.h"
#include "udpsender.h"
class TCPClient : public QObject
{
    Q_OBJECT
public:
    explicit TCPClient(QObject *parent = 0);
    ~TCPClient();
    void Connect(QHostAddress address, int port, std::string nickname, std::string password="");
    void Disconnect();


    std::vector<std::string> getConversationData() const;
    void clear();

    void move(std::string channelName, std::string password="");
    QListWidget *getList() const;
    void setList(QListWidget *value);

    void setUdpPlayer(UDPPlayer *value);
    void setUdpSender(UdpSender *value);

signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();
    void info(); // socket message

private:
    QTcpSocket *socket = 0;
    std::string nickname;
    std::string password;

    QTimer *infoTimer = 0;
    std::vector<std::string> conversationData;

    QListWidget *list;

    UDPPlayer *udpPlayer = 0;
    UdpSender *udpSender = 0;
    QHostAddress address;
    int port;
};

#endif // TCPCLIENT_H
