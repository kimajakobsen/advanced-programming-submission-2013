#ifndef WHEELS_H
#define WHEELS_H
#include "IStearing.h"

 
class Wheels : public IStearing
{
private:
	

public:
	Wheels() 
	{
		IStearing::_direction=Straight;
		IStearing::_height = 0;
        IStearing::_weight = 50;
	};
	Wheels(direction dir) 
	{
		IStearing::_direction=dir;
		IStearing::_height = 0;
	};
	~Wheels(){}
 
   virtual void turnRight();

   virtual void turnStraight();

   virtual void turnLeft();
	
   virtual int getWeight();

};
 
#endif