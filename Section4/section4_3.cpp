#include <iostream>

namespace a
{
	int my_variable = 1;
}

namespace b
{
	int my_variable = 2;
}

int main()
{
	using namespace std;

	//using namespace a;
	//using namespace b;

	//my_variable�� namespace a�� b ��ο� �����Ƿ� ambiguous��
	cout << my_variable << endl;
	
	//�ذ�å
	//1.namespace�� ��������
	cout << a::my_variable << endl;
	cout << b::my_variable << endl;

	//2.namespace�� ������� ������
	{
		using namespace a;
		cout << my_variable << endl;
	}

	{
		using namespace b;
		cout << my_variable << endl;
	}

	return 0;

}