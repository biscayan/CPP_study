#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "���� ������ �Է��ϼ��� (���� -> 1~100) : ";
	cin >> num;

	cout << num << "�� ��� : ";

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}