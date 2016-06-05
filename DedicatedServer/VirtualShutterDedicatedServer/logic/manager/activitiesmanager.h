#ifndef ACTIVITIESMANAGER_H
#define ACTIVITIESMANAGER_H
#include "logic/manager/filemanager.h"
#include <QObject>
#include <QtCore>
#include <QListWidget>
#include <string>
#include <vector>
#include <QTime>
class ActivitiesManager
{
public:
    static void AddActivity(std::string text);
    static void clearActivities();
    static void SaveActivitiesToFile();

    static QListWidget *list;
    static std::string lastFileName;
private:

};

#endif // ACTIVITIESMANAGER_H
