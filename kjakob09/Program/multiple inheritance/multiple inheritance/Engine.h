#ifndef ENGINE_H
#define ENGINE_H
 
class Engine
{
protected:
	
	int _speed;
	int _weight;

public:
	Engine(){};
	~Engine(){};
	
	virtual int accelerate(){};

	virtual int decelerate(){};

	virtual int fullbreak(){};


};
 
#endif