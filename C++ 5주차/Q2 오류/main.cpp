#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Point
{
	int* arr;

	int height;
	int width;

public:
	Point();
	~Point();

	Point(Point& p);

	void SetArr();

	void Mul(Point *_p1, Point *_p2);

	void Print();

private:

};

Point::Point()
{
	height = 0;
	width = 0;

	arr = new int[2];
}

Point::~Point()
{
	delete[] arr;
}

Point::Point(Point& p)
{
}

void Point::SetArr()
{
	height = rand() % 10 + 1;
	width = rand() % 10 + 1;

	arr[0] = height;
	arr[1] = width;
}

void Point::Mul(Point *_p1, Point *_p2)
{
	for (int i = 0; i < 2; i++)
	{
		arr[i] = _p1->arr[i] * _p2->arr[i];
	}
}

void Point::Print()
{
	for (int i = 0; i < 2; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int main()
{
	srand((unsigned int)time(NULL));

	Point p1;
	Point p2;
	Point p3;

	p1.SetArr();
	p2.SetArr();

	p1.Print();
	p2.Print();

	p3.Mul(&p1, &p2);

	p3.Print();

}