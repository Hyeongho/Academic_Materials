#include "Shape.h"

Shape::Shape(int _height, int _width, float _radius)
{
	height = _height;
	width = _width;
	radius = _radius;

	rectangle = width * height;

	circle = radius * radius * 3.14;
}

Shape::~Shape()
{
	cout << "소멸자 호출 클래스 종료" << endl;
}

int Shape::GetRectangle()
{
	return rectangle;
}

float Shape::GetCircle()
{
	return circle;
}
