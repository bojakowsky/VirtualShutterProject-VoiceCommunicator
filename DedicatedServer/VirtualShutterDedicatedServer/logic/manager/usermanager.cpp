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
    incUsersActual();
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
            decUsersActual();
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
    decUsersActual();
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

void UserManager::Move(QHostAddress a, std::string channelName)
{
    for (int i = 0 ; i < this->users.size(); ++i){
        if (users.at(i).getIp() == a){
            users.at(i).setChannelName(channelName);
            break;
        }
    }
}

void UserManager::Move(int iu, std::string channelName)
{
    users.at(iu).setChannelName(channelName);
    users.at(iu).setWasMoved(true);
}

void UserManager::incUsersActual(){
    this->usersActual++;
}

void UserManager::decUsersActual(){
    this->usersActual = users.size();
}

bool UserManager::isLimitReached() const{
    qDebug(std::to_string(this->usersActual).c_str());
    qDebug(std::to_string(this->usersLimit).c_str());
    if (this->usersActual + 1 <= this->usersLimit)
        return false;
    return true;
}

void UserManager::setUsersLimit(int value)
{
    usersLimit = value;
}

void UserManager::setServerPassword(const std::string &value)
{
    serverPassword = value;
}

bool UserManager::checkIfWasMoved(QHostAddress addr)
{
    for (int i = 0 ; i < this->users.size(); ++i){
        User user = this->users.at(i);
        if (user.getIp() == addr)
        {
            if (user.getWasMoved())
            {
                user.setWasMoved(false);
                this->users.at(i) = user;
                return true;
            } else return false;
        }
    }
    return true;
}

void UserManager::moveAllFromDeletedOrEditedChannel(std::string channelName)
{
    for (int i = 0 ; i < this->users.size(); ++i){
        User user = this->users.at(i);
        if (user.getChannelName() == channelName)
            Move(i, "Global");
    }
}
