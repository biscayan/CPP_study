#include <iostream>

using namespace std;

void break_or_return()
{

	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b') break;
		else if (ch == 'r') return;
	}
	
	//break�̸� ǥ��ǰ�, return�̸� ǥ����� ����
	cout << "hello" << endl;
}


int main()
{
	break_or_return();

	for (int i = 0; i < 10; i++)
	{
		//���ǿ� �ɸ��� �Ʒ� ������ �������� ����, �׳� �Ѿ
		if (i % 2 == 0)
			continue;

		cout << i << endl;
	}

	while (true)
	{
		char mode;
		cin >> mode;

		cout << mode << endl;

		//����loop Ż��
		if (mode == 'x')
			break;
	}

	return 0;
}