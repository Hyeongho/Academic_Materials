#include "Point.h"

Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

Point::~Point()
{

}

void Point::Print()
{
	cout << "Á¡(" << x << ", " << y << ")";
}
