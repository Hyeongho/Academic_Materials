
class Vehicle
{
protected:
	int speed;

public:
	void speedUp();
	void speedDown();

};

class Car : public Vehicle
{
	int gear;

public:
	void pushAccel();
	void pushBrake();
};


class Aircraft : public Vehicle
{
	int altitude;

public:
	void takeOff();
	void landing();

};