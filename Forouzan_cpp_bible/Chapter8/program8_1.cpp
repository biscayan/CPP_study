#include <iostream>

using namespace std;

int main()
{
	const int CAPACITY = 10;
	int numArray[CAPACITY];

	int size;

	do
	{
		cout << "배열의 크기를 입력하세요 : ";
		cin >> size;
	} while (size<1 || size>CAPACITY);

	cout << size << "개의 수를 입력하세요 : ";
	for (int i = 0; i < size; i++)
	{
		cin >> numArray[i];
	}

	cout << "배열을 거꾸로 출력 : ";
	for (int j = size - 1; j >= 0; j--)
	{
		cout << numArray[j] << " ";
	}

	return 0;
}