#include "mainwindow.h"
#include "channeldialog.h"
#include "logic/manager/servermanager.h"
#include <QApplication>
#include <QIODevice>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QAudioInput>
#include <QtMultimedia/QAudioFormat>
#include <QUdpSocket>
#include "logic/connection/udpplayer.h"
#include "logic/connection/udpbroadcast.h"
#include "logic/connection/tcpserver.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ServerManager *serverManager = new ServerManager();

    MainWindow w;
    w.setManager(serverManager);
    w.show();
    //Sender sender;
    //sender.show();
    //new UDPPlayer();
    //auto broadcast = new UDPBroadcast();
    //broadcast->init1();
    //broadcast->init();
    //TCPServer Server;
    //Server.StartServer();

    return a.exec();
}
