#include <iostream>
#include <cmath>

using namespace std;

void print_log()
{
	int x;

	do
	{
		cout << "1~10�� ������ �Է��ϼ��� : ";
		cin >> x;

	} while (x < 1 || x > 10);

	cout << x << "�� log = " << log2(x) << endl;
}
int main()
{
	print_log();

	return 0;
}