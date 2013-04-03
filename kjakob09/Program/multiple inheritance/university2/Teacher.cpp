#include "Teacher.h"
#include <iostream>


const void Teacher::print()
{
    std::cout << this->_title << " " << this->_lastName << ", " << this->_firstName; 
}
