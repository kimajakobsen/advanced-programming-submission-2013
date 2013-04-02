#ifndef IBODY_H
#define IBODY_H
#include <string>

class IBody
{
protected:
	
	int _durability;
    std::string _color;
    int _weight;

public:
	
	virtual void paint(std::string color) = 0;
    virtual std::string getColor() const= 0;

	virtual bool waterTight()= 0;

	virtual bool airTight()= 0;

    virtual void hit(int weight)= 0;

    virtual int getDurability()= 0;

    virtual int getWeight() =0;

};
 
#endif