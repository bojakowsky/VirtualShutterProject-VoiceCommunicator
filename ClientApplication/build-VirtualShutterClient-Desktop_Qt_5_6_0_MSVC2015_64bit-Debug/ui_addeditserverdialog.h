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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddEditServerDialog
{
public:
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label;

    void setupUi(QDialog *AddEditServerDialog)
    {
        if (AddEditServerDialog->objectName().isEmpty())
            AddEditServerDialog->setObjectName(QStringLiteral("AddEditServerDialog"));
        AddEditServerDialog->resize(240, 320);
        lineEdit_3 = new QLineEdit(AddEditServerDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 140, 191, 20));
        lineEdit_6 = new QLineEdit(AddEditServerDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 90, 41, 20));
        lineEdit = new QLineEdit(AddEditServerDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(12, 40, 191, 20));
        pushButton = new QPushButton(AddEditServerDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 260, 75, 23));
        label_2 = new QLabel(AddEditServerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 71, 16));
        lineEdit_2 = new QLineEdit(AddEditServerDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 90, 41, 20));
        lineEdit_5 = new QLineEdit(AddEditServerDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 90, 41, 20));
        label_3 = new QLabel(AddEditServerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 47, 13));
        lineEdit_4 = new QLineEdit(AddEditServerDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 90, 41, 20));
        label = new QLabel(AddEditServerDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 81, 20));

        retranslateUi(AddEditServerDialog);

        QMetaObject::connectSlotsByName(AddEditServerDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditServerDialog)
    {
        AddEditServerDialog->setWindowTitle(QApplication::translate("AddEditServerDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("AddEditServerDialog", "Save", 0));
        label_2->setText(QApplication::translate("AddEditServerDialog", "IP address", 0));
        label_3->setText(QApplication::translate("AddEditServerDialog", "Port", 0));
        label->setText(QApplication::translate("AddEditServerDialog", "Server name:", 0));
    } // retranslateUi

};

namespace Ui {
    class AddEditServerDialog: public Ui_AddEditServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITSERVERDIALOG_H
