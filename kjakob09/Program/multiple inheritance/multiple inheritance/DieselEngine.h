#ifndef DIESELENGINE_H
#define DIESELENGINE_H

#include "IEngine.h"

 
class DieselEngine : public IEngine
{
protected:
	
	
    int _maxSpeed;
    int _acceperationRate;


public:
    DieselEngine()
    {
        this->_maxSpeed = 120; 
        this->_acceperationRate = 10;
        this->_weight = 80;
    };
    ~DieselEngine(){};
	
    virtual void accelerate();
	virtual void decelerate();
	virtual void fullbreak();
    virtual int getWeight();
};
 
#endif