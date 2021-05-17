#include <iostream>

using namespace std;

bool checkSort(int n, int arr[])
{	
	int num = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] < num)
		{
			return false;
		}
		num = arr[i];
	}
	return true;
}


bool checkValue(int n, int arr[], int value)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == value)
		{
			return true;
		}
	}
	return false;
}


int main()
{	
	const int SIZE = 5;

	int myArr[SIZE] = { 6,2,1,4,5 };

	cout << checkSort(SIZE, myArr) << endl;
	cout << checkValue(SIZE, myArr, 3) << endl;

	return 0;
}