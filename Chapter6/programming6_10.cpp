#include <iostream>
#include <cmath>

using namespace std;

void print_log()
{
	int x;

	do
	{
		cout << "1~10의 정수를 입력하세요 : ";
		cin >> x;

	} while (x < 1 || x > 10);

	cout << x << "의 log = " << log2(x) << endl;
}
int main()
{
	print_log();

	return 0;
}