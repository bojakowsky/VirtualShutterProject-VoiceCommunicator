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
INCLUDEPATH += /usr/include/c++/4.6

SOURCES += main.cpp\
        mainwindow.cpp \
    applicationmanager.cpp \
    MainWindow/addeditserverdialog.cpp \
    channellist.cpp \
    conversation.cpp \
    udpplayer.cpp \
    udpsender.cpp \
    tcpclient.cpp

HEADERS  += mainwindow.h \
    applicationmanager.h \
    MainWindow/addeditserverdialog.h \
    channellist.h \
    conversation.h \
    udpplayer.h \
    udpsender.h \
    tcpclient.h

FORMS    += mainwindow.ui \
    MainWindow/addeditserverdialog.ui \
    channellist.ui \
    conversation.ui

DISTFILES += \
    res/header.jpg

RESOURCES += \
    res.qrc
