#include <iostream>

//namespace�� ���� �ΰ��� ������ Ȯ���� �ٸ��ٴ� ���� �˷���
namespace work1
{
	int a = 1;
	void dosomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void dosomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;

	//int apple = 5; �̸��� ���� ���� ���� �������� �ϳ��� �־��

	{
		//int apple = 3; ��� �ȿ��� �����Ǹ� �ϸ� ��� �ȿ����� �����
		//cout << apple << endl; //3

		apple = 1; //�̹� ���ǵ� apple�� ���� �ٲ��� 
		cout << apple << endl; //1
	}

	cout << apple << endl; //1

	// :: -> scope resolution operator (��������������)
	work1::a;
	work1::dosomething(); // +3

	work2::a;
	work2::dosomething(); // +5

	cout << work1::a << endl; //4
	cout << work2::a << endl; //6
	
	return 0;
}

//apple = 3; �޸𸮰� �ݳ��Ǿ� ���� �Ұ���