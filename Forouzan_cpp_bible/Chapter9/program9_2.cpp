#include <iostream>

using namespace std;

void swap(int& rx, int& ry)
{
	int tmp = rx;
	rx = ry;
	ry = tmp;
}

int main()
{
	int x = 10;
	int y = 20;

	cout << "���� ������ x�� y�� ��" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	swap(x, y);

	cout << "���� ������ x�� y�� ��" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	return 0;
}