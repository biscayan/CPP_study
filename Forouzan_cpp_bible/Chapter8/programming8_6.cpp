#include<iostream>
#include <math.h>

using namespace std;

void printArr(int arr[])
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
	int array[CAPACITY];
	int re_array[CAPACITY];

	for (int i = 0; i < CAPACITY; i++)
	{
		array[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < CAPACITY; i++)
	{
		re_array[i] = array[CAPACITY - i - 1];
	}

	printArr(array);
	printArr(re_array);

	return 0;
}