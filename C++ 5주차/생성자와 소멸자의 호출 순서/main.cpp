#include <iostream>

using namespace std;

class Vehicle
{
	int speed;

public:

	Vehicle(int _speed) 
	{
		speed = _speed;

		cout << "speed = " << speed << " Vehicle 생성자 호출" << endl;
	}

	~Vehicle()
	{
		cout << "Vehicle 소멸자 호출" << endl;
	}
};

class Car : public Vehicle
{
	int gear;

public:

	Car(int _gear, int _speed) : Vehicle(_speed)
	{
		gear = _gear;

		cout << "gear = " << gear << " Car 생성자 호출" << endl;
	}

	~Car()
	{
		cout << "Car 소멸자 호출" << endl;
	}
};

class Bus : public Car
{
	int nPassenger;

public:
	
	Bus(int _nPassenger, int _gear, int _speed) : Car(_gear, _speed)
	{
		nPassenger = _nPassenger;

		cout << "nPassenger = " << nPassenger << " Bus 생성자 호출" << endl;
	}

	~Bus()
	{
		cout << "Bus 소멸자 호출" << endl;
	}
};

int main()
{
	Bus myBus(10, 2, 60);
}