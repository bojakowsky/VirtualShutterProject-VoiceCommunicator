#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void handleSwitch();
    void showGeneralConfig();
    void showUsersConfig();
    void showChannelsConfig();
    void showEventsConfig();
    void showActivitiesConfig();
    void hideAll();
    void addChannelShowDialog();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
