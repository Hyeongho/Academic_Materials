#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int _x, int _y)
{
    x = _x;
    y = _y;
}

Point::~Point()
{

}

void Point::Print()
{
    cout << "Á¡ (" << x << ", " << y << ")" << endl;
}

double AvgPoint(Point* list, int n)
{
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += list[i].x;
    }

    return sum / n;
}

Point AddPoint(Point& p, Point q)
{
    Point r;

    r.x = p.x + q.x;
    r.y = p.y + q.y;

    return r;
}

Point SubPoint(Point& p, Point& q)
{
    return Point(p.x - q.x, p.y - q.y);
}
