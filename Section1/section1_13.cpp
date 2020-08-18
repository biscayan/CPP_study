#include <iostream>

namespace Myspace1
{
	//namespace �ȿ� namespace�� �� ���� �� �ִ�.
	namespace Innerspace
	{
		int My_function()
		{
			return 0;
		}
	}

	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace Myspace2
{	
	//�Լ��� �̸��� ���� ���� namespace�� �����������μ� �ذ�
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace std;

int main()
{
	using namespace Myspace1;
	using namespace Myspace1::Innerspace;
	cout << doSomething(3, 4) << endl;

	cout << My_function() << endl;

	//namespace ���� ::���� ǥ��
	cout << Myspace2::doSomething(3, 4) << endl;

}