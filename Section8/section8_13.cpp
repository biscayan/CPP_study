#include <iostream>

using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		:m_value(input)
	{}

	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{	
	// �������� ���� ��� ����
	A(10).print(); //10

	return 0;
}