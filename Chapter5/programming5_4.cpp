#include <iostream>

using namespace std;

int main()
{
	int num;
	int positive = 0, negative = 0;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;

	if (num < 0)
	{
		negative += 1;
	}

	else if (num > 0)
	{
		positive += 1;
	}

	while (num != 0)
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;

		if (num < 0)
		{
			negative += 1;
		}

		else if (num > 0)
		{
			positive += 1;
		}
	}

	cout << endl;

	cout << "���� ������ ���� : " << negative << endl;
	cout << "���� ������ ���� : " << positive << endl;

	return 0;
}