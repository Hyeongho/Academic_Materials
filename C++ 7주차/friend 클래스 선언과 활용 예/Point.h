#pragma once

#include <iostream>
#include <string>

using namespace std;

class Point
{
	int x;
	int y;

	friend class Shape;
	friend class Line;

public:
	Point(int _x, int _y);
	~Point();

	void Print();
};

