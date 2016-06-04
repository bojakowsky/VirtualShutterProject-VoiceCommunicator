#ifndef OPERATIONSLOGGER_H
#define OPERATIONSLOGGER_H
#include <QString>
#include <QListWidget>

class OperationsLogger
{
public:
    static void write(QString type, QString log, QListWidget *list);
};

#endif // OPERATIONSLOGGER_H
