#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "������ �Է��ϼ��� (2000�� ~ 2099��) : ";
	cin >> year;

	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		cout << year << "���� �����Դϴ�." << endl;
	}
	else
	{
		cout << year << "���� ������ �ƴմϴ�." << endl;
	}

	return 0;
}