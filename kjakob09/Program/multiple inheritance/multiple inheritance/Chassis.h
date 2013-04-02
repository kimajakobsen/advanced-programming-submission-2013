#ifndef CHASSIS_H
#define CHASSIS_H
#include <string>
#include "IBody.h"


class Chassis : public IBody 
{
protected:
	
	

public:
    Chassis(std::string color)
    {
        this->_color = color;
        this->_weight = 100;
    };
	~Chassis(){};
	void paint(std::string color);
    std::string getColor() const;

	virtual bool waterTight();

	virtual bool airTight();

    virtual void hit(int weight);

    virtual int getDurability();
    
    virtual int getWeight();


};
 
#endif