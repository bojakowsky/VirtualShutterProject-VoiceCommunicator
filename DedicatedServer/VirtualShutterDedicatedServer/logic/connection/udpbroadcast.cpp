#include "udpbroadcast.h"

UDPBroadcast::UDPBroadcast(QObject *parent) : QObject(parent)
{
//    socket = new QUdpSocket();
//    QHostAddress serverAddress("192.168.0.100");
//    socket->bind(serverAddress, 1234);
//    connect(socket, SIGNAL(readyRead()), this, SLOT(broadcastSend()));
}

UDPBroadcast::UDPBroadcast(ChannelsManager *channelMaanger, UserManager *userManager, QObject *parent) : QObject(parent)
{
    socketListener = new QUdpSocket();
    QHostAddress serverAddress("192.168.0.100");
    socketListener->bind(serverAddress, 1002);
    connect(socketListener, SIGNAL(readyRead()), this, SLOT(broadcastSend()));

    this->channelMaanger = channelMaanger;
    this->userManager = userManager;

}

void UDPBroadcast::broadcastSend(){
    while (socketListener->hasPendingDatagrams()){
        QByteArray data;
        QHostAddress adr;
        quint16 port;

        data.resize(socketListener->pendingDatagramSize());
        socketListener->readDatagram(data.data(), data.size(), &adr, &port);
        //qDebug() << adr;
        //qDebug() << port;
        j++;
        for (int i = 0; i < userManager->users.size(); ++i){
            User user = userManager->users.at(i);
            if (user.getIp() != adr)
            {
                if (!user.getIsBanned()){
                    socketSender = new QUdpSocket();
                    socketSender->connectToHost(user.getIp(), 1002);
                    socketSender->write(data.data(), data.size());
                }
            }
        }
    }
}

//void UDPBroadcast::init(){
//    QAudioFormat format;
//    format.setSampleRate(128000);
//    format.setChannelCount(1);
//    format.setSampleSize(16);
//    format.setCodec("audio/pcm");
//    format.setByteOrder(QAudioFormat::LittleEndian);
//    format.setSampleType(QAudioFormat::UnSignedInt);

//    //If format isn't supported find the nearest supported
//    QAudioDeviceInfo info(QAudioDeviceInfo::defaultInputDevice());
//    if (!info.isFormatSupported(format))
//        format = info.nearestFormat(format);

//    QAudioInput* input = new QAudioInput(format);
//    QUdpSocket* socket = new QUdpSocket();
//    socket->connectToHost("192.168.0.10", 1002);
//    input->start(socket);
//}

//void UDPBroadcast::init1(){
//    destinationFile.setFileName("test.raw");
//    destinationFile.open( QIODevice::WriteOnly | QIODevice::Truncate );

//    QAudioFormat format;
//    // Set up the desired format, for example:
//    format.setSampleRate(8000);
//    format.setChannelCount(1);
//    format.setSampleSize(8);
//    format.setCodec("audio/pcm");
//    format.setByteOrder(QAudioFormat::LittleEndian);
//    format.setSampleType(QAudioFormat::UnSignedInt);

//    QAudioDeviceInfo info = QAudioDeviceInfo::defaultInputDevice();
//    if (!info.isFormatSupported(format)) {
//        qWarning() << "Default format not supported, trying to use the nearest.";
//        format = info.nearestFormat(format);
//    }

//    audio = new QAudioInput(format);

//    QUdpSocket* socket = new QUdpSocket();
//    socket->connectToHost("192.168.0.10", 1002);
//    audio->start(&destinationFile);
//    audio->start(socket);
//}
