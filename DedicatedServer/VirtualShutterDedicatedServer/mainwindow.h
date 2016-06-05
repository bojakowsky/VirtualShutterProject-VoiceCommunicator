#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "logic/manager/servermanager.h"
#include "channeldialog.h"
#include "informdialog.h"
#include <QStringListModel>
#include "logic/manager/activitiesmanager.h"
#include "logic/manager/eventsmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, ServerManager *serverManager = 0);
    ~MainWindow();

    void setManager(ServerManager *value);
    void OpenSingleChannelDialog(Channel *ch);
    void OpenSingleChannelDialog();

private slots:
    void updateUserList();
    void logToFile();
    void handleSwitch();
    void showGeneralConfig();
    void showUsersConfig();
    void showChannelsConfig();
    void showEventsConfig();
    void showActivitiesConfig();
    void hideAll();
    void addChannelShowDialog();

    void on_editChannelBtn_clicked();

    void on_removeChannelBtn_clicked();

    void on_kickButton_clicked();

    void on_blockButton_clicked();

    void on_unbanButton_clicked();

    void on_moveButton_clicked();

    void on_clearActivitiesButton_clicked();

    void on_clearEventButton_clicked();

private:
    Ui::MainWindow *ui = 0;
    ServerManager *manager = 0;

    InformDialog *error = 0;
    ChannelDialog *channelDialog = 0;

    std::string global;

    //QStringListModel *channelListViewModel = 0;

};

#endif // MAINWINDOW_H
