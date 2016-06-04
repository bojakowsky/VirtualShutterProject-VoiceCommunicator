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
    QPushButton *addServerButton;
    QPushButton *removeServerButton;
    QPushButton *editServerButton;
    QPushButton *connectToServerButton;
    QWidget *widget_3;
    QLabel *label;
    QListWidget *serverList;
    QLineEdit *nicknameLineEdit;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 492);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 540, 65));
        widget->setStyleSheet(QStringLiteral("background-image: url(:/images/res/smalle-header.jpg);"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(540, 0, 260, 430));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        addServerButton = new QPushButton(widget_2);
        addServerButton->setObjectName(QStringLiteral("addServerButton"));
        addServerButton->setGeometry(QRect(22, 20, 215, 40));
        addServerButton->setCursor(QCursor(Qt::PointingHandCursor));
        addServerButton->setStyleSheet(QLatin1String("background-color: rgb(0, 157, 135);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        addServerButton->setIcon(icon);
        addServerButton->setIconSize(QSize(18, 18));
        addServerButton->setAutoDefault(false);
        addServerButton->setFlat(false);
        removeServerButton = new QPushButton(widget_2);
        removeServerButton->setObjectName(QStringLiteral("removeServerButton"));
        removeServerButton->setGeometry(QRect(22, 70, 215, 40));
        removeServerButton->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/icon-02.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeServerButton->setIcon(icon1);
        removeServerButton->setIconSize(QSize(18, 18));
        editServerButton = new QPushButton(widget_2);
        editServerButton->setObjectName(QStringLiteral("editServerButton"));
        editServerButton->setGeometry(QRect(22, 120, 215, 40));
        editServerButton->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/icon-01.png"), QSize(), QIcon::Normal, QIcon::Off);
        editServerButton->setIcon(icon2);
        editServerButton->setIconSize(QSize(18, 18));
        connectToServerButton = new QPushButton(widget_2);
        connectToServerButton->setObjectName(QStringLiteral("connectToServerButton"));
        connectToServerButton->setGeometry(QRect(0, 390, 260, 40));
        connectToServerButton->setFocusPolicy(Qt::NoFocus);
        connectToServerButton->setStyleSheet(QLatin1String("background-color: rgb(0, 157, 135);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/res/connect-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        connectToServerButton->setIcon(icon3);
        connectToServerButton->setIconSize(QSize(18, 18));
        connectToServerButton->setAutoExclusive(false);
        connectToServerButton->setFlat(false);
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 65, 540, 41));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 161, 20));
        label->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        serverList = new QListWidget(centralWidget);
        serverList->setObjectName(QStringLiteral("serverList"));
        serverList->setGeometry(QRect(0, 109, 540, 321));
        nicknameLineEdit = new QLineEdit(centralWidget);
        nicknameLineEdit->setObjectName(QStringLiteral("nicknameLineEdit"));
        nicknameLineEdit->setGeometry(QRect(295, 15, 231, 35));
        nicknameLineEdit->setAutoFillBackground(false);
        nicknameLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        nicknameLineEdit->setInputMask(QStringLiteral(""));
        nicknameLineEdit->setText(QStringLiteral(""));
        nicknameLineEdit->setFrame(false);
        nicknameLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(295, 50, 231, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        serverList->raise();
        widget->raise();
        widget_2->raise();
        widget_3->raise();
        nicknameLineEdit->raise();
        line->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuBar->setStyleSheet(QStringLiteral(""));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral(""));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        addServerButton->setDefault(false);
        connectToServerButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VirtualShutter", 0));
        addServerButton->setText(QApplication::translate("MainWindow", "ADD", 0));
        removeServerButton->setText(QApplication::translate("MainWindow", "REMOVE", 0));
        editServerButton->setText(QApplication::translate("MainWindow", "EDIT", 0));
        connectToServerButton->setText(QApplication::translate("MainWindow", "CONNECT", 0));
        label->setText(QApplication::translate("MainWindow", "SERVERS LIST", 0));
        nicknameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "TYPE NICKNAME", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
