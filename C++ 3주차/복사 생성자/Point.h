#pragma once
class Point
{
public:
	int a;
	int b;

	Point();

	Point(int _a, int _b);

	//멤버 함수로 add()를 구현하는 방법들(결과 반환x)
	void add8(Point _p1, Point _p2);
	void add9(Point* _p1, Point* _p2);

	//멤버 함수로 add()를 구현하는 방법들(결과 반환)
	Point add10(Point _p);
	Point add11(Point& _p);
	Point operator + (Point& _p);
};
