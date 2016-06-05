#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <logic/model/user.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <QHostAddress>
class UserManager
{
public:
    UserManager(int usersLimit, std::string serverPassword);

    void Add(User user);
    void TryAdd(User user, std::string password = "");
    User Get(int i);
    bool Exist(QHostAddress address);
    void Remove(QHostAddress address);
    void Kick(int i);
    void Ban(int i);
    bool IsBanned(QHostAddress address);
    void Unban(int i);
    void Move(int iu, std::string channelName);
    void Move(QHostAddress a, std::string channelName);

    std::vector<User> users;
    std::vector<User> bannedUsers;


    void incUsersActual();
    void decUsersActual();
    bool isLimitReached() const;

    void setUsersLimit(int value);
    void setServerPassword(const std::string &value);

    bool checkIfWasMoved(QHostAddress addr);
    void moveAllFromDeletedOrEditedChannel(std::string channelName);

private:
    int usersLimit;
    int usersActual = 0;
    std::string serverPassword;
};

class UserManagerException: public std::exception
{

public:
    virtual const char* what() const throw()
    {
      const char* c_message = this->message.c_str();
      return c_message;
    }


    UserManagerException(std::string message){
        this->message = message;
    }
private:
  std::string message;
};

#endif // USERMANAGER_H
