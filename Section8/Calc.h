#pragma once

#include <iostream>

class Calc
{
private:
	int m_value;

	//����鸸 ���ΰ� body�� cpp���Ϸ� �̵�
public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mul(int value);

	void print();
};