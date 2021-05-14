#include <iostream>

using namespace std;

void printArr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	//8-3
	int arr1[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			arr1[i] = 1;
		}
		else
		{
			arr1[i] = 0;
		}
	}

	printArr(arr1);
	cout << endl;

	//8-4
	int arr2[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			arr2[i] = 5;
		}
		else
		{
			arr2[i] = 10;
		}
	}

	printArr(arr2);
	cout << endl;

	return 0;
}