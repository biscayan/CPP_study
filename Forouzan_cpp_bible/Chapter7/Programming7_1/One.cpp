#include "One.h"

One::One(int x, int y)
	:m_x(x), m_y(y)
{}

int One::getX() const
{
	return m_x;
}

int One::getY() const
{
	return m_y;
}