#include <iostream>

using namespace std;

int main()
{
	int work_time;
	int payment;

	cout << "���� �ð��� �Է��ϼ��� : ";
	cin >> work_time;

	cout << "�ñ��� �Է��ϼ��� : ";
	cin >> payment;

	int extra_time = work_time - 40;
	double extra_money = (payment + payment * 0.6) * extra_time;

	cout << "��ü �޿� : " << payment * 40 + extra_money << "��" <<endl;

	return 0;
}