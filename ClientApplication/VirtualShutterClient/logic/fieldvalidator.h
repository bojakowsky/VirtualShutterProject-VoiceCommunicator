#ifndef FIELDVALIDATOR_H
#define FIELDVALIDATOR_H
#include <stdio.h>
#include <string>
#include <QHostAddress>

class FieldValidator
{
public:
    FieldValidator();
    QHostAddress ipChecker(QString addressStr);
    int intFieldChecker(std::string fieldName, std::string str, int min, int max);
    std::string stringIsEmptyChecker(std::string fieldName, std::string str);
    void throwException(std::string fieldName, std::string message);
};

class CheckerException: public std::exception
{
    virtual const char* what() const throw()
    {
      const char* c_message = this->message.c_str();
      return c_message;
    }

public:
    CheckerException(std::string message){
        this->message = message;
    }
private:
  std::string message;
};

#endif // FIELDVALIDATOR_H
