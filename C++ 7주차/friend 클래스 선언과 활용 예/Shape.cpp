#include "Shape.h"

Shape::Shape(int _x, int _y) : p(_x, _y)
{
	
}

Shape::~Shape()
{

}

void Shape::Draw()
{
	cout << "[ 형태 ] 위치 = (" << p.x << ", " << p.y << ")";
}
