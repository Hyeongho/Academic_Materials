#include <iostream>

using namespace std;

class Vehicle
{
	int speed;

public:

	Vehicle(int _speed) 
	{
		speed = _speed;

		cout << "speed = " << speed << " Vehicle ������ ȣ��" << endl;
	}

	~Vehicle()
	{
		cout << "Vehicle �Ҹ��� ȣ��" << endl;
	}
};

class Car : public Vehicle
{
	int gear;

public:

	Car(int _gear, int _speed) : Vehicle(_speed)
	{
		gear = _gear;

		cout << "gear = " << gear << " Car ������ ȣ��" << endl;
	}

	~Car()
	{
		cout << "Car �Ҹ��� ȣ��" << endl;
	}
};

class Bus : public Car
{
	int nPassenger;

public:
	
	Bus(int _nPassenger, int _gear, int _speed) : Car(_gear, _speed)
	{
		nPassenger = _nPassenger;

		cout << "nPassenger = " << nPassenger << " Bus ������ ȣ��" << endl;
	}

	~Bus()
	{
		cout << "Bus �Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	Bus myBus(10, 2, 60);
}