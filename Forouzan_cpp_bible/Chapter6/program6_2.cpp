#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	double term;

	cout << "2������ ����� �Է��ϼ��� : ";
	cin >> a;

	cout << "1������ ����� �Է��ϼ��� : ";
	cin >> b;

	cout << "����� �Է��ϼ��� : ";
	cin >> c;

	// �Ǻ���
	term = pow(b, 2) - (4 * a * c);

	if (term < 0)
	{
		cout << "���� �������� �ʽ��ϴ�." << endl;
	}
	else if (term == 0)
	{
		double x = -b / (2 * a);

		cout << "�߱��� �����մϴ�." << endl;
		cout << "�� : " << x << endl;
	}
	else if (term > 0)
	{
		double x1 = (-b + sqrt(term)) / (2 * a);
		double x2 = (-b - sqrt(term)) / (2 * a);

		cout << "�� ���� ���� �����մϴ�." << endl;
		cout << "�� : " << x1 << ", " << x2;
	}

	return 0;
}