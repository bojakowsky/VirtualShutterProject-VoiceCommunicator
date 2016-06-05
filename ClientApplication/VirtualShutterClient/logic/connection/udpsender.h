#ifndef UDPSENDER_H
#define UDPSENDER_H
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>

class UdpSender
{
public:
    UdpSender();
    ~UdpSender();
    void Connect(QHostAddress address, int port);
    void Disconnect();

    QHostAddress getLocalAddress() const;

    bool getIsMicMuted() const;
    void setIsMicMuted(bool value);

private:
    QAudioInput* input = 0;
    QUdpSocket* socket = 0;
    QAudioFormat format;

    QHostAddress localAddress;
    bool isMicMuted = false;

};

#endif // UDPSENDER_H
