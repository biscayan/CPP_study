#include <iostream>

using namespace std;

int main_lec()
{
	int x(0); //x=0;�� ����

	cout << x << "->" << &x << endl; //&�� �޸� �ּҸ� �˷���

	//{}�� ���� ������ ����
	{
		//�������� ����, ���������� ������ ����� ����� �� ����
		//���� x�� �ٸ� x��, �޸� �ּҰ� �ٸ�
		int x = 0;

		cout << x << "->" << &x << endl;
	}

	{
		int x = 1;

		cout << x << "->" << &x << endl;
	}
	return 0;
}