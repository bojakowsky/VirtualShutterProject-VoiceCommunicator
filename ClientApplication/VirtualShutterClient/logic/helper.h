#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <sstream>
#include <vector>

class Helper
{
public:
    Helper();
    static std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
    static std::vector<std::string> split(const std::string &s, char delim);
};

#endif // HELPER_H
