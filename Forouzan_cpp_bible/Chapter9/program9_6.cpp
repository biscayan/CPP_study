#include <iostream>

using namespace std;

void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int x = 10;
	int y = 20;

	cout << "���� ������ x�� y�� ��" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	swap(&x, &y);

	cout << "���� ������ x�� y�� ��" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	return 0;
}