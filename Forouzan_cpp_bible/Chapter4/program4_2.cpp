#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	double hours;
	double rate = 10000;
	double regularpay;
	double overpay;
	double totalpay;

	cout << "���� �ð��� �Է��ϼ��� : ";
	cin >> hours;

	regularpay = hours * rate;

	if (hours > 40)
	{
		overpay = (hours - 40) * rate * 0.3;
	}
	else
	{
		overpay = 0.0;
	}

	totalpay = regularpay + overpay;

	cout << fixed << showpoint;
	cout << "�Ϲ� �޿� : " << setprecision(2) << regularpay << endl;
	cout << "�ʰ� �ٹ��� ���� �޿� : " << setprecision(2) << overpay << endl;
	cout << "��ü �޿� : " << setprecision(2) << totalpay << endl;

	return 0;
}