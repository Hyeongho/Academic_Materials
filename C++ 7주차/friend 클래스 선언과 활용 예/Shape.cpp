#include "Shape.h"

Shape::Shape(int _x, int _y) : p(_x, _y)
{
	
}

Shape::~Shape()
{

}

void Shape::Draw()
{
	cout << "[ ���� ] ��ġ = (" << p.x << ", " << p.y << ")";
}
