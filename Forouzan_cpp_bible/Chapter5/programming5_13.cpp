#include <iostream>

using namespace std;

int main()
{
	int num;
	int num_sum = 0;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> num;

	do
	{
		num_sum += num % 10;
		num /= 10;
	} while (num);

	cout << "�ڸ����� �� : " << num_sum << endl;

	return 0;
}