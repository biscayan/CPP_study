#include <iostream>

using namespace std;

int capacity = 5;

void swap(int size, int arr[], int idx1, int idx2)
{
	int tmp = 0;

	tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
}


void del(int size, int arr[], int idx)
{
	for (int i = 0; i < size-1; i++)
	{
		if (i >= idx)
		{
			arr[i] = arr[i + 1];
		}
	}
	capacity -= 1;
}


void insert(int size, int arr[], int idx, int data)
{
	capacity += 1;

	for (int i = size-1; i >0; i--)
	{
		if (i > idx)
		{
			arr[i] = arr[i - 1];
		}
		else if(i == idx)
		{
			arr[i] = data;
		}
	}
}


int main()
{

	int myArr[] = { 1,2,3,4,5 };

	//8-10
	swap(capacity, myArr, 1, 3);

	for (int i = 0; i < capacity; i++)
	{
		cout << myArr[i] << " ";
	}
	cout << endl; // 1 4 3 2 5
	
	//8-11
	del(capacity, myArr, 1);

	for (int i = 0; i < capacity; i++)
	{
		cout << myArr[i] << " ";
	}
	cout << endl; // 1 3 2 5

	//8-12
	insert(capacity, myArr, 2, 6);

	for (int i = 0; i < capacity; i++)
	{
		cout << myArr[i] << " ";
	}
	cout << endl; // 1 3 6 2 5

	return 0;
}
