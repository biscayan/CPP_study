#include <iostream>

using namespace std;

int main()
{
	int size;
	int* pArray;

	do
	{
		cout << "0���� ū �迭�� ũ�⸦ �Է��ϼ��� : ";
		cin >> size;
	} while (size <= 0);

	pArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << i << "��° ����� ���� �Է��ϼ��� : ";
		cin >> *(pArray + i);
	}

	cout << "�迭 ������ ��� : ";
	for (int i = 0; i < size; i++)
	{
		cout << *(pArray + i) << " ";
	}

	delete[] pArray;

	return 0;
}