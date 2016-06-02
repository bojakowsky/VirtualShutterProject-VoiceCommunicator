/********************************************************************************
** Form generated from reading UI file 'addchanneldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCHANNELDIALOG_H
#define UI_ADDCHANNELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addChannelDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget_5;
    QWidget *widget_6;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFrame *line;
    QWidget *widget_7;
    QWidget *widget_8;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QFrame *line_2;
    QWidget *widget_9;
    QWidget *widget_10;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QFrame *line_3;

    void setupUi(QDialog *addChannelDialog)
    {
        if (addChannelDialog->objectName().isEmpty())
            addChannelDialog->setObjectName(QStringLiteral("addChannelDialog"));
        addChannelDialog->resize(520, 300);
        buttonBox = new QDialogButtonBox(addChannelDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 240, 480, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget_5 = new QWidget(addChannelDialog);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(20, 20, 480, 40));
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
        widget_7 = new QWidget(addChannelDialog);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(20, 70, 480, 40));
        widget_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(0, 0, 180, 40));
        widget_8->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_3 = new QLabel(widget_8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 160, 20));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        lineEdit_2 = new QLineEdit(widget_7);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 0, 280, 30));
        lineEdit_2->setFrame(false);
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_2 = new QFrame(widget_7);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(190, 32, 280, 2));
        line_2->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);
        widget_9 = new QWidget(addChannelDialog);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(20, 120, 480, 40));
        widget_9->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(0, 0, 180, 40));
        widget_10->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        label_4 = new QLabel(widget_10);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 160, 20));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 13pt \"Cantarell\";"));
        lineEdit_3 = new QLineEdit(widget_9);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 0, 280, 30));
        lineEdit_3->setFrame(false);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_3 = new QFrame(widget_9);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(190, 32, 280, 2));
        line_3->setStyleSheet(QStringLiteral("background-color: rgb(130, 131, 131);"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        retranslateUi(addChannelDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), addChannelDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addChannelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(addChannelDialog);
    } // setupUi

    void retranslateUi(QDialog *addChannelDialog)
    {
        addChannelDialog->setWindowTitle(QApplication::translate("addChannelDialog", "Edit channel", 0));
        label_2->setText(QApplication::translate("addChannelDialog", "CHANNEL NAME", 0));
        label_3->setText(QApplication::translate("addChannelDialog", "MAX USERS", 0));
        label_4->setText(QApplication::translate("addChannelDialog", "PASSWORD", 0));
    } // retranslateUi

};

namespace Ui {
    class addChannelDialog: public Ui_addChannelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCHANNELDIALOG_H
