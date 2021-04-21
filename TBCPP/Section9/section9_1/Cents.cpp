#include "Cents.h"

Cents::Cents(int val)
	: m_value(val)
{}

int Cents::getCents() const
{
	return m_value;
}

// ��������� �����ε��� �ټ� ����δ��� ����
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
