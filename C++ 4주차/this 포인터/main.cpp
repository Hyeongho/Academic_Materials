#include "Point.h"

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);

	p1.Print(" p1 = ");
	p1.WhereAmI();

	p2.Print(" p2 = ");
	p2.WhereAmI();
}