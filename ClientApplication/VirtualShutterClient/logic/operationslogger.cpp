#include "operationslogger.h"



void OperationsLogger::write(QString type, QString log, QListWidget *list)
{
    list->addItem("["+type+"] " + log);
}
