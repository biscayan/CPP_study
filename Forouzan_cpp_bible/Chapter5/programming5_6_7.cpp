#include <iostream>

using namespace std;

int main()
{
	cout << "7�� ���� �� �ִ� ���� (����:1~100) : ";

	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;

	cout << "5�� 7�� ���ÿ� ���� �� �ִ� ���� (����:1~100) : ";

	for (int i = 1; i < 101; i++)
	{
		if (i % 7 == 0 && i % 5 == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}