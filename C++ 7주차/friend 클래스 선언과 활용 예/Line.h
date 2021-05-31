#pragma once

#include "Shape.h"

class Line : Shape
{
	Point q;

public:
	Line(int _x1, int _y1, int _x2, int _y2);
	~Line();

	void Draw();
	 
};

