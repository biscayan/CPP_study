#include <iostream>

using namespace std;

int main()
{
	int num;
	int reverse_num;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> num;

	cout << "�Էµ� ���ڸ� �ݴ�� ��� : ";

	do
	{
		reverse_num = num % 10;
		num /= 10;

		cout << reverse_num;

	} while (num);

	return 0;
}