#-------------------------------------------------
#
# Project created by QtCreator 2016-04-23T03:48:10
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VirtualShutterClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    applicationmanager.cpp \
    MainWindow/addeditserverdialog.cpp \
    channellist.cpp \
    conversation.cpp \
    serveritem.cpp \
    tcpclient.cpp \
    udpplayer.cpp \
    udpsender.cpp

HEADERS  += mainwindow.h \
    applicationmanager.h \
    MainWindow/addeditserverdialog.h \
    channellist.h \
    conversation.h \
    serveritem.h \
    tcpclient.h \
    udpplayer.h \
    udpsender.h

FORMS    += mainwindow.ui \
    MainWindow/addeditserverdialog.ui \
    channellist.ui \
    conversation.ui

DISTFILES += \
    res/header.jpg

RESOURCES += \
    res.qrc
