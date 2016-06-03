#-------------------------------------------------
#
# Project created by QtCreator 2016-04-23T03:49:43
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VirtualShutterDedicatedServer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    informdialog.cpp \
    logic/fieldvalidator.cpp \
    logic/manager/activitiesmanager.cpp \
    logic/manager/channelsmanager.cpp \
    logic/manager/connectionmanager.cpp \
    logic/manager/eventsmanager.cpp \
    logic/manager/servermanager.cpp \
    logic/manager/usermanager.cpp \
    logic/model/channel.cpp \
    logic/model/user.cpp \
    channeldialog.cpp \
    logic/connection/clienttask.cpp \
    logic/connection/tcpclient.cpp \
    logic/connection/tcpserver.cpp \
    logic/connection/udpbroadcast.cpp \
    logic/connection/udpplayer.cpp \
    logic/helper.cpp \
    logic/manager/filemanager.cpp

HEADERS  += mainwindow.h \
    informdialog.h \
    logic/fieldvalidator.h \
    logic/manager/activitiesmanager.h \
    logic/manager/channelsmanager.h \
    logic/manager/connectionmanager.h \
    logic/manager/eventsmanager.h \
    logic/manager/servermanager.h \
    logic/manager/usermanager.h \
    logic/model/channel.h \
    logic/model/user.h \
    channeldialog.h \
    logic/connection/clienttask.h \
    logic/connection/tcpclient.h \
    logic/connection/tcpserver.h \
    logic/connection/udpbroadcast.h \
    logic/connection/udpplayer.h \
    logic/helper.h \
    logic/manager/filemanager.h

FORMS    += mainwindow.ui \
    informdialog.ui \
    channeldialog.ui

RESOURCES += \
    resources.qrc

DISTFILES +=
