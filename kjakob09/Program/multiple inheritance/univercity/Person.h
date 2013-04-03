#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:
    std::string _firstName;
    std::string _lastName;
public:
    Person();
    virtual ~Person();

    virtual const void print() = 0;
};

#endif