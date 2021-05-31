#pragma once

#include "Point.h"

class Shape
{
protected:
	Point p;

public:
	Shape(int _x, int _y);
	~Shape();

	void Draw();
};

