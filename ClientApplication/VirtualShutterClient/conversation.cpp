#include "conversation.h"
#include "ui_conversation.h"

Conversation::Conversation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Conversation)
{
    ui->setupUi(this);
}

Conversation::~Conversation()
{
    delete ui;
}
