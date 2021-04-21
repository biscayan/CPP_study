#include "point.h"

Point::Point(double x, double y, double z)
	:m_x(x), m_y(y), m_z(z)
{}

double Point::getX()
{
	return m_x;
}

double Point::getY()
{
	return m_y;
}

double Point::getZ()
{
	return m_z;
}

std::ostream& operator <<(std::ostream& out, const Point& point)
{
	out << point.m_x << ", " << point.m_y << ", " << point.m_z;
	return out;
}