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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget_3;
    QListView *listView;
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
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(22, 20, 215, 40));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(0, 157, 135);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(22, 70, 215, 40));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(214, 83, 81);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(22, 120, 215, 40));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(130, 131, 131);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 390, 260, 40));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(0, 157, 135);\n"
"selection-background-color: rgb(0, 156, 134);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 255, 255, 0);"));
        pushButton_4->setFlat(false);
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 65, 540, 40));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 105, 540, 325));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
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

        pushButton->setDefault(false);
        pushButton_4->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VirtualShutter", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ADD", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "REMOVE", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "EDIT", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "CONNECT", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
