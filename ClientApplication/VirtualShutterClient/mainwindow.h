#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logic/manager/applicationmanager.h"
#include "MainWindow/addeditserverdialog.h"
#include <QListWidget>
#include <string>
#include <vector>
#include "conversation.h"
#include "logic/fieldvalidator.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, ApplicationManager *appManager = 0);
    ~MainWindow();

    void OpenSingleServerDialog(Server *server);
    void OpenSingleServerDialog();

    void setManager(ApplicationManager *value);

public slots:
    void closing();

private slots:
    void on_addServerButton_clicked();

    void on_removeServerButton_clicked();

    void on_editServerButton_clicked();

    void on_connectToServerButton_clicked();

private:
    Ui::MainWindow *ui = 0;
    Conversation *conversation = 0;

    AddEditServerDialog *addEditServerDialog = 0;
    InformDialog *informDialog = 0;
    ApplicationManager *manager = 0;

    void FillWidgetList(QListWidget *list, std::vector<std::string> data);
};

#endif // MAINWINDOW_H
