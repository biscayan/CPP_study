#include <iostream>

using namespace std;

int main()
{
	int num, leftnum;

	// ���� �Է¹ޱ�
	cout << "���� �ƴ� ������ �Է��ϼ��� : ";
	cin >> num;

	do
	{
		leftnum = num % 10;
		num /= 10;

	} while (num > 0);

	cout << "���� ���ʿ� �ִ� ���ڴ� " << leftnum << "�Դϴ�." <<endl;

	return 0;
}