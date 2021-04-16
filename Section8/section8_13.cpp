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
	// 변수선언 없이 사용 가능
	A(10).print(); //10

	return 0;
}