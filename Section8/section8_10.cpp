#include <iostream>

using namespace std;

class Something
{
public:
	// �ʱ�ȭ �Ұ���
	static int s_value;
};

// ��������� �ƴ� cpp���Ͽ� �����صξ�� ��
int Something::s_value = 1;

int main()
{
	cout << &Something::s_value << " "<< Something::s_value << endl; //00D5C000 1

	Something st1;
	Something st2;

	Something::s_value += 1;

	cout << &st1.s_value << " " << st1.s_value << endl; //00D5C000 2

	st2.s_value += 10;

	cout << &st2.s_value << " " << st2.s_value << endl; //00D5C000 12

	return 0;
}