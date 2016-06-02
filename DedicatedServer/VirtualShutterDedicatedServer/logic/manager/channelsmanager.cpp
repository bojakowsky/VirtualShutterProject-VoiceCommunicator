#include "channelsmanager.h"

ChannelsManager::ChannelsManager()
{

}

void ChannelsManager::Add(Channel ch)
{
    this->channels.push_back(ch);
}

void ChannelsManager::Remove(int i)
{
    std::vector<Channel>::iterator it;
    this->channels.erase(this->channels.begin()+i);
}

void ChannelsManager::Update(int i, Channel ch)
{
    std::vector<Channel>::iterator it;
    this->channels.at(i) = ch;
}

Channel ChannelsManager::Get(int i)
{
    return this->channels.at(i);
}
