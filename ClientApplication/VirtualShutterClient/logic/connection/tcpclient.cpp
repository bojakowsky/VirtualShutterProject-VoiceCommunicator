#include "tcpclient.h"

TCPClient::TCPClient(QObject *parent) : QObject(parent)
{

}

TCPClient::~TCPClient()
{
    qDebug("TCPClient dead");

    //OperationsLogger::write("Info", "Disconnected from server", list);
    //socket->disconnectFromHost();
    socket->disconnect();
    delete socket;
    socket = 0;
}

void TCPClient::Connect(QHostAddress address, int port, std::string nickname, std::string password)
{
    this->address = address;
    this->port = port;
    socket = new QTcpSocket(this);
    this->nickname = nickname;
    this->password = password;

    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    socket->connectToHost(address, port);
    socket->waitForConnected(5000);
    if (socket->state() == QTcpSocket::ConnectedState){
        qDebug() << "Connected state";
        infoTimer = new QTimer(this);
        connect(infoTimer, SIGNAL(timeout()), this, SLOT(info()));
        infoTimer->start(1500);
    }
    else{
        OperationsLogger::write("Info", "Connection has not been made - can't reach destination address", list);
        qDebug() << "Not connected state";
    }
}
void TCPClient::Disconnect()
{
    if (socket){
        socket->disconnectFromHost();
        socket->close();
        delete socket;
        socket = NULL;
    }

    if (infoTimer){
        delete infoTimer;
        infoTimer = NULL;
    }

}

void TCPClient::connected()
{
    OperationsLogger::write("Info", "Connected to server", list);
    qDebug("client connected");
    QByteArray init;
    if (this->password == "") this->password = "@";
    std::string initStr = "Hi|" + this->nickname + "|" + this->password;
    init.append(initStr.c_str());
    socket->write(init);
}

void TCPClient::disconnected()
{
    qDebug("client disconnected");
    OperationsLogger::write("Info", "You have been disconnect", list);
    udpSender->setIsMicMuted(true);
    udpPlayer->setIsPlayerMuted(true);
    clear();
}

void TCPClient::readyRead()
{
    QString data = socket->readAll();
    qDebug() << data;
    if (data == "Kicked"){
        OperationsLogger::write("Kicked", "You have been kicked from server", list);
        socket->disconnectFromHost();
    }
    else if (data == "Banned") {
        OperationsLogger::write("Banned", "You have been banned on server", list);
        clear();
    }
    else if (data == "Hi") {
        OperationsLogger::write("Hi", "Welcome to the server", list);
        udpSender->Connect(address, port);
        udpPlayer->Listen(udpSender->getLocalAddress(), port-1);

    }
    else if (data == "UnknownError"){
        OperationsLogger::write("UnknownError", "Unknown error occured", list);
    }
    else if (data == "MoveOk"){
        OperationsLogger::write("MoveOk", "You have moved to another channel", list);
    }
    else if (data == "Move"){
        OperationsLogger::write("Move", "You have been moved to global channel", list);
    }
    else {
        std::vector<std::string> info = Helper::split(data.toStdString(), '|');
        if (info.at(0) == "Info"){
            conversationData = Helper::split(info.at(1), '!');
        }
        else if (info.at(0) == "MoveError"){
            OperationsLogger::write("MoveError", QString::fromStdString(info.at(1)),list);
        }
        else if (info.at(0) == "Error"){
            OperationsLogger::write("Error", QString::fromStdString(info.at(1)), list);
        }
    }
    //socket->write("test");
}

void TCPClient::info()
{
    socket->write("Info");
}

void TCPClient::setUdpSender(UdpSender *value)
{
    udpSender = value;
}

void TCPClient::setUdpPlayer(UDPPlayer *value)
{
    udpPlayer = value;
}

QListWidget *TCPClient::getList() const
{
    return list;
}

void TCPClient::setList(QListWidget *value)
{
    list = value;
}

std::vector<std::string> TCPClient::getConversationData() const
{
    return conversationData;
}

void TCPClient::clear()
{
    conversationData.clear();
}

void TCPClient::move(std::string channelName, std::string password)
{
    if (password == "") password = "@";
    std::string msg = "Move|" + channelName + "|" + password;
    socket->write(msg.c_str());
}

