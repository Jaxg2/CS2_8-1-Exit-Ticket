#pragma once
#include "Vehicle.h"
class Boat : public Vehicle
{

	using Vehicle::Vehicle;
	virtual void travel(Position destination);
};

