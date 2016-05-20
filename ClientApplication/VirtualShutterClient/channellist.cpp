#include "channellist.h"
#include "ui_channellist.h"

ChannelList::ChannelList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChannelList)
{
    ui->setupUi(this);
}

ChannelList::~ChannelList()
{
    delete ui;
}
