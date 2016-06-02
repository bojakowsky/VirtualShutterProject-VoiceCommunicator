#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logic/manager/servermanager.h"
#include "channeldialog.h"
#include "informdialog.h"
#include <QStringListModel>
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

private:
    Ui::MainWindow *ui;
    ServerManager *manager;

    InformDialog *error = 0;
    ChannelDialog *channelDialog = 0;

    //QStringListModel *channelListViewModel = 0;

};

#endif // MAINWINDOW_H
