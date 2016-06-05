#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = 0);
    ~InputDialog();

    QString getInput() const;
    void setInput(const QString &value);

private slots:
    void on_pushButton_clicked();

private:
    Ui::InputDialog *ui = 0;
    QString input;
};

#endif // INPUTDIALOG_H
