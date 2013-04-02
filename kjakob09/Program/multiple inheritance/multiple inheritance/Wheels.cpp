#include "Wheels.h"


void Wheels::turnRight()
{
    if (Wheels::_height == 0)
    {
        Wheels::_direction == Right;   
    }
};

void Wheels::turnStraight()
{
    if (Wheels::_height == 0)
    {
        Wheels::_direction == Straight;   
    }
};

void Wheels::turnLeft()
{
    if (Wheels::_height == 0)
    {
        Wheels::_direction == Left;   
    }
};

int Wheels::getWeight()
{
    return Wheels::_weight;
}