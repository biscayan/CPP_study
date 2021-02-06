#include <iostream>

using namespace std;

int main()
{
	// 1-type1
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	// 1-type2
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < 5-i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	// 1-type4
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j > i; j--)
		{
			cout << " ";
		}

		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	// 2-type1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 2 * i; k < 5 * 2 - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	// 2-type2
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j > i; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < i*2+1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}