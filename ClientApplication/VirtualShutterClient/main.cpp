#include "mainwindow.h"
#include "conversation.h"
#include "logic/manager/applicationmanager.h"
#include <QApplication>
#include <QIODevice>
#include <QObject>
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

    QCoreApplication::addLibraryPath("./");
    ApplicationManager *applicationManager = new ApplicationManager();
    MainWindow w;

    w.setManager(applicationManager);
    w.show();

    QObject::connect(&a, SIGNAL(aboutToQuit()), &w, SLOT(closing()));

    //Conversation e;
    //e.show();

    //new UDPPlayer();
    //new UdpSender();

    return a.exec();
}

void closing()
{

}
