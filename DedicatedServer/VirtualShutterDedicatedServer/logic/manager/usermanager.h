#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <logic/model/user.h>
#include <stdio.h>
#include <string>
#include <vector>
class UserManager
{
public:
    UserManager();

    void Add(User user);
    void Kick(int i);
    void Ban(int i);
    void Unban(int i);
    void Move(int iu, int ich);

    std::vector<User> getBannedUsers() const;

private:
    std::vector<User> users;
};

#endif // USERMANAGER_H
