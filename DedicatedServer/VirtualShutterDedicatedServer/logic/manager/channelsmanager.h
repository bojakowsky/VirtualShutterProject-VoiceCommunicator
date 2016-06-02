#ifndef CHANNELSMANAGER_H
#define CHANNELSMANAGER_H
#include <stdio.h>
#include <string>
#include <vector>
#include "logic/model/channel.h"

class ChannelsManager
{
public:
    ChannelsManager();

    void Add(Channel ch);
    void Remove(int i);
    void Update(int i, Channel ch);
    Channel Get(int i);
private:
    std::vector<Channel> channels;
};

#endif // CHANNELSMANAGER_H
