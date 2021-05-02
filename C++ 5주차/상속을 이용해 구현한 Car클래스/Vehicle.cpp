#include "Vehicle.h"

Vehicle::Vehicle()
{
	serial = 0;
	speed = 0;
	price = 0;
}

void Vehicle::speedUp()
{
	speed++;
}

void Vehicle::SpeedDown()
{
	speed--;
}

void Vehicle::Print()
{
	cout << "[Vehicle] serial = " << serial << ", speed = " << speed << ", price = " << price << endl;
}
