#include "Student.h"
#include <string>

void Student::print()
{
    std::cout << this->_firstName << ' ' << this->_lastName << ' ' <<  this->_email << ' ' << this->_averageGrade;
}