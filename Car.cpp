#include "Position.h"
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

void Car::travel(Position destination)
{
	cout << "This car drives" << Position::calcDistance(getPosition(), destination) << " miles to " << destination << " over land. The trip takes "
		<< getETA(destination) << "hours.";

}

