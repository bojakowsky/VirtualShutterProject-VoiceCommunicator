
#ifndef SENDER_H
#define SENDER_H

#include <QDialog>
#include <QHostAddress>

class QDialogButtonBox;
class QLabel;
class QPushButton;
class QTimer;
class QUdpSocket;
class QSpinBox;

class Sender : public QDialog
{
    Q_OBJECT

public:
    Sender(QWidget *parent = 0);

private slots:
    void startSending();
    void sendDatagram();

private:
    QLabel *statusLabel;
    QPushButton *startButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QUdpSocket *udpSocket;
    QTimer *timer;
    QHostAddress clientAddress;
    int messageNo;
};

#endif
