#ifndef SERVERITEM_H
#define SERVERITEM_H


class ServerItem
{
public:
    ServerItem();
    ServerItem(std::string name, int octet1, int octet2, int octet3, int octet4, int port);

    std::string getName() const;
    void setName(const std::string &value);

    int getIp() const;
    void setIp(int ip[]);

    int getPort() const;
    void setPort(int value);

private:
    std::string name;
    int octet1;
    int octet2;
    int octet3;
    int octet4;
    int port;
};

#endif // SERVERITEM_H
