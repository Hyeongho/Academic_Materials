#include "Point.h"

Line::Line(int _a, int _b)
{
	a = _a;
	b = _b;

}

void Line::print()
{
	cout << "a: " << a << ", b: " << b << endl;
}

Point::Point(int la, int lb) : l(la, lb)
{

}

void Point::print()
{
	cout << "Line: ";
	l.print();
}