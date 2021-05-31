#include <string>

#include "Point.h"

int main() 
{
	Point<int> p1(1, 2);
	Point<int> p2(3, 4);
	Point<double> q1(5.0, 6.0);
	Point<double> q2(7.0, 8.0);

	cout << "p1    = " << p1 << endl;
	cout << "p2    = " << p2 << endl;
	cout << "p1+p2 = " << p1 + p2 << endl;
	cout << "0.5*p2= " << 0.5 * p2 << endl;
	cout << "q1    = " << q1 << endl;
	cout << "q2    = " << q2 << endl;
	cout << "0.5*q2= " << 0.5 * q2 << endl;
}