#include "DieselEngine.h"


void DieselEngine::accelerate()
{
    if (DieselEngine::_speed > DieselEngine::_acceperationRate 
        && DieselEngine::_speed < (DieselEngine::_maxSpeed - DieselEngine::_acceperationRate))
    {
        DieselEngine::_speed = DieselEngine::_speed + 10;
    }
};

void DieselEngine::decelerate()
{
    if (DieselEngine::_speed < DieselEngine::_acceperationRate 
        && DieselEngine::_speed > (DieselEngine::_maxSpeed - DieselEngine::_acceperationRate))
    {
        DieselEngine::_speed = DieselEngine::_speed - 10;
    }
};

void DieselEngine::fullbreak()
{
    DieselEngine::_speed = 0;
};

int DieselEngine::getWeight()
{
    return DieselEngine::_weight;
}