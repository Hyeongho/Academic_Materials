
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

//	문제점
//
//	중복되는 멤버 변수와 멤버 함수가 나타난다.
//	- 코드의 길이가 길어진다. 동일한 코드가 여러 번 복사되기 때문이다.
//	- 중복된 코드는 유지관리를 어렵게 한다. 만약 speedUp()의 내용이 수정되어야 한다면 상속을 사용하는 경우 하나의 함수만 수정하면 된다.
//	  그러나 상속을 사용하지 않으면 모든 클래스의 speedUp() 함수를 수정해야 한다.
//	- 운송 수단과 관련된 객체들의 관리가 힘들어진다. 상속을 사용하면 다양한 Vehicle 및 자식 클래스의 객체들을 매우 효율적으로 관리할 수 있다.