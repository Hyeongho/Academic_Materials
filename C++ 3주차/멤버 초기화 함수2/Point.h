#pragma once

#include <iostream>

using namespace std;

class Line
{
	int a;
	int b;

public:

	Line(int _a, int _b);

	void print();

};

class Point
{
	Line l;

public:
	Point(int la, int lb);

	void print();
};