#ifndef CONVERSATION_H
#define CONVERSATION_H

#include <QMainWindow>

namespace Ui {
class Conversation;
}

class Conversation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Conversation(QWidget *parent = 0);
    ~Conversation();

private:
    Ui::Conversation *ui;
};

#endif // CONVERSATION_H
