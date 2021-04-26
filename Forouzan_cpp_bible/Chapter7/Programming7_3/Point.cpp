#include "Point.h"
#include <cmath>

Point::Point(int x, int y)
	:m_x(x), m_y(y)
{}

void Point::print()
{
	cout << "(" << m_x << "," << m_y << ")" << endl;
}

double Point::distance(Point p2)
{
	double dis;
	dis = sqrt(pow((p2.m_x - m_x), 2) + pow((p2.m_y - m_y), 2));

	return dis;
}