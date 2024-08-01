#ifndef VEHICLE_H
#define VEHICLE_H
#include "Position.h"
#include <iostream>
using namespace std;

class Vehicle
{
private:
	double spd;
	Position pos;
	int numPass;
	int maxPass;
	int pass;
public:
	Vehicle();
	Vehicle(double speed, Position position, int numPassengers, int maxPassengers);
	Position getPosition();
	double getETA(Position destination);
	virtual void travel(Position destination) = 0;
	double getSpeed();
	int getnumPassengers();
	int getmaxPassengers();
	void setSpeed(double speed);
	void setPosition(Position pos);
	void setnumPassengers(int pass);
	void setmaxPassengers(int pass);
};

#endif