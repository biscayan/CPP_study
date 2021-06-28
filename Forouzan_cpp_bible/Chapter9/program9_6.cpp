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

	cout << "스왑 이전의 x와 y의 값" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	swap(&x, &y);

	cout << "스왑 이후의 x와 y의 값" << endl;
	cout << "x: " << x << "  " << "y: " << y << endl;

	return 0;
}