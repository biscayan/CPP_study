#include <iostream>
#include <cmath>

using namespace std;

void print_sqrt()
{	
	int x;

	do
	{
		cout << "1~10�� ������ �Է��ϼ��� : ";
		cin >> x;

	} while (x < 1 || x > 10);

	cout << x << "�� ������ = " <<sqrt(x) << endl;
}
int main()
{	
	print_sqrt();
	
	return 0;
}