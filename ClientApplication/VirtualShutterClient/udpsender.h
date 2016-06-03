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
private:
    QAudioInput* input;
    QUdpSocket* socket;
    QAudioFormat format;
};

#endif // UDPSENDER_H
