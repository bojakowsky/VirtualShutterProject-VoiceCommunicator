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
    QWidget *widget_3;
    QWidget *widget_5;
    QWidget *widget_6;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFrame *line;
    QWidget *widget_7;
    QWidget *widget_9;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QFrame *line_3;
    QWidget *widget_10;
    QWidget *widget_11;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QFrame *line_4;
    QWidget *widget_12;
    QWidget *widget_13;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QFrame *line_5;
    QWidget *widget_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(280, 105, 520, 435));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        widget_5 = new QWidget(widget_3);
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
        lineEdit = new QLineEdit(widget_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 0, 280, 30));
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(widget_5);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(190, 32, 280, 2));
        line->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        widget_7 = new QWidget(widget_3);
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
        lineEdit_3 = new QLineEdit(widget_7);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 0, 280, 30));
        lineEdit_3->setFrame(false);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_3 = new QFrame(widget_7);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(190, 32, 280, 2));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);
        widget_10 = new QWidget(widget_3);
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
        lineEdit_4 = new QLineEdit(widget_10);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 0, 280, 30));
        lineEdit_4->setFrame(false);
        lineEdit_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_4 = new QFrame(widget_10);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(190, 32, 280, 2));
        line_4->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);
        widget_12 = new QWidget(widget_3);
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
        lineEdit_5 = new QLineEdit(widget_12);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 0, 280, 30));
        lineEdit_5->setFrame(false);
        lineEdit_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_5 = new QFrame(widget_12);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(190, 32, 280, 2));
        line_5->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 105, 280, 435));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 280, 40));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/server-icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(18, 18));
        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 40, 280, 40));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/server-icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(18, 18));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 80, 280, 40));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/server-icon-06.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(18, 18));
        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 120, 280, 40));
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/server-icon-08.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(18, 18));
        pushButton_5 = new QPushButton(widget_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 160, 280, 40));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 12pt \"Cantarell\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/res/server-icon-10.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(18, 18));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "SERVER CONFIGURATION", 0));
        label_2->setText(QApplication::translate("MainWindow", "SERVER NAME", 0));
        label_4->setText(QApplication::translate("MainWindow", "IP", 0));
        label_5->setText(QApplication::translate("MainWindow", "PORT", 0));
        label_6->setText(QApplication::translate("MainWindow", "USERS LIMIT", 0));
        pushButton->setText(QApplication::translate("MainWindow", "GENERAL", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "EVENTS", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "ACTIVITIES", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "USERS", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "CHANNELS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
