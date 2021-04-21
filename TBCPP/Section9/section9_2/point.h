#pragma once
#include <iostream>

class Point
{
private:
	double m_x;
	double m_y;
	double m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0);

	double getX();
	double getY();
	double getZ();

	friend std::ostream& operator <<(std::ostream& out, const Point& point);
};