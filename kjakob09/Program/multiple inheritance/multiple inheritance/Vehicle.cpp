#include "vehicle.h";


int Vehicle::getWeight()
{
    
    return (Vehicle::engine->getWeight() + Vehicle::body->getWeight() + Vehicle::stearing->getWeight());
    
};