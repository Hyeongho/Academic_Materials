#include "Car.h"

Car::Car(int _gear)
{
	gear = _gear;
}

void Car::pushAccel()
{
	speed += 5;
}

void Car::pushBrake()
{
	SpeedDown();
}

void Car::SetGear(int _gear)
{
	gear = _gear;
}

void Car::PrintCarInfo(string msg)
{
	cout << msg;
	//cout << " serial = " << serial;
	cout << " speed = " << speed << ", gear = " << gear << ", price = " << price << endl;
}
