#include "Point.h"

int Point::count = 0;

void Point::PrintCount()
{
	cout << "PtCount = " << count << endl;
}

Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;

	count++;
}

Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;

	count++;
}

Point::~Point()
{
	count--;
}

void Point::Print(string msg)
{
	cout << msg << "(" << x << ", " << y << ")" << endl;
}

void Point::Add(Point _a, Point _b)
{
	x = _a.x + _b.x;
	y = _a.y + _b.y;
}