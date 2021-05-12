#pragma once

#include <iostream>
#include <string>
#include "Position.h"

using namespace std;

class Monster
{
private:
	std::string m_name;

	// Position is part of Monster (Composition)
	Position m_location;

public:
	Monster(const std::string name, const Position & pos)
		:m_name(name), m_location(pos)
	{}

	void moveTo(const Position& pos)
	{
		m_location.set(pos);
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};