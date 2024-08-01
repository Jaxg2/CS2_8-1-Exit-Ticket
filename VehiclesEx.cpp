#include "Position.h"
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

int main()
{

	Position here(50, 75);
	Car myCar(70, here, 4, 5);
	Position there(120, 10);
	cout << myCar.getETA(there) << endl << endl;

}