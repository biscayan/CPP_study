#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.141592653589793238462;
	int n;
	double s;
	double peri, area;

	do
	{
		cout << "���� ������ �Է��ϼ��� (4 �̻��� ����) : ";
		cin >> n;
	} while (n < 4);

	do
	{
		cout << "���� ���̸� �Է��ϼ��� : ";
		cin >> s;
	} while (s < 0.0);

	// �ѷ� ����
	peri = n * s;

	// ���� ����
	area = (n * pow(s, 2)) / (n * tan(PI / n));

	cout << n << "������ �ѷ� : " << peri << endl;
	cout << n << "������ ���� : " << area << endl;

	return 0;

}