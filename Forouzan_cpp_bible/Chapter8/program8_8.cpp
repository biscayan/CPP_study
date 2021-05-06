#include <iostream>

using namespace std;

void reverse(const int arr1[], int arr2[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		arr2[j] = arr1[i];
	}
}

void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{	
	const int CAPACITY = 5;

	int arr1[CAPACITY] = { 1,2,3,4,5 };
	int arr2[CAPACITY];

	reverse(arr1, arr2, CAPACITY);

	print(arr1, CAPACITY);
	print(arr2, CAPACITY);

	return 0;
}
