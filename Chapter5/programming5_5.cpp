#include <iostream>

using namespace std;

int main()
{
	unsigned int num1, num2;

	do
	{
		cout << "�� ���� ���� ������ �Է��ϼ��� : ";
		cin >> num1 >> num2;
	} while (num1 < 0 || num2 < 0);
	
	cout << "Ȧ�� : ";

	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 1)
			cout << i << " ";
	}

	cout << endl;

	cout << "¦�� : ";

	for (int i = num1; i <= num2; i++)
	{
		if (i % 2 == 0)
			cout << i << " ";
	}

	cout << endl;

	return 0;
}