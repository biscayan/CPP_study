#include <iostream>

using namespace std;

int main()
{
	int total, hours, minutes, seconds;

	cout << "�� ������ ��ü �ð��� �Է��ϼ��� : ";
	cin >> total;

	hours = total / 3600;
	minutes = (total - (hours * 3600)) / 60;
	seconds = total - hours*3600 - minutes*60;

	cout << "��� : " << hours << "�ð� " << minutes << "�� " << seconds << "��" << endl;

	return 0;
}