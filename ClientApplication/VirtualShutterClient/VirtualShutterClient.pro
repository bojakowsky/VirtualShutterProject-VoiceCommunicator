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
    MainWindow/addeditserverdialog.cpp \
    conversation.cpp \
    logic/connection/tcpclient.cpp \
    logic/connection/udpplayer.cpp \
    logic/connection/udpsender.cpp \
    logic/manager/applicationmanager.cpp \
    logic/manager/filesmanager.cpp \
    logic/manager/favouritesmanager.cpp \
    informdialog.cpp \
    logic/fieldvalidator.cpp \
    logic/helper.cpp \
    logic/model/server.cpp \
    logic/operationslogger.cpp \
    inputdialog.cpp


HEADERS  += mainwindow.h \
    MainWindow/addeditserverdialog.h \
    conversation.h \
    logic/connection/tcpclient.h \
    logic/connection/udpplayer.h \
    logic/connection/udpsender.h \
    logic/manager/applicationmanager.h \
    logic/manager/filesmanager.h \
    logic/manager/favouritesmanager.h \
    informdialog.h \
    logic/fieldvalidator.h \
    logic/helper.h \
    logic/model/server.h \
    logic/operationslogger.h \
    inputdialog.h


FORMS    += mainwindow.ui \
    MainWindow/addeditserverdialog.ui \
    conversation.ui \
    informdialog.ui \
    inputdialog.ui

DISTFILES += \
    res/header.jpg

RESOURCES += \
    res.qrc

CONFIG += c++11\
