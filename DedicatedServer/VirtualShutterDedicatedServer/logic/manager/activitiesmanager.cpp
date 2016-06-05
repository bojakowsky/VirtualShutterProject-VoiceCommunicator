#include "activitiesmanager.h"

std::string ActivitiesManager::lastFileName = "";
QListWidget* ActivitiesManager::list = 0;

void ActivitiesManager::AddActivity(std::string text)
{
    ActivitiesManager::list->addItem(text.c_str());
}

void ActivitiesManager::clearActivities()
{
    ActivitiesManager::list->clear();
}

void ActivitiesManager::SaveActivitiesToFile()
{
    std::string time = QTime::currentTime().toString().toStdString();
    std::vector<std::string> lines;
    for (int i = 0 ; i < list->count(); ++i){
        lines.push_back(list->item(i)->text().toStdString());
    }
    std::string filename = "Events_" + time;

    FileManager file;
    file.SaveToFile(filename, lines);

    ActivitiesManager::lastFileName = filename;
}
