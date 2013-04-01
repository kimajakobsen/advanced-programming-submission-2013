#ifndef WHEELS_H
#define WHEELS_H
 
class Wheels
{
private:
	enum direction {Left = 0, Straight = 1, Right = 2} _wheelDirection;
	int _height;

public:
	Wheels() 
	{
		_wheelDirection=Straight;
		_height = 0;
	};
	Wheels(direction dir) 
	{
		_wheelDirection=dir;
		_height = 0;
	};
	~Wheels(){}
 
	void turnRight(){};

	void turnStraight(){};

	void turnLeft(){};


};
 
#endif