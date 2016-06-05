#ifndef FILESMANAGER_H
#define FILESMANAGER_H

#include <QObject>
#include <QTextStream>
#include <QIODevice>
#include <QFile>
#include <QString>
#include <QFileInfo>
#include <string>
#include <vector>
#include <QCoreApplication>
class FilesManager
{
public:
    FilesManager();
    ~FilesManager();

    void SaveToFile(std::vector<std::string> fav);
    std::vector<std::string> ReadFromFile();
};

#endif // FILESMANAGER_H
