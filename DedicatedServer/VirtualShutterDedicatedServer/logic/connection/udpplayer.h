#ifndef UDPPLAYER_H
#define UDPPLAYER_H


#include <QObject>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>

class UDPPlayer : public QObject
{
    Q_OBJECT
public:
    explicit UDPPlayer(QObject *parent = 0);

private slots:
    void playData();

private:
    QAudioOutput *output = 0;
    QUdpSocket *socket = 0 ;
    QIODevice *device = 0;
};

#endif // UDPPLAYER_H
