#include <iostream>
#include<iomanip>

using namespace std;

int main()
{

	int startday;
	int days;
	int col = 1;

	// ��¥ �� ��ȿ�� �˻�
	do
	{
		cout << "�� ���� ��¥ ���� �Է��ϼ��� (28, 29, 30, 31) : ";
		cin >> days;
	} while (days < 28 || days > 31);

	// ���� ���� ��ȿ�� �˻�
	do
	{
		cout << "ù ���� ������ �Է��ϼ��� (0~6) : ";
		cin >> startday;
	} while (startday < 0 || startday > 6);

	// �޷��� header ���
	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
	cout << "--- --- --- --- --- --- ---" << endl;

	// �޷� ù �ٿ� ���� �߰�
	for (int space = 0; space < startday; space++)
	{
		cout << "    ";
		col++;
	}

	// �޷� ��¥ ���
	for (int day = 1; day < days+1; day++)
	{
		cout << setw(3) << day << " ";
		col++;

		if (col > 7)
		{
			cout << endl;
			col = 1;
		}
	}

	return 0;
}