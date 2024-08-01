#include "Position.h"
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include <iostream>
using namespace std;

void testBoat();
void testCar();


void testBoat()
{
	Position here(50, 75);
	Car myCar(70, here, 4, 5);
	Position there(120, 10);
	cout << myCar.getETA(there) << endl << endl;
}

void testCar()
{

}

int main()
{

	Position here(50, 75);
	Car myCar(70, here, 4, 5);
	Position there(120, 10);
	cout << myCar.getETA(there) << endl << endl;

	Vehicle* vehicles[5];
	Position here(20, 20);
	Position there(40, 60);
	Position overThere(150, 400);
	Position wayOverThere(1400, 2841);
	Position reallyClose(21, 21);
	Position theBestSpot(42, 42);

	vehicles[0] = new Car(50, here, 2, 3);
	vehicles[1] = new Boat(24, there, 4, 12);
	vehicles[2] = new Car(75, overThere, 1, 2);
	vehicles[3] = new Boat(10, wayOverThere, 3, 6);
	vehicles[4] = new Car(20, reallyClose, 2, 5);

	for (Vehicle* v : vehicles)
	{
		v->travel(theBestSpot);
		cout << endl;
	}
}