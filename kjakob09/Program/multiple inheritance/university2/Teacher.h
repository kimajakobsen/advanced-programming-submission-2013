#ifndef TEACHER_H
#define TEACHER_H
#include <string>


class Teacher 
{
private:
    std::string _title;
    std::string _firstName;
    std::string _lastName;

public:
    Teacher(std::string fn, std::string ln, std::string t)
    {
        _title = t;
        _firstName = fn;
        _lastName = ln;
    };
    ~Teacher(){};

    const void print();
};

#endif