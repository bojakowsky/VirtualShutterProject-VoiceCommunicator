#include "udpsender.h"

UdpSender::UdpSender()
{
    qDebug("UdpSender created");

}

void UdpSender::Connect(QHostAddress address, int port)
{
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

    input = new QAudioInput(format);
    socket = new QUdpSocket();
    socket->connectToHost(address, port);
    localAddress = socket->localAddress();
    input->start(socket);
}

void UdpSender::Disconnect()
{


    if (socket)
    {
        socket->close();
        delete socket;
        socket = NULL;
    }
    if (input)
    {
        input->disconnect();
        delete input;
        input = NULL;
    }
    //socket->flush();
    //delete input;
    //delete socket;
}

QHostAddress UdpSender::getLocalAddress() const
{
    return localAddress;
}

bool UdpSender::getIsMicMuted() const
{
    return isMicMuted;
}

void UdpSender::setIsMicMuted(bool value)
{
    isMicMuted = value;
    if (value == true)
        input->stop();
    else
        input->start(socket);

}


