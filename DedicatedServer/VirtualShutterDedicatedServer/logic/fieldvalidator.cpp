#include "fieldvalidator.h"

FieldValidator::FieldValidator()
{

}

QHostAddress FieldValidator::ipChecker(QString addressStr){
    QHostAddress address(addressStr);
    if (QAbstractSocket::IPv4Protocol != address.protocol())
    {
        throw CheckerException("IP: Invalid IP address.");
    }
    return address;
}

int FieldValidator::intFieldChecker(std::string fieldName, std::string str, int min, int max){
    try{
        std::string::size_type sz;
        int port = std::stoi(str, &sz);
        if (port < min || port > max)
            throw CheckerException(fieldName + ": number is too low or too high.");
        return port;
    }
    catch(std::invalid_argument&){
      throw CheckerException(fieldName + ": type a number.");
    }
    catch(std::out_of_range&){
      throw CheckerException(fieldName + ": number is out of range.");
    }
}

std::string FieldValidator::stringIsEmptyChecker(std::string fieldName, std::string str){
    if (str.empty())
        throw CheckerException(fieldName + ": field can't be empty");
    else if (str[0] == ' ')
        throw CheckerException(fieldName + ": field can't start from space");
    return str;
}
