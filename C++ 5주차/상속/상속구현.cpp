
class Car
{
	int speed;
	int gear;

public:
	void speedUp();
	void SpeedDown();
	void pushAccel();
	void pushBrake();
};

class Aircraft
{
	int speed;
	int altitude;

public:
	void speedUp();
	void SpeedDown();
	void takeOff();
	void landing();
};

//	������
//
//	�ߺ��Ǵ� ��� ������ ��� �Լ��� ��Ÿ����.
//	- �ڵ��� ���̰� �������. ������ �ڵ尡 ���� �� ����Ǳ� �����̴�.
//	- �ߺ��� �ڵ�� ���������� ��ư� �Ѵ�. ���� speedUp()�� ������ �����Ǿ�� �Ѵٸ� ����� ����ϴ� ��� �ϳ��� �Լ��� �����ϸ� �ȴ�.
//	  �׷��� ����� ������� ������ ��� Ŭ������ speedUp() �Լ��� �����ؾ� �Ѵ�.
//	- ��� ���ܰ� ���õ� ��ü���� ������ ���������. ����� ����ϸ� �پ��� Vehicle �� �ڽ� Ŭ������ ��ü���� �ſ� ȿ�������� ������ �� �ִ�.