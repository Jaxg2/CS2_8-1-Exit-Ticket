#include "Position.h"
#include <iostream>
#include <ostream>
#include <iomanip>
using namespace std;

Position::Position()
{
	x = 0;
	y = 0;
}

Position::Position(int X, int Y)
{

}

void Position::setX(double x)
{
	X = x;
}

void Position::setY(double y)
{
	Y = y;
}

int Position::getX()
{
	return x;
}

int Position::getY()
{
	return y;
}

double Position::calcDistance(Position start, Position end)
 {
	return sqrt(pow(start.getX() - end.getX(), 2) + pow(start.getY() - end.getY(), 2));
}

std::ostream& operator<<(std::ostream& strm, Position pos)
{
	strm << "X: " << fixed << setprecision(3) << pos.getX() << ", Y: " << pos.getY();
}
