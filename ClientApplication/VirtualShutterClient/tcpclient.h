#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
class TCPClient : public QObject
{
    Q_OBJECT
public:
    explicit TCPClient(QObject *parent = 0);
    void Connect();
signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();


private:
    QTcpSocket *socket;
};

#endif // TCPCLIENT_H
