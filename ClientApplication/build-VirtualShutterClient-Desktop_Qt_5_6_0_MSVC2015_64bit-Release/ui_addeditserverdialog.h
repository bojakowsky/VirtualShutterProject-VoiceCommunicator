/********************************************************************************
** Form generated from reading UI file 'addeditserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITSERVERDIALOG_H
#define UI_ADDEDITSERVERDIALOG_H

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

class Ui_AddEditServerDialog
{
public:
    QWidget *widget_2;
    QLabel *label_4;
    QWidget *widget_3;
    QLabel *label_6;
    QWidget *octet1Widget;
    QLineEdit *octet1;
    QFrame *octet1line;
    QWidget *widget_5;
    QLineEdit *serverNameLineEdit;
    QFrame *line_3;
    QWidget *octet2Widget;
    QLineEdit *octet1_2;
    QFrame *octet1line_2;
    QWidget *octet3Widge;
    QLineEdit *octet1_3;
    QFrame *octet1line_3;
    QWidget *octet2Widget_2;
    QLineEdit *octet1_4;
    QFrame *octet1line_4;
    QWidget *widget_4;
    QLabel *label_8;
    QWidget *widget_6;
    QLineEdit *portLineEdit;
    QFrame *line_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditServerDialog)
    {
        if (AddEditServerDialog->objectName().isEmpty())
            AddEditServerDialog->setObjectName(QStringLiteral("AddEditServerDialog"));
        AddEditServerDialog->resize(350, 320);
        AddEditServerDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        widget_2 = new QWidget(AddEditServerDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 350, 40));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 330, 20));
        label_4->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        widget_3 = new QWidget(AddEditServerDialog);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 90, 350, 40));
        widget_3->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 330, 20));
        label_6->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        octet1Widget = new QWidget(AddEditServerDialog);
        octet1Widget->setObjectName(QStringLiteral("octet1Widget"));
        octet1Widget->setGeometry(QRect(0, 130, 70, 50));
        octet1 = new QLineEdit(octet1Widget);
        octet1->setObjectName(QStringLiteral("octet1"));
        octet1->setGeometry(QRect(5, 5, 60, 35));
        octet1->setAutoFillBackground(false);
        octet1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        octet1->setInputMask(QStringLiteral(""));
        octet1->setText(QStringLiteral(""));
        octet1->setFrame(false);
        octet1->setCursorPosition(0);
        octet1line = new QFrame(octet1Widget);
        octet1line->setObjectName(QStringLiteral("octet1line"));
        octet1line->setGeometry(QRect(5, 40, 60, 5));
        octet1line->setFrameShape(QFrame::HLine);
        octet1line->setFrameShadow(QFrame::Sunken);
        widget_5 = new QWidget(AddEditServerDialog);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(0, 40, 350, 50));
        serverNameLineEdit = new QLineEdit(widget_5);
        serverNameLineEdit->setObjectName(QStringLiteral("serverNameLineEdit"));
        serverNameLineEdit->setGeometry(QRect(10, 5, 330, 35));
        serverNameLineEdit->setFocusPolicy(Qt::StrongFocus);
        serverNameLineEdit->setAutoFillBackground(false);
        serverNameLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        serverNameLineEdit->setInputMask(QStringLiteral(""));
        serverNameLineEdit->setText(QStringLiteral(""));
        serverNameLineEdit->setFrame(false);
        line_3 = new QFrame(widget_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 40, 330, 5));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->raise();
        serverNameLineEdit->raise();
        octet2Widget = new QWidget(AddEditServerDialog);
        octet2Widget->setObjectName(QStringLiteral("octet2Widget"));
        octet2Widget->setGeometry(QRect(70, 130, 70, 50));
        octet1_2 = new QLineEdit(octet2Widget);
        octet1_2->setObjectName(QStringLiteral("octet1_2"));
        octet1_2->setGeometry(QRect(5, 5, 60, 35));
        octet1_2->setAutoFillBackground(false);
        octet1_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        octet1_2->setInputMask(QStringLiteral(""));
        octet1_2->setText(QStringLiteral(""));
        octet1_2->setFrame(false);
        octet1line_2 = new QFrame(octet2Widget);
        octet1line_2->setObjectName(QStringLiteral("octet1line_2"));
        octet1line_2->setGeometry(QRect(5, 40, 60, 5));
        octet1line_2->setFrameShape(QFrame::HLine);
        octet1line_2->setFrameShadow(QFrame::Sunken);
        octet3Widge = new QWidget(AddEditServerDialog);
        octet3Widge->setObjectName(QStringLiteral("octet3Widge"));
        octet3Widge->setGeometry(QRect(140, 130, 70, 50));
        octet1_3 = new QLineEdit(octet3Widge);
        octet1_3->setObjectName(QStringLiteral("octet1_3"));
        octet1_3->setGeometry(QRect(5, 5, 60, 35));
        octet1_3->setAutoFillBackground(false);
        octet1_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        octet1_3->setInputMask(QStringLiteral(""));
        octet1_3->setText(QStringLiteral(""));
        octet1_3->setFrame(false);
        octet1line_3 = new QFrame(octet3Widge);
        octet1line_3->setObjectName(QStringLiteral("octet1line_3"));
        octet1line_3->setGeometry(QRect(5, 40, 60, 5));
        octet1line_3->setFrameShape(QFrame::HLine);
        octet1line_3->setFrameShadow(QFrame::Sunken);
        octet2Widget_2 = new QWidget(AddEditServerDialog);
        octet2Widget_2->setObjectName(QStringLiteral("octet2Widget_2"));
        octet2Widget_2->setGeometry(QRect(210, 130, 70, 50));
        octet1_4 = new QLineEdit(octet2Widget_2);
        octet1_4->setObjectName(QStringLiteral("octet1_4"));
        octet1_4->setGeometry(QRect(5, 5, 60, 35));
        octet1_4->setAutoFillBackground(false);
        octet1_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        octet1_4->setInputMask(QStringLiteral(""));
        octet1_4->setText(QStringLiteral(""));
        octet1_4->setFrame(false);
        octet1line_4 = new QFrame(octet2Widget_2);
        octet1line_4->setObjectName(QStringLiteral("octet1line_4"));
        octet1line_4->setGeometry(QRect(5, 40, 60, 5));
        octet1line_4->setFrameShape(QFrame::HLine);
        octet1line_4->setFrameShadow(QFrame::Sunken);
        widget_4 = new QWidget(AddEditServerDialog);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(0, 175, 350, 40));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(221, 220, 220);"));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 330, 20));
        label_8->setStyleSheet(QLatin1String("color: rgb(130, 131, 131);\n"
"font: 75 13pt \"Cantarell\";"));
        widget_6 = new QWidget(AddEditServerDialog);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 215, 350, 50));
        portLineEdit = new QLineEdit(widget_6);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));
        portLineEdit->setGeometry(QRect(10, 5, 330, 35));
        portLineEdit->setAutoFillBackground(false);
        portLineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(130, 131, 131);\n"
"border-top-color: rgb(255, 255, 255);"));
        portLineEdit->setInputMask(QStringLiteral(""));
        portLineEdit->setText(QStringLiteral(""));
        portLineEdit->setFrame(false);
        line_5 = new QFrame(widget_6);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 40, 330, 5));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        buttonBox = new QDialogButtonBox(AddEditServerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 270, 181, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        QWidget::setTabOrder(serverNameLineEdit, octet1);
        QWidget::setTabOrder(octet1, octet1_2);
        QWidget::setTabOrder(octet1_2, octet1_3);
        QWidget::setTabOrder(octet1_3, octet1_4);
        QWidget::setTabOrder(octet1_4, portLineEdit);

        retranslateUi(AddEditServerDialog);

        QMetaObject::connectSlotsByName(AddEditServerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditServerDialog)
    {
        AddEditServerDialog->setWindowTitle(QApplication::translate("AddEditServerDialog", "Server", 0));
        label_4->setText(QApplication::translate("AddEditServerDialog", "SERVER NAME", 0));
        label_6->setText(QApplication::translate("AddEditServerDialog", "IP ADDRESS", 0));
        octet1->setPlaceholderText(QString());
        serverNameLineEdit->setPlaceholderText(QString());
        octet1_2->setPlaceholderText(QString());
        octet1_3->setPlaceholderText(QString());
        octet1_4->setPlaceholderText(QString());
        label_8->setText(QApplication::translate("AddEditServerDialog", "PORT", 0));
        portLineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddEditServerDialog: public Ui_AddEditServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITSERVERDIALOG_H
