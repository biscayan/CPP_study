#include <iostream>

using namespace std;

int main()
{
	cout << "7로 나눌 수 있는 숫자 (범위:1~100) : ";

	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	cout << "5와 7로 동시에 나눌 수 있는 숫자 (범위:1~100) : ";

	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0 && i % 5 == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}