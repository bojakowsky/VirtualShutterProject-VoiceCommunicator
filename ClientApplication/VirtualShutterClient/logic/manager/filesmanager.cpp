#include "filesmanager.h"

FilesManager::FilesManager()
{

}

FilesManager::~FilesManager()
{

}

void FilesManager::SaveToFile(std::vector<std::string> fav)
{
    QString filename = "fav.txt";
    QFile file (filename);
    if (file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text ))
    {
        QTextStream stream ( &file );
        if (fav.size() == 0) stream << "empty";
        for (int i = 0 ; i < fav.size(); ++i){
            stream << fav.at(i).c_str() << endl;
        }

    }
}

std::vector<std::string> FilesManager::ReadFromFile()
{
    std::vector<std::string> fav;
    QString filename = "fav.txt";
    QFile file (filename);
    QFileInfo fi(file);
    //qDebug(fi.absoluteFilePath().toStdString().c_str());
    QTextStream stream ( &file );
    if (file.open(QIODevice::ReadOnly))
    {
        while (!stream.atEnd()) {
            std::string s = stream.readLine().toStdString();
            //qDebug(s.c_str());
            fav.push_back(s);
        }
    }
    return fav;
}
