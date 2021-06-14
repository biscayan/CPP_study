#include<iostream>
#include <math.h>

using namespace std;

void delMinMax(int arr[])
{
	int min = 101;
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != min && arr[i] != max)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}

int main()
{
	const int CAPACITY = 10;
	int array[CAPACITY];

	for (int i = 0; i < CAPACITY; i++)
	{
		array[i] = rand() % 100 + 1;
	}

	delMinMax(array);

	return 0;
}