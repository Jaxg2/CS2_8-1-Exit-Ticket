#ifndef POSITION_H
#define POSITION_H
#include <iostream>

class Position
{
private:
	double x;
	double y;
	int X;
	int Y;
public:
	Position();
	Position(int x, int y);
	void setX(double x);
	void setY(double y);
	int getX();
	int getY();
	static double calcDistance(Position start, Position end);
};

#endif