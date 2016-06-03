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
#include <QtWidgets/QListView>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_3;
    QListView *listView;
    QWidget *widget_3;
    QListWidget *listWidget;
    QLabel *label_5;
    QLabel *label_2;
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 15, 215, 35));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/room-icon-03.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(18, 18));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 15, 35, 35));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/room-icon-04.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(18, 18));
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
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 10, 150, 19));
        label_3->setStyleSheet(QLatin1String("color: rgb(255,255,255);\n"
"font: 75 13pt \"Cantarell\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 105, 800, 350));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 455, 800, 95));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 30, 800, 65));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 5, 66, 20));
        label_5->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 11pt \"Cantarell\";"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 10, 215, 20));
        label_2->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 9pt \"Cantarell\";"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Conversation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Conversation);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Conversation->setMenuBar(menubar);
        statusbar = new QStatusBar(Conversation);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Conversation->setStatusBar(statusbar);

        retranslateUi(Conversation);

        QMetaObject::connectSlotsByName(Conversation);
    } // setupUi

    void retranslateUi(QMainWindow *Conversation)
    {
        Conversation->setWindowTitle(QApplication::translate("Conversation", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Conversation", "DISCONNECT", 0));
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("Conversation", "CHANNEL NAME", 0));
        label_3->setText(QApplication::translate("Conversation", "0/36", 0));
        label_5->setText(QApplication::translate("Conversation", "LOG", 0));
        label_2->setText(QApplication::translate("Conversation", "SERVERNAME - 127.0.0.1:1234", 0));
    } // retranslateUi

};

namespace Ui {
    class Conversation: public Ui_Conversation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSATION_H
