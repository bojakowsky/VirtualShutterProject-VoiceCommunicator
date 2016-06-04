/********************************************************************************
** Form generated from reading UI file 'conversation.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSATION_H
#define UI_CONVERSATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conversation
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *disconnectButton;
    QPushButton *muteButton;
    QWidget *widget_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *myUsernameLabel;
    QListWidget *conversationList;
    QWidget *widget_3;
    QListWidget *logList;
    QLabel *label_5;
    QLabel *serverInfoLabel;
    QPushButton *moveButton;
    QPushButton *muteUserButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Conversation)
    {
        if (Conversation->objectName().isEmpty())
            Conversation->setObjectName(QStringLiteral("Conversation"));
        Conversation->resize(800, 600);
        centralwidget = new QWidget(Conversation);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 800, 65));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/res/header-long.jpg);"));
        disconnectButton = new QPushButton(centralwidget);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));
        disconnectButton->setGeometry(QRect(604, 15, 181, 35));
        disconnectButton->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/room-icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        disconnectButton->setIcon(icon);
        disconnectButton->setIconSize(QSize(18, 18));
        muteButton = new QPushButton(centralwidget);
        muteButton->setObjectName(QStringLiteral("muteButton"));
        muteButton->setGeometry(QRect(560, 15, 35, 35));
        muteButton->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/room-icon-04.png"), QSize(), QIcon::Normal, QIcon::Off);
        muteButton->setIcon(icon1);
        muteButton->setIconSize(QSize(18, 18));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 65, 800, 40));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 10, 150, 20));
        label->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        graphicsView = new QGraphicsView(widget_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(750, 3, 39, 33));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/res/room-icon-01.png);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        myUsernameLabel = new QLabel(widget_2);
        myUsernameLabel->setObjectName(QStringLiteral("myUsernameLabel"));
        myUsernameLabel->setGeometry(QRect(209, 10, 531, 20));
        myUsernameLabel->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"font: 75 13pt \"Cantarell\";"));
        myUsernameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        conversationList = new QListWidget(centralwidget);
        conversationList->setObjectName(QStringLiteral("conversationList"));
        conversationList->setGeometry(QRect(0, 105, 800, 350));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 455, 800, 95));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        logList = new QListWidget(widget_3);
        logList->setObjectName(QStringLiteral("logList"));
        logList->setGeometry(QRect(0, 30, 800, 65));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 5, 66, 20));
        label_5->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 11pt \"Cantarell\";"));
        serverInfoLabel = new QLabel(widget_3);
        serverInfoLabel->setObjectName(QStringLiteral("serverInfoLabel"));
        serverInfoLabel->setGeometry(QRect(64, 10, 721, 20));
        serverInfoLabel->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 9pt \"Cantarell\";"));
        serverInfoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        moveButton = new QPushButton(centralwidget);
        moveButton->setObjectName(QStringLiteral("moveButton"));
        moveButton->setEnabled(true);
        moveButton->setGeometry(QRect(360, 15, 90, 35));
        moveButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/room-icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveButton->setIcon(icon2);
        moveButton->setIconSize(QSize(18, 18));
        muteUserButton = new QPushButton(centralwidget);
        muteUserButton->setObjectName(QStringLiteral("muteUserButton"));
        muteUserButton->setEnabled(true);
        muteUserButton->setGeometry(QRect(460, 15, 90, 35));
        muteUserButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        muteUserButton->setIcon(icon2);
        muteUserButton->setIconSize(QSize(18, 18));
        Conversation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Conversation);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Conversation->setMenuBar(menubar);
        statusbar = new QStatusBar(Conversation);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Conversation->setStatusBar(statusbar);

        retranslateUi(Conversation);

        QMetaObject::connectSlotsByName(Conversation);
    } // setupUi

    void retranslateUi(QMainWindow *Conversation)
    {
        Conversation->setWindowTitle(QApplication::translate("Conversation", "Conversation", 0));
        disconnectButton->setText(QApplication::translate("Conversation", "DISCONNECT", 0));
        muteButton->setText(QString());
        label->setText(QApplication::translate("Conversation", "CHANNELS: USERS", 0));
        myUsernameLabel->setText(QApplication::translate("Conversation", "Hello, YourUserName", 0));
        label_5->setText(QApplication::translate("Conversation", "LOG", 0));
        serverInfoLabel->setText(QApplication::translate("Conversation", "SERVERNAME - 127.0.0.1:1234", 0));
        moveButton->setText(QApplication::translate("Conversation", "MOVE", 0));
        muteUserButton->setText(QApplication::translate("Conversation", "MUTE", 0));
    } // retranslateUi

};

namespace Ui {
    class Conversation: public Ui_Conversation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSATION_H
