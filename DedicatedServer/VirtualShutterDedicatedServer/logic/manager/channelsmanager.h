#ifndef CHANNELSMANAGER_H
#define CHANNELSMANAGER_H
#include <stdio.h>
#include "logic/model/channel.h"
#include "logic/manager/usermanager.h"
#include <string>
#include <vector>
class ChannelsManager
{
public:
    ChannelsManager();

    void Add(Channel ch);
    void Remove(int i);
    void Update(int i, Channel ch);
    Channel Get(int i);
    Channel TryMove(std::string channelName, std::string password, UserManager *usrManager);
    std::string BuildChannelStructure(UserManager *usrManager);

    int getChannelsCount();
private:
    std::vector<Channel> channels;
};

class ChannelsManagerException: public std::exception
{

public:
    virtual const char* what() const throw()
    {
      const char* c_message = this->message.c_str();
      return c_message;
    }


    ChannelsManagerException(std::string message){
        this->message = message;
    }
private:
  std::string message;
};

#endif // CHANNELSMANAGER_H
