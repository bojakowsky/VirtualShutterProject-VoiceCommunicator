#include "mainwindow.h"
#include "channeldialog.h"
#include "logic/manager/servermanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ServerManager *serverManager = new ServerManager();

    MainWindow w;
    w.setManager(serverManager);
    w.show();

    return a.exec();
}
