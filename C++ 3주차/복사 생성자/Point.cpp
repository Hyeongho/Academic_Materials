#include "Point.h"

Point::Point(int _a, int _b)
{
	a = _a;
	b = _b;
}

void Point::add8(Point _p1, Point _p2)
{
	a = _p1.a + _p2.a;
	b = _p1.b + _p2.b;
}

void Point::add9(Point* _p1, Point* _p2)
{
	a = _p1->a + _p2->a;
	b = _p1->b + _p2->b;

}

Point Point::add10(Point _p)
{
	Point p;

	p.a = a + _p.a;
	p.b = b + _p.b;

	return p;
}

Point Point::add11(Point& _p)
{
	Point p;

	p.a = a + _p.a;
	p.b = b + _p.b;

	return p;
}

Point Point::operator+(Point& _p)
{

	return Point(a + _p.a, b + _p.b);
}

Point::Point()
{
	a = 0;
	b = 0;
}