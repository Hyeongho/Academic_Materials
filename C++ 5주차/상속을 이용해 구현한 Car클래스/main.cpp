#include "Car.h"

int main()
{
	Car myCar(2);
	Car yourCar(3);

	//myCar.serial = 20170118;
	//yourCar.speedUp = 20;

	myCar.pushAccel();

	myCar.price = 3000;
	yourCar.price = 2500;

	myCar.Print();
	yourCar.Print();

	myCar.PrintCarInfo("[My Car]");
	yourCar.PrintCarInfo("[YourCar]");
}