#ifndef EVENTSMANAGER_H
#define EVENTSMANAGER_H
#include "logic/manager/filemanager.h"
#include <QObject>
#include <QtCore>
#include <QListWidget>
#include <string>
#include <vector>
#include <QTime>
class EventsManager
{
public:

    static void SaveEventsToFile();
    static void AddEvent(std::string text);
    static void clearEvents();
    static QListWidget *list;
    static std::string lastFileName;
};

#endif // EVENTSMANAGER_H
