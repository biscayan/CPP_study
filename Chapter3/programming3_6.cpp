#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> num;

	int first = num / 100;
	int second = num / 10 - (num / 100 * 10);
	int third = num % 10;

	cout << "���� ���� : " << third << second << first << endl;

	return 0;
}