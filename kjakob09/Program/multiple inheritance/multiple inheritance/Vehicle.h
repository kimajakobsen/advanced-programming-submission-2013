#ifndef VEHICLE_H
#define VEHICLE_H

#include "IEngine.h"
#include "IStearing.h"
#include "IBody.h"

 
class Vehicle
{
protected:
    IEngine* engine;
    IStearing* stearing;
    IBody *body;


public:
    Vehicle(IEngine* engine, IStearing* stearing, IBody* chassis) 
	{
		this->engine = engine;
        this->stearing = stearing;
        this->body = chassis;
	};
	
    int getWeight();

};
 
#endif