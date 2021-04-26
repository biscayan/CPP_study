#include "Two.h"

Two::Two(int x, char a)
	:m_x(x), m_a(a)
{}

int Two::getX() const
{
	return m_x;
}

char Two::getA() const
{
	return m_a;
}

void Two::setX(int x)
{
	m_x = x;
}

void Two::setA(char a)
{
	m_a = a;
}