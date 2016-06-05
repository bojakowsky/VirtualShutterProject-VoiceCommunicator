#ifndef UDPBROADCAST_H
#define UDPBROADCAST_H
#include <QObject>
//#include <QtMultimedia/QAudioOutput>
//#include <QtMultimedia/QAudioInput>
//#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>
//#include <QFile>
//#include <QTimer>
#include "logic/manager/usermanager.h"
#include "logic/manager/channelsmanager.h"

class UDPBroadcast : public QObject
{
    Q_OBJECT
public:
    explicit UDPBroadcast(QObject *parent = 0);
    UDPBroadcast(ChannelsManager *channelMaanger, UserManager *userManager, QObject *parent = 0);
    void StartBroadcast(QHostAddress addr, int port);

    //int j = 0;

public slots:
    void broadcastSend();

    //    void init();
//    void init1();
//    QFile destinationFile;   // Class member
//    QAudioInput* audio; // Class member

private:
    QUdpSocket *socketListener;
    QUdpSocket *socketSender;
    ChannelsManager *channelMaanger;
    UserManager *userManager;

    QHostAddress address;
    int port;
};

#endif // UDPBROADCAST_H
