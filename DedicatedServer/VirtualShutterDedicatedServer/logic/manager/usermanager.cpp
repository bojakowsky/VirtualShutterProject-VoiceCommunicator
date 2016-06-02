#include "usermanager.h"

UserManager::UserManager()
{

}

void UserManager::Add(User user)
{
    this->users.push_back(user);
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

}

void UserManager::Unban(int i)
{
    std::vector<User>::iterator it;
    User user = this->users.at(i);
    user.setIsBanned(false);
}

void UserManager::Move(int iu, int ich)
{
    std::vector<User>::iterator it;
    User user = this->users.at(iu);
    user.setChannelId(ich);
}

