#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 0;
	width = 0;

	area = 0;
}

Rectangle::Rectangle(int _x, int _y, int _height, int _width)
{
	x = _x;
	y = _y;

	height = _height;
	width = _width;

	area = 0;
}

int Rectangle::GetArea()
{
	area = height * width;

	return area;
}

void Rectangle::Draw()
{
	cout << "x: " << x << ", y: " << y << ", height: " << height << ", width: " << width << ", area: " << area << endl;
}
