#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::Print(string msg)
{
	cout << msg << "(" << this->x << ", " << this->y << ")" << endl;
}

void Point::WhereAmI()
{
	cout << "аж╪р = " << this << endl;
}
