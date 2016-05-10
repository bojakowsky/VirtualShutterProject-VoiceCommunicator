#include "mainwindow.h"
#include "applicationmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    ApplicationManager *applicationManager = new ApplicationManager;

    MainWindow w;
    w.show();



    delete applicationManager;
    qDebug("ApplicationManager object deleted");
    return a.exec();
}
