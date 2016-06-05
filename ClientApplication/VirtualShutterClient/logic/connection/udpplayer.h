#ifndef UDPPLAYER_H
#define UDPPLAYER_H


#include <QObject>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>
#include <QNetworkInterface>

class UDPPlayer : public QObject
{
    Q_OBJECT
public:
    explicit UDPPlayer(QObject *parent = 0);
    ~UDPPlayer();
    void Listen(QHostAddress local, int port);
    void Disconnect();

    bool getIsPlayerMuted() const;
    void setIsPlayerMuted(bool value);

private slots:
    void playData();

private:
    QAudioOutput *output;
    QUdpSocket *socket;
    QIODevice *device;

    bool isPlayerMuted = false;
    QHostAddress local;
    int port;
};

#endif // UDPPLAYER_H
