#include "Circle.h"

Circle::Circle()
{
	radius = 0;
	area = 0;
}

Circle::Circle(int _x, int _y, int _radius)
{
	x = _x;
	y = _y;

	radius = _radius;

	area = 0;
}

Circle::~Circle()
{
	cout << "Circle" << endl;
}

int Circle::GetArea()
{
	area = radius * radius * 3.14;

	return area;
}

void Circle::Draw()
{
	cout << "x: " << x << ", y: " << y << ", radius: " << radius << ", area: " << area << endl;
}
