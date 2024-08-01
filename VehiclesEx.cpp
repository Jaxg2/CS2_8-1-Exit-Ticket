#include "Position.h"
#include "Vehicle.h"
#include "Car.h"
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

}