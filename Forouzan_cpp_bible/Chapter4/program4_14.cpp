#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int larger, smaller;

	cout << "���� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	larger = num1 > num2 ? num1 : num2;
	smaller = num1 < num2 ? num1 : num2;

	cout << "�� ū ���� : " << larger << endl;
	cout << "�� ���� ���� : " << smaller << endl;
	
	return 0;
}