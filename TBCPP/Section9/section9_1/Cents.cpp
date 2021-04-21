#include "Cents.h"

Cents::Cents(int val)
	: m_value(val)
{}

int Cents::getCents() const
{
	return m_value;
}

// 산술연산자 오버로딩은 다소 위험부담이 있음
Cents operator + (const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

/*
Cents operator + (const Cents& c2)
{
	return Cents(this->m_value + c2.m_value);
}
*/
