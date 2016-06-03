/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label;
    QWidget *generalWidget;
    QWidget *widget_5;
    QWidget *widget_6;
    QLabel *label_2;
    QLineEdit *serverNameEdit;
    QFrame *line;
    QWidget *widget_7;
    QWidget *widget_9;
    QLabel *label_4;
    QLineEdit *ipEdit;
    QFrame *line_3;
    QWidget *widget_10;
    QWidget *widget_11;
    QLabel *label_5;
    QLineEdit *portEdit;
    QFrame *line_4;
    QWidget *widget_12;
    QWidget *widget_13;
    QLabel *label_6;
    QLineEdit *limitEdit;
    QFrame *line_5;
    QPushButton *serverRunBtn;
    QWidget *widget_14;
    QWidget *widget_15;
    QLabel *label_7;
    QLineEdit *passwordEdit;
    QFrame *line_6;
    QWidget *widget_4;
    QPushButton *showGeneralConfigBtn;
    QPushButton *showEventsConfigBtn;
    QPushButton *showActivitiesConfigBtn;
    QPushButton *showUsersConfigBtn;
    QPushButton *showChannelsConfigBtn;
    QWidget *usersWidget;
    QListWidget *usersList;
    QPushButton *kickButton;
    QPushButton *blockButton;
    QPushButton *moveButton;
    QPushButton *unbanButton;
    QWidget *channelsWidget;
    QListWidget *channelsList;
    QPushButton *addChannelBtn;
    QPushButton *editChannelBtn;
    QPushButton *removeChannelBtn;
    QWidget *activitiesWidget;
    QListView *activitiesList;
    QPushButton *pushButton_14;
    QWidget *eventsWidget;
    QListView *eventsList;
    QPushButton *pushButton_15;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 800, 65));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/res/header-long.jpg);"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 65, 800, 40));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 10, 250, 20));
        label->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        generalWidget = new QWidget(centralWidget);
        generalWidget->setObjectName(QStringLiteral("generalWidget"));
        generalWidget->setGeometry(QRect(280, 105, 520, 435));
        generalWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        widget_5 = new QWidget(generalWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(20, 0, 480, 40));
        widget_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 0, 180, 40));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 160, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        serverNameEdit = new QLineEdit(widget_5);
        serverNameEdit->setObjectName(QStringLiteral("serverNameEdit"));
        serverNameEdit->setGeometry(QRect(190, 0, 280, 30));
        serverNameEdit->setFrame(false);
        serverNameEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(widget_5);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(190, 32, 280, 2));
        line->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        widget_7 = new QWidget(generalWidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(20, 40, 480, 40));
        widget_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(0, 0, 180, 40));
        widget_9->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_4 = new QLabel(widget_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 160, 20));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        ipEdit = new QLineEdit(widget_7);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));
        ipEdit->setGeometry(QRect(190, 0, 280, 30));
        ipEdit->setFrame(false);
        ipEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_3 = new QFrame(widget_7);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(190, 32, 280, 2));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);
        widget_10 = new QWidget(generalWidget);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(20, 80, 480, 40));
        widget_10->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setGeometry(QRect(0, 0, 180, 40));
        widget_11->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_5 = new QLabel(widget_11);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 160, 20));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        portEdit = new QLineEdit(widget_10);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setGeometry(QRect(190, 0, 280, 30));
        portEdit->setFrame(false);
        portEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_4 = new QFrame(widget_10);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(190, 32, 280, 2));
        line_4->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);
        widget_12 = new QWidget(generalWidget);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setGeometry(QRect(20, 120, 480, 40));
        widget_12->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setGeometry(QRect(0, 0, 180, 40));
        widget_13->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_6 = new QLabel(widget_13);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 160, 20));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        limitEdit = new QLineEdit(widget_12);
        limitEdit->setObjectName(QStringLiteral("limitEdit"));
        limitEdit->setGeometry(QRect(190, 0, 280, 30));
        limitEdit->setFrame(false);
        limitEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_5 = new QFrame(widget_12);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(190, 32, 280, 2));
        line_5->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);
        serverRunBtn = new QPushButton(generalWidget);
        serverRunBtn->setObjectName(QStringLiteral("serverRunBtn"));
        serverRunBtn->setGeometry(QRect(20, 350, 480, 40));
        serverRunBtn->setStyleSheet(QStringLiteral("color: rgb(82, 83, 83);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/switch-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        serverRunBtn->setIcon(icon);
        serverRunBtn->setIconSize(QSize(30, 30));
        serverRunBtn->setFlat(true);
        widget_14 = new QWidget(generalWidget);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        widget_14->setGeometry(QRect(20, 160, 480, 40));
        widget_14->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_15 = new QWidget(widget_14);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        widget_15->setGeometry(QRect(0, 0, 180, 40));
        widget_15->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_7 = new QLabel(widget_15);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 160, 20));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        passwordEdit = new QLineEdit(widget_14);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(190, 0, 280, 30));
        passwordEdit->setFrame(false);
        passwordEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_6 = new QFrame(widget_14);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(190, 32, 280, 2));
        line_6->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setFrameShape(QFrame::HLine);
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 105, 280, 435));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        showGeneralConfigBtn = new QPushButton(widget_4);
        showGeneralConfigBtn->setObjectName(QStringLiteral("showGeneralConfigBtn"));
        showGeneralConfigBtn->setGeometry(QRect(0, 0, 280, 40));
        showGeneralConfigBtn->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/server-icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        showGeneralConfigBtn->setIcon(icon1);
        showGeneralConfigBtn->setIconSize(QSize(18, 18));
        showEventsConfigBtn = new QPushButton(widget_4);
        showEventsConfigBtn->setObjectName(QStringLiteral("showEventsConfigBtn"));
        showEventsConfigBtn->setGeometry(QRect(0, 40, 280, 40));
        showEventsConfigBtn->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/server-icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        showEventsConfigBtn->setIcon(icon2);
        showEventsConfigBtn->setIconSize(QSize(18, 18));
        showActivitiesConfigBtn = new QPushButton(widget_4);
        showActivitiesConfigBtn->setObjectName(QStringLiteral("showActivitiesConfigBtn"));
        showActivitiesConfigBtn->setGeometry(QRect(0, 80, 280, 40));
        showActivitiesConfigBtn->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/server-icon-06.png"), QSize(), QIcon::Normal, QIcon::Off);
        showActivitiesConfigBtn->setIcon(icon3);
        showActivitiesConfigBtn->setIconSize(QSize(18, 18));
        showUsersConfigBtn = new QPushButton(widget_4);
        showUsersConfigBtn->setObjectName(QStringLiteral("showUsersConfigBtn"));
        showUsersConfigBtn->setGeometry(QRect(0, 120, 280, 40));
        showUsersConfigBtn->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/server-icon-08.png"), QSize(), QIcon::Normal, QIcon::Off);
        showUsersConfigBtn->setIcon(icon4);
        showUsersConfigBtn->setIconSize(QSize(18, 18));
        showChannelsConfigBtn = new QPushButton(widget_4);
        showChannelsConfigBtn->setObjectName(QStringLiteral("showChannelsConfigBtn"));
        showChannelsConfigBtn->setGeometry(QRect(0, 160, 280, 40));
        showChannelsConfigBtn->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/res/server-icon-10.png"), QSize(), QIcon::Normal, QIcon::Off);
        showChannelsConfigBtn->setIcon(icon5);
        showChannelsConfigBtn->setIconSize(QSize(18, 18));
        usersWidget = new QWidget(centralWidget);
        usersWidget->setObjectName(QStringLiteral("usersWidget"));
        usersWidget->setGeometry(QRect(280, 105, 520, 435));
        usersWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        usersList = new QListWidget(usersWidget);
        usersList->setObjectName(QStringLiteral("usersList"));
        usersList->setGeometry(QRect(20, 0, 480, 360));
        usersList->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        usersList->setFrameShape(QFrame::NoFrame);
        usersList->setFrameShadow(QFrame::Plain);
        kickButton = new QPushButton(usersWidget);
        kickButton->setObjectName(QStringLiteral("kickButton"));
        kickButton->setEnabled(true);
        kickButton->setGeometry(QRect(20, 380, 111, 40));
        kickButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);"));
        blockButton = new QPushButton(usersWidget);
        blockButton->setObjectName(QStringLiteral("blockButton"));
        blockButton->setGeometry(QRect(140, 380, 111, 40));
        blockButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);"));
        moveButton = new QPushButton(usersWidget);
        moveButton->setObjectName(QStringLiteral("moveButton"));
        moveButton->setGeometry(QRect(380, 380, 111, 40));
        moveButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);"));
        unbanButton = new QPushButton(usersWidget);
        unbanButton->setObjectName(QStringLiteral("unbanButton"));
        unbanButton->setGeometry(QRect(260, 380, 111, 40));
        unbanButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);"));
        channelsWidget = new QWidget(centralWidget);
        channelsWidget->setObjectName(QStringLiteral("channelsWidget"));
        channelsWidget->setGeometry(QRect(280, 105, 520, 435));
        channelsWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        channelsList = new QListWidget(channelsWidget);
        channelsList->setObjectName(QStringLiteral("channelsList"));
        channelsList->setEnabled(true);
        channelsList->setGeometry(QRect(20, 0, 480, 360));
        channelsList->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        channelsList->setFrameShape(QFrame::NoFrame);
        channelsList->setFrameShadow(QFrame::Plain);
        addChannelBtn = new QPushButton(channelsWidget);
        addChannelBtn->setObjectName(QStringLiteral("addChannelBtn"));
        addChannelBtn->setGeometry(QRect(20, 380, 150, 40));
        addChannelBtn->setStyleSheet(QLatin1String("background-color: rgb(0, 157, 135);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/res/icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        addChannelBtn->setIcon(icon6);
        addChannelBtn->setIconSize(QSize(18, 18));
        editChannelBtn = new QPushButton(channelsWidget);
        editChannelBtn->setObjectName(QStringLiteral("editChannelBtn"));
        editChannelBtn->setGeometry(QRect(185, 380, 150, 40));
        editChannelBtn->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/res/icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        editChannelBtn->setIcon(icon7);
        editChannelBtn->setIconSize(QSize(18, 18));
        removeChannelBtn = new QPushButton(channelsWidget);
        removeChannelBtn->setObjectName(QStringLiteral("removeChannelBtn"));
        removeChannelBtn->setGeometry(QRect(350, 380, 150, 40));
        removeChannelBtn->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/res/icon-02.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeChannelBtn->setIcon(icon8);
        removeChannelBtn->setIconSize(QSize(18, 18));
        activitiesWidget = new QWidget(centralWidget);
        activitiesWidget->setObjectName(QStringLiteral("activitiesWidget"));
        activitiesWidget->setGeometry(QRect(280, 105, 520, 435));
        activitiesWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        activitiesList = new QListView(activitiesWidget);
        activitiesList->setObjectName(QStringLiteral("activitiesList"));
        activitiesList->setGeometry(QRect(20, 0, 480, 360));
        activitiesList->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        activitiesList->setFrameShape(QFrame::NoFrame);
        activitiesList->setFrameShadow(QFrame::Plain);
        pushButton_14 = new QPushButton(activitiesWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(350, 380, 150, 40));
        pushButton_14->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"color: rgb(255, 255, 255);"));
        pushButton_14->setIcon(icon8);
        pushButton_14->setIconSize(QSize(18, 18));
        eventsWidget = new QWidget(centralWidget);
        eventsWidget->setObjectName(QStringLiteral("eventsWidget"));
        eventsWidget->setGeometry(QRect(280, 105, 520, 435));
        eventsWidget->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        eventsList = new QListView(eventsWidget);
        eventsList->setObjectName(QStringLiteral("eventsList"));
        eventsList->setGeometry(QRect(20, 0, 480, 360));
        eventsList->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        eventsList->setFrameShape(QFrame::NoFrame);
        eventsList->setFrameShadow(QFrame::Plain);
        pushButton_15 = new QPushButton(eventsWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(350, 380, 150, 40));
        pushButton_15->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"color: rgb(255, 255, 255);"));
        pushButton_15->setIcon(icon8);
        pushButton_15->setIconSize(QSize(18, 18));
        MainWindow->setCentralWidget(centralWidget);
        widget->raise();
        widget_2->raise();
        widget_4->raise();
        activitiesWidget->raise();
        eventsWidget->raise();
        generalWidget->raise();
        channelsWidget->raise();
        usersWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Server configuration", 0));
        label->setText(QApplication::translate("MainWindow", "SERVER CONFIGURATION", 0));
        label_2->setText(QApplication::translate("MainWindow", "SERVER NAME", 0));
        label_4->setText(QApplication::translate("MainWindow", "IP", 0));
        label_5->setText(QApplication::translate("MainWindow", "PORT", 0));
        label_6->setText(QApplication::translate("MainWindow", "USERS LIMIT", 0));
        serverRunBtn->setText(QApplication::translate("MainWindow", "SERVER RUNNING", 0));
        label_7->setText(QApplication::translate("MainWindow", "PASSWORD", 0));
        showGeneralConfigBtn->setText(QApplication::translate("MainWindow", "GENERAL", 0));
        showEventsConfigBtn->setText(QApplication::translate("MainWindow", "EVENTS", 0));
        showActivitiesConfigBtn->setText(QApplication::translate("MainWindow", "ACTIVITIES", 0));
        showUsersConfigBtn->setText(QApplication::translate("MainWindow", "USERS", 0));
        showChannelsConfigBtn->setText(QApplication::translate("MainWindow", "CHANNELS", 0));
        kickButton->setText(QApplication::translate("MainWindow", "Kick", 0));
        blockButton->setText(QApplication::translate("MainWindow", "Ban", 0));
        moveButton->setText(QApplication::translate("MainWindow", "Move", 0));
        unbanButton->setText(QApplication::translate("MainWindow", "Unban", 0));
        addChannelBtn->setText(QApplication::translate("MainWindow", "Add", 0));
        editChannelBtn->setText(QApplication::translate("MainWindow", "Edit", 0));
        removeChannelBtn->setText(QApplication::translate("MainWindow", "Remove", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "Clear", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
