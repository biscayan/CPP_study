#pragma once

#include <iostream>

class Calc
{
private:
	int m_value;

	//선언들만 나두고 body는 cpp파일로 이동
public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mul(int value);

	void print();
};