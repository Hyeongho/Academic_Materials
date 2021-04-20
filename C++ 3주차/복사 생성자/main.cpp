#include <iostream>

#include "Point.h"

using namespace std;

// 일반 함수로 add()를 구현하는 방법(결과 반환x)
void add1(Point _p1, Point _p2, Point* _p3);
void add2(Point* _p1, Point* _p2, Point* _p3);
void add3(Point _p1, Point _p2, Point& _p3);
void add4(Point& _p1, Point& _p2, Point& _p3);

//일반 함수로 add()를 구현하는 방법(결과 반환)
Point add5(Point _p1, Point _p2);
Point add6(Point* _p1, Point* _p2);
Point add7(Point& _p1, Point& _p2);

int main()
{
	Point p1(1, 2), p2(3, 4), p3;

	// 일반 함수로 add()를 구현하는 방법(결과 반환x)

	add1(p1, p2, &p3);

	cout << p3.a << " " << p3.b << endl;

	add2(&p1, &p2, &p3);

	cout << p3.a << " " << p3.b << endl;

	add3(p1, p2, p3);

	cout << p3.a << " " << p3.b << endl;

	add4(p1, p2, p3);

	cout << p3.a << " " << p3.b << endl;

	//일반 함수로 add()를 구현하는 방법(결과 반환)

	p3 = add5(p1, p2);

	cout << p3.a << " " << p3.b << endl;

	p3 = add6(&p1, &p2);

	cout << p3.a << " " << p3.b << endl;

	p3 = add7(p1, p2);

	cout << p3.a << " " << p3.b << endl;

	//멤버 함수로 add()를 구현하는 방법들(결과 반환x)
	p3.add8(p1, p2);

	cout << p3.a << " " << p3.b << endl;

	p3.add9(&p1, &p2);

	cout << p3.a << " " << p3.b << endl;

	//멤버 함수로 add()를 구현하는 방법들(결과 반환)
	p3 = p1.add10(p2);

	cout << p3.a << " " << p3.b << endl;

	p3 = p1.add11(p2);

	cout << p3.a << " " << p3.b << endl;

	p3 = p1 + p2;

	cout << p3.a << " " << p3.b << endl;
}

// 일반 함수로 add()를 구현하는 방법(결과 반환x)

void add1(Point _p1, Point _p2, Point* _p3)
{
	_p3->a = _p1.a + _p2.a;
	_p3->b = _p1.b + _p2.b;
}

void add2(Point* _p1, Point* _p2, Point* _p3)
{
	_p3->a = _p1->a + _p2->a;
	_p3->b = _p1->b + _p2->b;
}

void add3(Point _p1, Point _p2, Point& _p3)
{
	_p3.a = _p1.a + _p2.a;
	_p3.b = _p1.b + _p2.b;
}

void add4(Point& _p1, Point& _p2, Point& _p3)
{
	_p3.a = _p1.a + _p2.a;
	_p3.b = _p1.b + _p2.b;
}

//일반 함수로 add()를 구현하는 방법(결과 반환)

Point add5(Point _p1, Point _p2)
{
	Point _p3;

	_p3.a = _p1.a + _p2.a;
	_p3.b = _p1.b + _p2.b;

	return _p3;
}

Point add6(Point* _p1, Point* _p2)
{
	Point _p3;

	_p3.a = _p1->a + _p2->a;
	_p3.b = _p1->b + _p2->b;

	return _p3;
}

Point add7(Point& _p1, Point& _p2)
{
	Point _p3;

	_p3.a = _p1.a + _p2.a;
	_p3.b = _p1.b + _p2.b;

	return _p3;
}