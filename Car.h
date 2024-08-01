#ifndef CAR_H
#define CAR_H

class Position;
class Vehicle;

class Car : public Vehicle
{
private:

public:
	virtual void travel(Position destination);
	using Vehicle::Vehicle;
};

#endif