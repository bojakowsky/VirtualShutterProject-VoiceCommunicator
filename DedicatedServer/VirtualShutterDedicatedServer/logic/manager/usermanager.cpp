#include "usermanager.h"

UserManager::UserManager(int usersLimit, std::string serverPassword)
{
    this->usersLimit = usersLimit;
    this->serverPassword = serverPassword;
}

void UserManager::Add(User user)
{
    if (IsBanned(user.getIp()))
        user.setIsBanned(true);

    this->users.push_back(user);
}

void UserManager::TryAdd(User user, std::string password)
{
    if (serverPassword != password)
        throw UserManagerException("Wrong server password");
    if (isLimitReached())
        throw UserManagerException("Server user limit reached");
    Add(user);
    if (user.getIsBanned())
        throw UserManagerException("Banned");

}

User UserManager::Get(int i)
{
    return this->users.at(i);
}

bool UserManager::Exist(QHostAddress address)
{
    for (int i = 0 ; i < this->users.size(); ++i){
        User user = this->users.at(i);
        if (user.getIp() == address)
            return true;
    }
    return false;
}

void UserManager::Remove(QHostAddress address)
{
    for (int i = 0 ; i < this->users.size(); ++i){
        User user = this->users.at(i);
        if (user.getIp() == address){
            std::vector<User>::iterator it;
            this->users.erase(this->users.begin()+i);
            break;
        }
    }
}

bool UserManager::IsBanned(QHostAddress address){
    for (int i = 0 ; i < this->bannedUsers.size(); ++i){
        User user = this->bannedUsers.at(i);
        if (user.getIp() == address)
            return true;
    }
    return false;
}

void UserManager::Kick(int i)
{
    std::vector<User>::iterator it;
    this->users.erase(this->users.begin()+i);
}

void UserManager::Ban(int i)
{
    std::vector<User>::iterator it;
    User user = this->users.at(i);
    user.setIsBanned(true);
    this->users.at(i) = user;
    this->bannedUsers.push_back(user);
}

void UserManager::Unban(int i)
{
    User user = this->users.at(i);
    user.setIsBanned(false);
    this->users.at(i) = user;

    for (int i = 0 ; i < this->bannedUsers.size(); ++i){
        User bannedUser = this->bannedUsers.at(i);
        if (user.getIp() == bannedUser.getIp()){
            std::vector<User>::iterator it;
            this->bannedUsers.erase(this->bannedUsers.begin()+i);
            break;
        }
    }
}

void UserManager::Move(int iu, std::string channelName)
{
    std::vector<User>::iterator it;
    User user = this->users.at(iu);
    user.setChannelName(channelName);
}

void UserManager::incUsersActual(){
    this->usersActual++;
}

void UserManager::decUsersActual(){
    this->usersActual--;
}

bool UserManager::isLimitReached() const{
    if (this->usersActual <= this->usersLimit)
        return false;
    return true;
}
