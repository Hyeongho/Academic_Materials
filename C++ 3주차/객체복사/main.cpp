#include <iostream>

using namespace std;

struct Point
{
	int a, b;

	Point(int _a = 0, int _b = 0) : a(_a), b(_b)
	{

	}
};

Point readPoint()
{
	Point p;

	cout << "a, b입력" << endl;

	cin >> p.a >> p.b;

	return p;
}

void printPoint(Point p, const char* str)
{
	cout << str << " = (" << p.a << ", " << p.b << ")" << endl;
}

void main()
{
	Point a;

	a = readPoint();

	printPoint(a, "입력 좌표");

}