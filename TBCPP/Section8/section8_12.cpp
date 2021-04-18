#include <iostream>

using namespace std;

// class A������ ������ ����, B�� �������� �̸� �˷���
// forward declaration
class B;

class A
{
private:
	int m_value = 10;

	friend void print(A& a, B& b);
};

class B
{
private:
	int m_value = 20;

	friend void print(A& a, B& b);
};

void print(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
	A a;
	B b;

	print(a,b); //10 20

	return 0;
}