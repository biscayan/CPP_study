#include <iostream>

using namespace std;

int main()
{
	int payment;
	int count = 0;

	cout << "�����ؾ� �ϴ� �ݾ��� �Է��ϼ��� : ";
	cin >> payment;

	while (payment)
	{
		if (payment >= 100)
		{
			payment -= 100;
			count += 1;
		}
		else if (payment >= 50)
		{
			payment -= 50;
			count += 1;
		}
		else if (payment >= 20)
		{
			payment -= 20;
			count += 1;
		}
		else if (payment >= 10)
		{
			payment -= 10;
			count += 1;
		}
		else if (payment >= 5)
		{
			payment -= 5;
			count += 1;
		}
		else if (payment >= 1)
		{
			payment -= 1;
			count += 1;
		}
	}

	cout << "����ؾ� �ϴ� ������ �ּ� ������ " << count << "�� �Դϴ�." << endl;

	return 0;
}

