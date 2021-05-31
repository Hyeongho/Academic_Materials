#pragma once

#include <iostream>

using namespace std;

template <typename T>

class Point
{
	T x, y;

public:
	Point();
	Point(T _x, T _y)
	{ 
		x = _x;
		y = _y;
	}

	~Point()
	{

	}

	double magnitude()
	{ 
		return sqrt((double)x * x + y * y); 
	}

	Point operator+(Point p)
	{ 
		return Point(x + p.x, y + p.y); 
	}

	Point operator-(Point p)
	{
		return Point(x - p.x, y - p.y); 
	}

	friend Point operator*(double s, Point p) 
	{
		return Point((T)(s * p.x), (T)(s * p.y));
	}

	friend ostream& operator << (ostream& os, const Point& p) 
	{
		os << "(" << p.x << "," << p.y << ")";
		return os;
	}
};

