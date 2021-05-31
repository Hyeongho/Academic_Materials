#include "Shape.h"

Shape::Shape()
{
	x = 0;
	y = 0;
}

Shape::~Shape()
{
	cout << "Shape" << endl;
}

int Shape::GetArea()
{
	return 0;
}

void Shape::Draw()
{
	cout << x << ", " << y << endl;
}
