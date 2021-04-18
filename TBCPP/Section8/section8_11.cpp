#include <iostream>

using namespace std;

class Something
{
private:
	static int s_value;
	int m_value;

public:

	// static�� �����ڿ��� �ʱ�ȭ �Ұ���, c++������ static�����ڵ� ����� ����
	/*
	* Something()
		:s_value(100)
	{}
	*/

	static int get_value()
	{
		return s_value;
	}

	// ��������Լ������� this�����͸� ����� �� ���� static�� �ƴѰ͵� ����� �Ұ����ϴ�
	/*
	static int get_value()
	{
		return this->s_value;
		return m_value;
	}
	*/
};

int Something::s_value = 10;

int main()
{
	cout << Something::get_value() << endl; //10

	int (*ptr)() = &Something::get_value;

	cout << ptr() << endl; //10

	return 0;
}