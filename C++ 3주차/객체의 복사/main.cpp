#include "Point.h"

int main()
{
	Point p1(10, 20);
	Point p2;

	p1.Print();

	p2.Print();

	p2 = p1;

	p2.Print();
}