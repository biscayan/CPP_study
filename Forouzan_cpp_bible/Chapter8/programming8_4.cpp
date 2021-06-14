#include<iostream>
#include <math.h>

using namespace std;

void roundShift(int arr[])
{
	int x = arr[9];

	for (int i = 9; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[0] = x;
}

void print(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	const int CAPACITY = 10;
	int arr[CAPACITY];

	for (int i = 0; i < CAPACITY; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	print(arr);

	roundShift(arr);

	print(arr);

	return 0;
}