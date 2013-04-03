#include "Teacher.h"
#include <iostream>


const void Teacher::print() //implementaion of the print method
{
    std::cout << this->_title << " " << this->_lastName << ", " << this->_firstName; 
}
