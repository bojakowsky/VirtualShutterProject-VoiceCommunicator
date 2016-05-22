#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addchanneldialog.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->serverRunBtn, SIGNAL(released()), this, SLOT(handleSwitch()));
    connect(ui->showUsersConfigBtn, SIGNAL(released()), this, SLOT(showUsersConfig()));
    connect(ui->showChannelsConfigBtn, SIGNAL(released()), this, SLOT(showChannelsConfig()));
    connect(ui->showGeneralConfigBtn, SIGNAL(released()), this, SLOT(showGeneralConfig()));
    connect(ui->showActivitiesConfigBtn, SIGNAL(released()), this, SLOT(showActivitiesConfig()));
    connect(ui->showEventsConfigBtn, SIGNAL(released()), this, SLOT(showEventsConfig()));
    connect(ui->addChannelBtn, SIGNAL(released()), this, SLOT(addChannelShowDialog()));

    ui->usersWidget->hide();
    ui->channelsWidget->hide();
    ui->eventsWidget->hide();
    ui->activitiesWidget->hide();
}



void setAsActive(QPushButton *btn, QIcon whiteicon, QWidget *widget){
  //'background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt "Cantarell";'
    btn->setStyleSheet("background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt;");
    btn->setIcon(whiteicon);
    widget->show();
}

void setAsInactive(QPushButton *btn, QIcon greyicon){
  //'background-color: rgb(130, 131, 131);\ncolor: rgb(255, 255, 255);\nfont: 12pt "Cantarell";'
    btn->setStyleSheet("color: rgb(130, 131, 131);\nfont: 12pt;");
    btn->setIcon(greyicon);
}

void MainWindow::hideAll(){
    ui->activitiesWidget->hide();
    ui->channelsWidget->hide();
    ui->usersWidget->hide();
    ui->generalWidget->hide();
    ui->eventsWidget->hide();

    setAsInactive(ui->showActivitiesConfigBtn, QIcon(":/res/server-icon-06.png"));
    setAsInactive(ui->showGeneralConfigBtn, QIcon(":/res/server-icon-02.png"));
    setAsInactive(ui->showEventsConfigBtn, QIcon(":/res/server-icon-03.png"));
    setAsInactive(ui->showChannelsConfigBtn, QIcon(":/res/server-icon-10.png"));
    setAsInactive(ui->showUsersConfigBtn, QIcon(":/res/server-icon-08.png"));
}

void MainWindow::showActivitiesConfig()
{
    hideAll();
    setAsActive(ui->showActivitiesConfigBtn, QIcon(":/res/server-icon-05.png"), ui->activitiesWidget);
}

void MainWindow::showEventsConfig()
{
    hideAll();
    setAsActive(ui->showEventsConfigBtn, QIcon(":/res/server-icon-04.png"), ui->eventsWidget);
}

void MainWindow::showChannelsConfig()
{

    hideAll();
    setAsActive(ui->showChannelsConfigBtn, QIcon(":/res/server-icon-09.png"), ui->channelsWidget);
}

void MainWindow::showGeneralConfig()
{

    hideAll();
    setAsActive(ui->showGeneralConfigBtn, QIcon(":/res/server-icon-01.png"), ui->generalWidget);
}

void MainWindow::showUsersConfig()
{

    hideAll();
    setAsActive(ui->showUsersConfigBtn, QIcon(":/res/server-icon-07.png"), ui->usersWidget);
}

void MainWindow::handleSwitch()
{
    ui->serverRunBtn->setIcon(QIcon(":/res/switch-off.png"));
}

void MainWindow::addChannelShowDialog()
{

}


MainWindow::~MainWindow()
{
    delete ui;
}
