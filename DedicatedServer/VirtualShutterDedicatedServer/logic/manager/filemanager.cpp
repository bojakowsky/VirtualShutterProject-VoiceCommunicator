#include "filemanager.h"

FileManager::FileManager()
{

}

void FileManager::SaveToFile(std::string fname, std::vector<std::string> lines)
{
    QString filename = QString::fromStdString(fname);
        QFile file (filename);
        if (file.open(QIODevice::ReadWrite))
        {
            QTextStream stream ( &file );
            if (lines.size() == 0) stream << "empty";
            for (int i = 0 ; i < lines.size(); ++i){
                stream << lines.at(i).c_str() << endl;
            }

        }
}
