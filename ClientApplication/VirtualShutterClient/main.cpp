#include "mainwindow.h"
#include "conversation.h"
#include "logic/manager/applicationmanager.h"
#include <QApplication>
#include <QIODevice>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>
#include "logic/connection/udpplayer.h"
#include "logic/connection/udpsender.h"
#include "logic/connection/tcpclient.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ApplicationManager *applicationManager = new ApplicationManager();
    //TCPClient *Client = new TCPClient();
    //Client->Connect();
    MainWindow w;
    w.setManager(applicationManager);
    w.show();

    //Conversation e;
    //e.show();

    //new UDPPlayer();
    //new UdpSender();

    return a.exec();
}
