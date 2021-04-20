#include "Point.h"

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point p3(0, 0);

	Point::PrintCount();

	p1.Print(" p1 = ");
	p2.Print(" p2 = ");

	Point* pPt;

	Point::PrintCount();

	pPt = new Point(5, 6);

	Point::PrintCount();

	pPt->Print("pPt = ");

	delete pPt;

	Point::PrintCount();

	p3.Add(p1, p2);

	Point::PrintCount();

	p3.Print("p1 + p2");

}