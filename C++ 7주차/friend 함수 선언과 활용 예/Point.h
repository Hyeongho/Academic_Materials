#pragma once

#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:

	Point();
	Point(int _x, int _y);
	~Point();

	void Print();

	friend double AvgPoint(Point* list, int n);
	friend Point AddPoint(Point& p, Point q);
	friend Point SubPoint(Point& p, Point& q);

};

