#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Shape* s[4];

	s[0] = new Circle(1, 2, 3);
	s[1] = new Circle(4, 5, 6);

	s[2] = new Rectangle(1, 2, 3, 4);
	s[3] = new Rectangle(5, 6, 7, 8);

	for (int i = 0; i < 4; i++)
	{
		s[i]->GetArea();
		s[i]->Draw();
	}

	for (int i = 0; i < 4; i++)
	{
		delete s[i];
	}
}