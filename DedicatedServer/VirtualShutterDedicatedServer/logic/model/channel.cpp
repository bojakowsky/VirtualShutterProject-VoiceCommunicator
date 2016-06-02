#include "channel.h"

Channel::Channel()
{

}

Channel::Channel(std::string name, std::string password, int numberOfUsersAllowed)
{
    this->setName(name);
    this->setPassword(password);
    this->setNumberOfUsersAllowed(numberOfUsersAllowed);
}

std::string Channel::getName() const
{
    return name;
}

void Channel::setName(const std::string &value)
{
    name = value;
}

std::string Channel::getPassword() const
{
    return password;
}

void Channel::setPassword(const std::string &value)
{
    password = value;
}

int Channel::getNumberOfUsersAllowed() const
{
    return numberOfUsersAllowed;
}

void Channel::setNumberOfUsersAllowed(int value)
{
    numberOfUsersAllowed = value;
}
