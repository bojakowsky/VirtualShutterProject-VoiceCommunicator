#ifndef CHANNELLIST_H
#define CHANNELLIST_H

#include <QMainWindow>

namespace Ui {
class ChannelList;
}

class ChannelList : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChannelList(QWidget *parent = 0);
    ~ChannelList();

private:
    Ui::ChannelList *ui;
};

#endif // CHANNELLIST_H
