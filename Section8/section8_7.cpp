#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		setID(id);

		// 자기 자신의 주소를 출력
		cout << this << endl;
	}

	void setID(int id) { m_id = id; }

	int getID() { return m_id; }
};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		:m_value(init_value)
	{}

	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mul(int value) { m_value *= value; return *this; }

	void print() { cout << m_value << endl; }
};

int main()
{
	Simple s1(1), s2(2);

	Calc calc(10);
	calc.add(10).sub(2).mul(2).print(); // 36

	return 0;
}