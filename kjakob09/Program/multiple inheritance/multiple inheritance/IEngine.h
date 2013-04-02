#ifndef IENGINE_H
#define IENGINE_H
 
class IEngine
{
protected:
	
	int _speed;
    int _weight;

public:
		
	virtual void accelerate() = 0;

	virtual void decelerate() = 0;

    virtual int getWeight() =0;

};
 
#endif