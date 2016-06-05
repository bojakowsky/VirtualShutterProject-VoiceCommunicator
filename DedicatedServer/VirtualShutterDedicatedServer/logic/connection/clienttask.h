#ifndef CLIENTTASK_H
#define CLIENTTASK_H
#include <QRunnable>
#include <QObject>
#include <string>
#include "logic/manager/channelsmanager.h"
#include "logic/manager/usermanager.h"
class ClientTask : public QObject, public QRunnable
{
    Q_OBJECT
public:
    ClientTask();
    void setManagers(ChannelsManager *channelsManager, UserManager *userManager);
signals:
    void Result(QString Structure);

protected:
    void run();

private:
    ChannelsManager *channelsManager = 0;
    UserManager *userManager = 0;
};

#endif // CLIENTTASK_H
