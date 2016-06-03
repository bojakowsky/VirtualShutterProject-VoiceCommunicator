#include "tcpclient.h"

TCPClient::TCPClient(QObject *parent) : QObject(parent)
{

}

void TCPClient::Connect()
{
    socket = new QTcpSocket(this);

    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));

    QHostAddress addr("192.168.0.100");
    socket->connectToHost(addr, 1234);;
    socket->waitForConnected(30000);
    if (socket->state() == QTcpSocket::ConnectedState)
        qDebug() << "Connected state";
    else qDebug() << "Not connected state";
}

void TCPClient::connected()
{
    qDebug("client connected");
    QByteArray test;
    test.append("Hello|MyNickName");
    socket->write(test);
}

void TCPClient::disconnected()
{
    qDebug("client disconnected");
}

void TCPClient::readyRead()
{
    QString data = socket->readAll();
    if (data == "Kicked!")
        socket->disconnect();
    else if (data == "Banned!") {}
    else if (data == "Hello!") {}
    else {

    }
    socket->write("test");
}

