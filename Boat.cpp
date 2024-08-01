#include <iostream>
#include "Boat.h"


void Boat::travel(Position destination)
{
	cout << "This boat sails" << Position::calcDistance(getPosition(), destination) << " miles to " << destination << " on seas, lakes, and rivers. The trip takes "
		<< getETA(destination) << "hours.";
}
