#pragma once

class Cents
{
private:
	int m_value;

public:
	Cents(int val);
	int getCents() const;
	friend Cents operator + (const Cents& c1, const Cents& c2);
	//Cents operator + (const Cents& c2);
};