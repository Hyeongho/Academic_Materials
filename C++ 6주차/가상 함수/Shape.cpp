#include "Shape.h"

Shape::Shape()
{
	x = 0;
	y = 0;
}

Shape::~Shape()
{
}

void Shape::Draw()
{
	cout << "x: " << x << ", y: " << y << endl;
}
