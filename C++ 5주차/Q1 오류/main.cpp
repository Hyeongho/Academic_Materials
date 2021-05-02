#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Point
{
	int len;
	int* arr;

public:
	Point(int _len);
	~Point();

	void SetArr();

	void Print();

	void clone(Point& p);

private:

};

Point::Point(int _len)
{
	len = _len;

	arr = new int[len];
}

Point::~Point()
{
	delete[] arr;
}

void Point::SetArr()
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void Point::Print()
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void Point::clone(Point& p)
{
	if (0 < len)
	{
		delete[] arr;
	}

	len = p.len;

	arr = new int[len];

	for (int i = 0; i < len; i++)
	{
		arr[i] = p.arr[i];
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	Point p1(5);
	Point p2(0);

	p1.SetArr();

	p2.clone(p1);

	p1.Print();
	p2.Print();

}
