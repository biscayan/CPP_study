#include <iostream>

using namespace std;

int main()
{
	int num;

	do
	{
		cout << "���� ������ �Է��ϼ��� : ";
		cin >> num;
	} while (num <= 0);

	if (num == 1)
	{
		cout << "1�� �Ҽ��� �ռ����� �ƴմϴ�." << endl;
	}

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			cout << num << "�� " << i << "�� ������ �������� �ռ����Դϴ�." << endl;
			return 0;
		}
	}

	cout << num << "�� �Ҽ��Դϴ�." << endl;

	return 0;
}