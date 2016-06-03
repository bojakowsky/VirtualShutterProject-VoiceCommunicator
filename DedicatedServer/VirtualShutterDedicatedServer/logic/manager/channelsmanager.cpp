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

Channel ChannelsManager::TryGet(std::string channelName, std::string password, UserManager *usrManager)
{
    for (int i = 0; i < this->channels.size(); ++i){
        Channel buf = this->channels.at(i);
        if (buf.getName() == channelName){
            if (buf.getPassword() == password){
                int userCount = 0;
                for (int i = 0 ; i < usrManager->users.size(); ++i){
                    std::string bufCh = usrManager->Get(i).getChannelName();
                    if (bufCh == channelName){
                        userCount++;
                        if (userCount > buf.getNumberOfUsersAllowed()){
                            throw ChannelsManagerException("Channel user limit reached");
                        }
                    }

                }
                return this->channels.at(i);
            }
            else
                throw ChannelsManagerException("Wrong password");
        }
    }
    throw ChannelsManagerException("Channel not found");
}

std::string ChannelsManager::BuildChannelStructure(UserManager *usrManager)
{
    std::string structure = "";
    for (int i = 0; i < this->channels.size(); ++i){
        Channel buf = this->channels.at(i);
        int userCount = 0;
        std::string userNames = "";
        for (int j = 0 ; j < usrManager->users.size(); ++j){
            User bufUser = usrManager->Get(j);
            if (bufUser.getChannelName() == buf.getName())
            {
                if (userCount == 0)
                    userNames += bufUser.getUserName();
                else
                    userNames = userNames + "," + bufUser.getUserName();
                userCount++;
            }
        }
        std::string password = "F";
        if (buf.getPassword() != "") password = "T";
        structure = structure + "/" + buf.getName() + "|" +
                std::to_string(userCount) + "|" + std::to_string(buf.getNumberOfUsersAllowed()) + "|" + password + "|" +
                userNames;
    }
    return structure;
}
