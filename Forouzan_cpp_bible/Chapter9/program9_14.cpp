#include <iostream>

using namespace std;

int main()
{
	int size;
	int* pArray;

	do
	{
		cout << "0보다 큰 배열의 크기를 입력하세요 : ";
		cin >> size;
	} while (size <= 0);

	pArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << i << "번째 요소의 값을 입력하세요 : ";
		cin >> *(pArray + i);
	}

	cout << "배열 내부의 요소 : ";
	for (int i = 0; i < size; i++)
	{
		cout << *(pArray + i) << " ";
	}

	delete[] pArray;

	return 0;
}