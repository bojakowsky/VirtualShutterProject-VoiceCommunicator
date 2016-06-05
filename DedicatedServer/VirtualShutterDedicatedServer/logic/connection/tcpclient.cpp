#include "tcpclient.h"
#include "logic/helper.h"


TCPClient::TCPClient(QObject *parent) : QObject(parent)
{
    QThreadPool::globalInstance()->setMaxThreadCount(32);
}

TCPClient::TCPClient(ChannelsManager *channelMaanger, UserManager *userManager, QObject *parent) : QObject(parent)
{
    QThreadPool::globalInstance()->setMaxThreadCount(32);
    this->channelMaanger = channelMaanger;
    this->userManager = userManager;
}

void TCPClient::SetSocket(int Descriptor)
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    socket->setSocketDescriptor(Descriptor);

}

void TCPClient::connected()
{
    qDebug("client connected");
}

void TCPClient::disconnected()
{
    qDebug("client disconnected");
    ActivitiesManager::AddActivity("Client disconnected: " +socket->peerAddress().toString().toStdString());
    if (userManager->Exist(socket->peerAddress())){
        userManager->Remove(socket->peerAddress());
    }

}

constexpr unsigned int str2int(const char* str, int h = 0)
{
    return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];
}

void TCPClient::readyRead()
{
    //qDebug() << QString::number(socket->peerPort());
    //qDebug() << socket->peerAddress().toString();
    std::vector<std::string> data = Helper::split(socket->readAll().toStdString(), '|');
    std::string action = data.at(0);
    qDebug(action.c_str());
    switch (str2int(action.c_str()))
    {
        case str2int("Hi"):
        {
            User user(socket->peerAddress(), this->sendersPort, data.at(1));
            try
            {
                std::string psswd = data.at(2);
                if (psswd == "@")
                    psswd = "";
                userManager->TryAdd(user, psswd);
                //qDebug(userManager->Get(0).getUserName().c_str());
                socket->write("Hi");
                ActivitiesManager::AddActivity("Client connected: " + socket->peerAddress().toString().toStdString());
            }
            catch(UserManagerException& ex)
            {
                std::string msg(ex.what());
                if (msg == std::string("Server user limit reached")){
                    socket->write("Error|Server user limit reached, sorry");
                    socket->disconnectFromHost();
                }
                else if (msg == std::string("Banned")){
                    socket->write("Banned");
                    EventsManager::AddEvent("Banned user tried to connect: " + socket->peerAddress().toString().toStdString());
                }
                else if (msg == std::string("Wrong server password")){
                    socket->write("Error|Wrong server password, try again");
                    EventsManager::AddEvent("User typed wrong password connecting the server: " + socket->peerAddress().toString().toStdString());
                    socket->disconnectFromHost();
                }
            }
            break;
        }
        case str2int("Move"):
        {
            if (userManager->Exist(socket->peerAddress()))
            {
                if (userManager->IsBanned(socket->peerAddress()))
                {
                    socket->write("Banned");
                    EventsManager::AddEvent("Banned user tried to connect: " + socket->peerAddress().toString().toStdString());
                }
                else{
                    try {
                        std::string channel = data.at(1);
                        std::string password = data.at(2);
                        Channel ch = channelMaanger->TryMove(channel, password, userManager);
                        userManager->Move(socket->peerAddress(), ch.getName());
                        socket->write("MoveOk");
                        ActivitiesManager::AddActivity("Client changed channel: " +socket->peerAddress().toString().toStdString() + " to - " + channel);
                    }
                    catch(ChannelsManagerException& ex)
                    {
                        std::string msg(ex.what());
                        qDebug(msg.c_str());
                        if (msg == std::string("Channel not found"))
                            socket->write("MoveError|Channel not found");
                        else if (msg == std::string("Wrong password"))
                        {
                            socket->write("MoveError|Wrong password");
                            EventsManager::AddEvent("User typed wrong password changing channel: " + socket->peerAddress().toString().toStdString());
                        }
                        else if (msg == std::string("Channel user limit reached"))
                            socket->write("MoveError|Channel user limit reached");
                    }
                }
            }
            else {
                socket->write("Kicked");
                socket->disconnectFromHost();
            }
            break;
        }
        case str2int("Info"):
        {
            if (userManager->Exist(socket->peerAddress())){
                if (userManager->IsBanned(socket->peerAddress())){
                    socket->write("Banned");
                    EventsManager::AddEvent("Banned user tried to connect: " + socket->peerAddress().toString().toStdString());
                }
                else if (userManager->checkIfWasMoved(socket->peerAddress()))
                {
                    socket->write("Move");
                }
                else{
                    ClientTask *task = new ClientTask();
                    task->setManagers(channelMaanger, userManager);
                    task->setAutoDelete(true);
                    connect(task, SIGNAL(Result(QString)), this, SLOT(TaskResult(QString)), Qt::QueuedConnection);
                    QThreadPool::globalInstance()->start(task);
                }
            }
            else {
                socket->write("Kicked");
                socket->disconnectFromHost();
            }
            break;
        }
        default:
            socket->write("UnknownError");
            EventsManager::AddEvent("UnknownError occured in connection between server and " + socket->peerAddress().toString().toStdString());
            socket->disconnectFromHost();
    }
}

void TCPClient::TaskResult(QString Structure)
{
    QByteArray Buffer;
    Buffer.append(QString("Info|") + Structure);
    socket->write(Buffer);
}

void TCPClient::setSendersPort(int value)
{
    sendersPort = value;
}
