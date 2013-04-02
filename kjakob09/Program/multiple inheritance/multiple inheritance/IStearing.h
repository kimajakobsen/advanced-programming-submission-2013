#ifndef ISTEARING_H
#define ISTEARING_H
 
class IStearing
{
protected:
    enum direction {Left = 0, Straight = 1, Right = 2} _direction;
	int _height;
    int _weight;

public:
    virtual void turnRight() = 0;

	virtual void turnStraight() = 0;

	virtual void turnLeft() = 0;

    virtual int getWeight() =0;



};

 
#endif