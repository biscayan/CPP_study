#include <iostream>

using namespace std;

int main()
{
	unsigned int num1, num2;

	cout << "2���� ���� ������ �Է��ϼ��� (����->1~100) : ";
	cin >> num1 >> num2;

	cout << num1 << "��(��) " << num2 << "�� ����� : ";

	for (int i = 1; i <= 100; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}