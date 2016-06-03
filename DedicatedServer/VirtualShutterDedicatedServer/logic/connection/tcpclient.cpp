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
    switch (str2int(action.c_str()))
    {
        case str2int("Hi"):
        {
            User user(socket->peerAddress(), 1234, data.at(1));
            try
            {

                userManager->TryAdd(user, data.at(2));
                qDebug(userManager->Get(0).getUserName().c_str());
                socket->write("Hi");
            }
            catch(const UserManagerException& ex)
            {
                if (ex.what() == "Server user limit reached"){
                    socket->write(ex.what());
                    socket->disconnect();
                }
                else if (ex.what() == "Banned"){
                    socket->write("Banned");
                }
                else if (ex.what() == "Wrong server password"){
                    socket->write(ex.what());
                    socket->disconnect();
                }
            }
            break;
        }
        case str2int("Move"):
        {
            if (userManager->Exist(socket->peerAddress()))
            {
                if (userManager->IsBanned(socket->peerAddress()))
                    socket->write("Banned");
                else{
                    try {
                        std::string channel = data.at(1);
                        std::string password = data.at(2);
                        Channel ch = channelMaanger->TryGet(channel, password, userManager);
                        socket->write("MoveOk");
                    }
                    catch(const ChannelsManagerException &ex)
                    {
                        if (ex.what() == "Channel not found")
                            socket->write("MoveError|Channel not found");
                        else if (ex.what() == "Wrong password")
                            socket->write("MoveError|Wrong password");
                        else if (ex.what() == "Channel user limit reached")
                            socket->write("MoveError|Channel user limit reached");
                    }
                }
            }
            else {
                socket->write("Kicked");
                socket->disconnect();
            }
            break;
        }
        case str2int("Info"):
        {
            if (userManager->Exist(socket->peerAddress())){
                if (userManager->IsBanned(socket->peerAddress()))
                    socket->write("Banned");
                else{
                    ClientTask *task = new ClientTask();
                    task->setManagers(channelMaanger, userManager);
                    task->setAutoDelete(true);
                    connect(task, SIGNAL(Result(std::string)), this, SLOT(TaskResult(std::string)), Qt::QueuedConnection);
                    QThreadPool::globalInstance()->start(task);
                }
            }
            else {
                socket->write("Kicked");
                socket->disconnect();
            }
            break;
        }
        default:
            socket->write("UnknownError");
            socket->disconnect();
    }
}

void TCPClient::TaskResult(std::string Structure)
{
    QByteArray Buffer;
    Buffer.append(QString::fromStdString(Structure));
    socket->write(Buffer);
}
