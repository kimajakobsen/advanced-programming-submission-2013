#ifndef CHASSIS_H
#define CHASSIS_H
 
class Chassis
{
protected:
	
	int _speed;

public:
	Chassis(){};
	~Chassis(){};
	
	virtual int accelerate(){};

	virtual int decelerate(){};

	virtual int fullbreak(){};


};
 
#endif