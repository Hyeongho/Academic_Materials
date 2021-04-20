#include "Point.h"

Point::Point()
{
	a = 0;
	b = 0;
}

Point::Point(int _a, int _b)
{
	a = _a;
	b = _b;
}

void Point::Print()
{
	cout << "a: " << a << ", b: " << b << endl;
}
