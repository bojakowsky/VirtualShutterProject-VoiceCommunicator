#ifndef CONVERSATION_H
#define CONVERSATION_H
#include "logic/manager/applicationmanager.h"
#include <QMainWindow>
#include "logic/model/server.h"
#include <QtCore>
#include <QTimer>
#include "inputdialog.h"
#include "logic/operationslogger.h"
namespace Ui {
class Conversation;
}

class Conversation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Conversation(QWidget *parent = 0);
    ~Conversation();

    void setManager(ApplicationManager *value);
    void Live(Server server, std::string nickname);
private slots:
    void on_muteButton_clicked();
    void on_disconnectButton_clicked();
    void refreshList();

    void on_moveButton_clicked();

    void on_muteUserButton_clicked();

private:
    Ui::Conversation *ui = 0;
    QMainWindow *main = 0;
    InputDialog *input = 0;

    ApplicationManager *manager = 0;
    QTimer *listTimer = 0;
};

#endif // CONVERSATION_H
