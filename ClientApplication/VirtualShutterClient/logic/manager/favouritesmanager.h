#ifndef FAVOURITESMANAGER_H
#define FAVOURITESMANAGER_H
#include "logic/model/server.h"
#include <vector>
#include <string>
#include "logic/helper.h"
#include "logic/manager/filesmanager.h"
#include "logic/fieldvalidator.h"
class FavouritesManager
{
public:
    FavouritesManager();
    ~FavouritesManager();

    void AddServer(Server server);
    void RemoveServer(int i);
    void UpdateServer(int i, Server server);
    Server Get(int i);

    void SaveServerList();
    std::string ServerAsString(Server server, bool isPassword = false);
    void LoadServerListFromServerListAsString(std::vector<std::string> vect);
    std::vector<Server> getServersList() const;

    std::vector<std::string> getServerListAsString() const;
    void setServerListAsString(const std::vector<std::string> &value);

private:
    std::vector<Server> serversList;
    std::vector<std::string> serverListAsString;

    FilesManager *filesManager = 0;


};

#endif // FAVOURITESMANAGER_H
