#include "udpplayer.h"

UDPPlayer::UDPPlayer(QObject *parent) : QObject(parent)
{
}

UDPPlayer::~UDPPlayer()
{
    qDebug("UDPPlayer dead");
}

void UDPPlayer::Listen(QHostAddress local, int port)
{
    this->local = local;
    this->port = port;

    socket = new QUdpSocket();
    socket->bind(local, port);
    QAudioFormat format;
    format.setSampleRate(128000);
    format.setChannelCount(1);
    format.setSampleSize(16);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::UnSignedInt);

    QAudioDeviceInfo info(QAudioDeviceInfo::defaultOutputDevice());
    if (!info.isFormatSupported(format))
        format = info.nearestFormat(format);

    output = new QAudioOutput(format);
    device = output->start();
    connect(socket, SIGNAL(readyRead()), this, SLOT(playData()), Qt::QueuedConnection);
}

void UDPPlayer::Disconnect()
{

    if (socket)
    {
        socket->close();
        delete socket;
        socket = NULL;
    }
    if (output)
    {
        output->disconnect();
        delete output;
        output = NULL;
    }

    qDebug("UDPPlayer dead");
}

void UDPPlayer::playData()
{
    //You need to read datagrams from the udp socket
    while (socket->hasPendingDatagrams())
    {
        //qDebug("playing..");
        QByteArray data;
        data.resize(socket->pendingDatagramSize());
        socket->readDatagram(data.data(), data.size());
        device->write(data.data(), data.size());
    }
}

bool UDPPlayer::getIsPlayerMuted() const
{
    return isPlayerMuted;
}

void UDPPlayer::setIsPlayerMuted(bool value)
{
    if (value == true){
        Disconnect();
    }
    else {
        Listen(local, port);
    }
    isPlayerMuted = value;
}
