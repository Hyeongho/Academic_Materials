#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Circle c1(1, 2, 3);
	Circle c2(4, 5, 6);

	c1.GetArea();
	c2.GetArea();

	Rectangle r1(1, 2, 3, 4);
	Rectangle r2(5, 6, 7, 8);

	r1.GetArea();
	r2.GetArea();

	c1.Draw();
	c2.Draw();

	r1.Draw();
	r2.Draw();
}