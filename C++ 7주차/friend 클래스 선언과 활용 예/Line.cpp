#include "Line.h"

Line::Line(int _x1, int _y1, int _x2, int _y2) : Shape(_x1, _y1), q(_x2, _y2)
{

}

Line::~Line()
{

}

void Line::Draw()
{
	cout << "[ ¼±ºÐ ] P1 = (" << p.x << ", " << p.y << "), P2 = (" << q.x << ", " << q.y << ")" << endl;
}
