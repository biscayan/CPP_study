#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4;
	double divider = 4.0;

	cout << "4���� ���ڸ� �Է��ϼ��� : ";
	cin >> num1 >> num2 >> num3 >> num4;

	double average = (num1 + num2 + num3 + num4) / divider;

	cout << "��� : " << average << endl;

	return 0;
}