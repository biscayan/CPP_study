#include <iostream>

using namespace std;

int main()
{
	int numDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month;

	do
	{
		cout << "���� �Է��ϼ��� : ";
		cin >> month;
	} while (month < 1 || month >12);

	cout << month << "������ " << numDays[month] << "���� ���� �ֽ��ϴ�." << endl;

	return 0;
}