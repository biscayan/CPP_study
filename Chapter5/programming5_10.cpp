#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	int r;

	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}


int main()
{
	int m, n;

	cout << "�� ���� ������ �Է��ϼ��� : ";
	cin >> m >> n;

	int gcd = GCD(m, n);

	cout << m << "��(��) "<< n << "�� �ִ������� "<< gcd << "�Դϴ�." << endl;

	return 0;
}