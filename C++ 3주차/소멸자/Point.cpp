#include "Point.h"

Point::Point(int _a, int _b)
{
	a = _a;
	b = _b;

	cout << "a: " << a << ", b: " << b << " 持失切" << endl;
}

Point::~Point()
{
	cout << "a: " << a << ", b: " << b << " 社瑚切" << endl;
}
