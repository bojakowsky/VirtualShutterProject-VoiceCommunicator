#ifndef APPLICATIONMANAGER_H
#define APPLICATIONMANAGER_H

#include <stdio.h>
#include <string>
#include <QHostAddress>
class ApplicationManager
{
public:
    ApplicationManager();
    ~ApplicationManager();

    void CheckServerData();

    std::string getUserName() const;
    void setUserName(const std::string &value);

    QHostAddress getIp_address() const;
    void setIp_address(const QHostAddress &value);

    int getPort() const;
    void setPort(int value);

protected:

private:
    std::string userName;
    QHostAddress ip_address;
    int port;
};


#endif // APPLICATIONMANAGER_H
