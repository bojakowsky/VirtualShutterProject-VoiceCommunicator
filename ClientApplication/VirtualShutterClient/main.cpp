#include "mainwindow.h"
#include "channellist.h"
#include "conversation.h"
#include "applicationmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ApplicationManager *applicationManager = new ApplicationManager;

    MainWindow w;
    w.show();

    ChannelList q;
    q.show();

    Conversation e;
    e.show();



    delete applicationManager;
    qDebug("ApplicationManager object deleted");
    return a.exec();
}
