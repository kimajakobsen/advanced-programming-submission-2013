#pragma once
#include "person.h"
#include <iostream>

class Student : public Person
{
private:
    std::string _averageGrade;

public:
    Student(std::string fn, std::string ln, std::string e, std::string ag)
    {
        this->_averageGrade = ag;
        this->_firstName = fn;
        this->_lastName = ln;
        this->_email = e;
    };
    ~Student(void){};

    const void print();
   

    std::string getAverageGrade();
   
};

