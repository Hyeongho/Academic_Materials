#pragma once

#include "Shape.h"

class Circle : public Shape
{
	int area;

public:
	int radius;

	Circle();
	Circle(int _x, int _y, int _radius);
	~Circle();

	int GetArea();

	void Draw();
};

