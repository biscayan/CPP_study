#include <iostream>

using namespace std;

int main()
{
	int grade;
	int registration = 10;
	int total_fee;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> grade;

	if (grade >= 12)
	{
		total_fee = registration + 12 * 10;
	}
	else
	{
		total_fee = registration + grade * 10;
	}

	cout << "�� ������� " << total_fee << "�޷��Դϴ�." << endl;

	return 0;
}