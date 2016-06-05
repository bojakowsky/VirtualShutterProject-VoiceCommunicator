#include "favouritesmanager.h"

FavouritesManager::FavouritesManager()
{
    filesManager = new FilesManager();
    LoadServerListFromServerListAsString(filesManager->ReadFromFile());
}

FavouritesManager::~FavouritesManager()
{
    SaveServerList();
    filesManager->SaveToFile(serverListAsString);
    delete filesManager;
    qDebug("FavouritesManager dead");
}

void FavouritesManager::AddServer(Server server)
{
    serversList.push_back(server);
}

void FavouritesManager::RemoveServer(int i)
{
    //std::vector<Server>::iterator it;
    serversList.erase(serversList.begin()+i);
}

void FavouritesManager::UpdateServer(int i, Server server)
{
    serversList.at(i) = server;
}

Server FavouritesManager::Get(int i)
{
    qDebug(serversList.at(i).getPassword().c_str());
    return serversList.at(i);
}

void FavouritesManager::SaveServerList()
{
    serverListAsString.clear();
    for (int i = 0 ; i < serversList.size(); ++i)
    {
        Server srv = serversList.at(i);
        std::string srvString = ServerAsString(srv, true);
        serverListAsString.push_back(srvString);
    }
}

std::string FavouritesManager::ServerAsString(Server server, bool isPassword)
{
    std::string srvString = server.getIp().toString().toStdString() +
            ":" + std::to_string(server.getPort()) + " " + server.getName();
    if (isPassword){
        srvString = srvString + " " + server.getPassword();
    }
    return srvString;
}

void FavouritesManager::LoadServerListFromServerListAsString(std::vector<std::string> vect)
{
    serversList.clear();
    for (int i = 0; i < vect.size(); ++i)
    {
        std::string buf = vect.at(i);
        if (buf == "empty") break;
        std::vector<std::string> vecBuf = Helper::split(buf, ':');
        QHostAddress addr(vecBuf.at(0).c_str());
        std::vector<std::string> vecBuf2 = Helper::split(vecBuf.at(1), ' ');
        int port = std::stoi(vecBuf2.at(0));
        std::string serverName = vecBuf2.at(1);

        std::string password = "";
        if (vecBuf2.size() == 3)
            password = vecBuf2.at(2);
        Server serv(serverName, addr, port, password);
        serversList.push_back(serv);

        serverListAsString.push_back(ServerAsString(serv));
    }
}

std::vector<Server> FavouritesManager::getServersList() const
{
    return serversList;
}

std::vector<std::string> FavouritesManager::getServerListAsString() const
{
    return serverListAsString;
}


void FavouritesManager::setServerListAsString(const std::vector<std::string> &value)
{
    serverListAsString = value;
}


