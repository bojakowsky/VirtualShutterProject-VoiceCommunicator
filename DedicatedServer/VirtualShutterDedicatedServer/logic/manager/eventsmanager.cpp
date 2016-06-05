#include "eventsmanager.h"

std::string EventsManager::lastFileName = "";
QListWidget* EventsManager::list = 0;

void EventsManager::SaveEventsToFile()
{
    std::string time = QTime::currentTime().toString().toStdString();
    std::vector<std::string> lines;
    for (int i = 0 ; i < list->count(); ++i){
        lines.push_back(list->item(i)->text().toStdString());
    }
    std::string filename = "Activities_" + time;
    FileManager file;
    file.SaveToFile(filename, lines);
    EventsManager::lastFileName = filename;
}

void EventsManager::AddEvent(std::string text)
{
    EventsManager::list->addItem(text.c_str());
}

void EventsManager::clearEvents()
{
    EventsManager::list->clear();
}
