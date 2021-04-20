#include "Point.h"

int main()
{
	Point p1;

	cin >> p1.a;
	cin >> p1.b;

	p1.Sum(p1.a, p1.b);

	p1.getSum();
}