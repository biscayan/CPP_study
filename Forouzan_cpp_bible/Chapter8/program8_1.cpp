#include <iostream>

using namespace std;

int main()
{
	const int CAPACITY = 10;
	int numArray[CAPACITY];

	int size;

	do
	{
		cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
		cin >> size;
	} while (size<1 || size>CAPACITY);

	cout << size << "���� ���� �Է��ϼ��� : ";
	for (int i = 0; i < size; i++)
	{
		cin >> numArray[i];
	}

	cout << "�迭�� �Ųٷ� ��� : ";
	for (int j = size - 1; j >= 0; j--)
	{
		cout << numArray[j] << " ";
	}

	return 0;
}