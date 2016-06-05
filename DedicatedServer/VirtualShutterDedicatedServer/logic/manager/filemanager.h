#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QTextStream>
#include <QIODevice>
#include <QFile>
#include <QString>
#include <QFileInfo>
#include <string>
#include <vector>
class FileManager
{
public:
    FileManager();

    void SaveToFile(std::string fname, std::vector<std::string> lines);
};

#endif // FILEMANAGER_H
