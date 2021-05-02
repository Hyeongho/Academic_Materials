#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
	int serial;

protected:
	int speed;

public:
	int price;

	Vehicle();

	void speedUp();
	void SpeedDown();

	void Print();
};

