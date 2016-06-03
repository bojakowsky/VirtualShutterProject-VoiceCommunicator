#include "udpsender.h"

UdpSender::UdpSender()
{
    qDebug("UdpSender created");
    format.setSampleRate(128000);
    format.setChannelCount(1);
    format.setSampleSize(16);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::UnSignedInt);

    //If format isn't supported find the nearest supported
    QAudioDeviceInfo info(QAudioDeviceInfo::defaultInputDevice());
    if (!info.isFormatSupported(format))
        format = info.nearestFormat(format);

    QAudioInput* input = new QAudioInput(format);
    QUdpSocket* socket = new QUdpSocket();
    socket->connectToHost("192.168.0.100", 1002);
    input->start(socket);
}
