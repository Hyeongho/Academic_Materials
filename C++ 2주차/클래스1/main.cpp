#include <iostream>

using namespace std;

class Point
{
public:
	Point();
	~Point();

	int a;
	int b;

	void Sum(int a, int b)
	{
		sum = a + b;
	}

	void getSum();

private:
	int sum;

};

Point::Point()
{
}

Point::~Point()
{
}

void Point::getSum()
{
	cout << sum << endl;
}

int main()
{
	Point p1;

	cin >> p1.a;
	cin >> p1.b;

	p1.Sum(p1.a, p1.b);

	p1.getSum();
}