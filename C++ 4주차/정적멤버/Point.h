#pragma once

#include <iostream>
#include <string>

using namespace std;

class Point
{
	int x, y;
	static int count;

public:
	static void PrintCount();

	Point(int _x, int _y);
	Point(const Point& p);
	~Point();

	void Print(string msg);

	void Add(Point _a, Point _b);
};