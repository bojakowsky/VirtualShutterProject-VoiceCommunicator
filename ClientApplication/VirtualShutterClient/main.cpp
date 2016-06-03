#include "mainwindow.h"
#include "channellist.h"
#include "conversation.h"
#include "applicationmanager.h"
#include <QApplication>
#include <QIODevice>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>
#include "udpplayer.h"
#include "udpsender.h"
#include "tcpclient.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ApplicationManager *applicationManager = new ApplicationManager;
    //TCPClient *Client = new TCPClient();
    //Client->Connect();
    MainWindow w;
    w.show();

    //ChannelList q;
    //q.show();

    //Conversation e;
    //e.show();

    //new UDPPlayer();
    //new UdpSender();

    return a.exec();
}
