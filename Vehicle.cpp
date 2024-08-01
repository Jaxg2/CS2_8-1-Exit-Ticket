#include "Position.h"
#include "Vehicle.h"


Vehicle::Vehicle() : Vehicle(0, { 0, 0 }, 0, 0)
{

}

Vehicle::Vehicle(double speed, Position position, int numPassengers, int maxPassengers)
{
	speed = spd;
	position = pos;
	numPassengers = numPass;
	maxPassengers = maxPass;
}

double Vehicle::getETA(Position destination)
{
	double dist = Position::calcDistance(pos, destination);
	double time = dist / spd;
	return time;
}

void Vehicle::travel(Position destination)
{

}

double  Vehicle::getSpeed()
{
	return spd;
}

int  Vehicle::getnumPassengers()
{
	return numPass;
}
int  Vehicle::getmaxPassengers()
{
	return maxPass;
}

void  Vehicle::setSpeed(double speed)
{
	spd = speed;
}

void Vehicle::setnumPassengers(int pass)
{
	numPass = pass;
}

void  Vehicle::setmaxPassengers(int pass)
{
	maxPass = pass;
}