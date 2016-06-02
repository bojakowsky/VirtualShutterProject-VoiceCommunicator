/********************************************************************************
** Form generated from reading UI file 'informdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMDIALOG_H
#define UI_INFORMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InformDialog
{
public:
    QPushButton *closeButton;
    QLabel *informMessage;

    void setupUi(QDialog *InformDialog)
    {
        if (InformDialog->objectName().isEmpty())
            InformDialog->setObjectName(QStringLiteral("InformDialog"));
        InformDialog->resize(240, 99);
        closeButton = new QPushButton(InformDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(160, 70, 75, 23));
        informMessage = new QLabel(InformDialog);
        informMessage->setObjectName(QStringLiteral("informMessage"));
        informMessage->setGeometry(QRect(10, 10, 221, 51));
        informMessage->setLayoutDirection(Qt::LeftToRight);
        informMessage->setAlignment(Qt::AlignCenter);

        retranslateUi(InformDialog);

        QMetaObject::connectSlotsByName(InformDialog);
    } // setupUi

    void retranslateUi(QDialog *InformDialog)
    {
        InformDialog->setWindowTitle(QApplication::translate("InformDialog", "Information", 0));
        closeButton->setText(QApplication::translate("InformDialog", "Ok", 0));
        informMessage->setText(QApplication::translate("InformDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class InformDialog: public Ui_InformDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMDIALOG_H
