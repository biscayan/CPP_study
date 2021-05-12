#pragma once
#include "Monster.h"

class Position
{
private:
	int m_x, m_y;

public:
	Position(const int &x, const int &y)
		:m_x(x), m_y(y)
	{}

	void set(const Position & pos)
	{
		set(pos.m_x, pos.m_y);
	}

	void set(const int& x, const int& y)
	{
		m_x = x;
		m_y = y;
	}

	friend std::ostream& operator << (std::ostream& out, const Position& pos)
	{
		out << pos.m_x << " " << pos.m_y;
		return out;
	}
};