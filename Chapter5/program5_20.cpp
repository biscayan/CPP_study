#include <iostream>

using namespace std;

int main()
{
	int base, exponent;
	unsigned long int power = 1;

	do
	{
		cout << "���� �Է��ϼ��� (���� �ƴ� ����) : ";
		cin >> base;
	} while (base < 0);

	do
	{
		cout << "������ �Է��ϼ��� (���� �ƴ� ����) : ";
		cin >> exponent;
	} while (exponent < 0);

	for (int i = 1; i <= exponent; i++)
	{
		power *= base;
	}

	cout << base << "�� " << exponent << "������ " << power << "�Դϴ�." << endl;

	return 0;
}