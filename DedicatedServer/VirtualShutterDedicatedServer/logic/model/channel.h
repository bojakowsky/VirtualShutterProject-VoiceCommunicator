#ifndef CHANNEL_H
#define CHANNEL_H
#include <stdio.h>
#include <string>

class Channel
{
public:
    Channel();
    Channel(std::string name, std::string password, int numberOfUsersAllowed);

    std::string getName() const;
    void setName(const std::string &value);

    std::string getPassword() const;
    void setPassword(const std::string &value);

    int getNumberOfUsersAllowed() const;
    void setNumberOfUsersAllowed(int value);

private:
    std::string name;
    std::string password;
    int numberOfUsersAllowed;
};

#endif // CHANNEL_H
