#include <iostream>

using namespace std;

int main()
{
	unsigned int num;

	cout << "�� �ڸ��� ���� ������ �Է��ϼ��� : ";
	cin >> num;

	int num1 = num / 10;
	int num2 = num % 10;

	cout << num2 << num1 << endl;

	return 0;
}