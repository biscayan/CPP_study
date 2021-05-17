#include <iostream>

using namespace std;

bool checkSame(int arr1[], int arr2[])
{
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}


void mulTwo(int arr1[], int arr2[])
{
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i] * 2;
	}
}


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };

	cout << checkSame(arr1,arr2) << endl;

	mulTwo(arr1, arr2);
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}