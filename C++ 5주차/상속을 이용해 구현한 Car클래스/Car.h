#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
	int gear;

public:
	
	Car(int _gear);

	void pushAccel();
	void pushBrake();

	void SetGear(int _gear);

	void PrintCarInfo(string msg);
};

