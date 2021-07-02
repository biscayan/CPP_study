#include <iostream>

using namespace std;

void reverse(int* pArr, int size)
{
	int i = 0;
	int j = size - 1;

	while (i < size / 2)
	{
		int temp = *(pArr + i);
		*(pArr + i) = *(pArr + j);
		*(pArr + j) = temp;
		i++;
		j--;
	}
}

int main()
{
	int arr[5] = { 11,12,13,14,15 };

	cout << "기존의 배열 출력 : ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	reverse(arr, 5);
	
	cout << "뒤집어진 배열 출력 : ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}