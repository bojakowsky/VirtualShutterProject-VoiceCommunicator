/********************************************************************************
** Form generated from reading UI file 'addserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSERVERDIALOG_H
#define UI_ADDSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddServerDialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;

    void setupUi(QDialog *AddServerDialog)
    {
        if (AddServerDialog->objectName().isEmpty())
            AddServerDialog->setObjectName(QStringLiteral("AddServerDialog"));
        AddServerDialog->resize(240, 320);
        lineEdit = new QLineEdit(AddServerDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(12, 50, 191, 20));
        lineEdit_2 = new QLineEdit(AddServerDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 41, 20));
        lineEdit_3 = new QLineEdit(AddServerDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 150, 191, 20));
        label = new QLabel(AddServerDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 20));
        label_2 = new QLabel(AddServerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 71, 16));
        label_3 = new QLabel(AddServerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 47, 13));
        lineEdit_4 = new QLineEdit(AddServerDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 100, 41, 20));
        lineEdit_5 = new QLineEdit(AddServerDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 100, 41, 20));
        lineEdit_6 = new QLineEdit(AddServerDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 100, 41, 20));
        pushButton = new QPushButton(AddServerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 270, 75, 23));

        retranslateUi(AddServerDialog);

        QMetaObject::connectSlotsByName(AddServerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddServerDialog)
    {
        AddServerDialog->setWindowTitle(QApplication::translate("AddServerDialog", "Dialog", 0));
        label->setText(QApplication::translate("AddServerDialog", "Server name:", 0));
        label_2->setText(QApplication::translate("AddServerDialog", "IP address", 0));
        label_3->setText(QApplication::translate("AddServerDialog", "Port", 0));
        pushButton->setText(QApplication::translate("AddServerDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class AddServerDialog: public Ui_AddServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSERVERDIALOG_H
