#include "operationslogger.h"



void OperationsLogger::write(QString type, QString log, QListWidget *list)
{
    if (list) list->addItem("["+type+"] " + log);
}
