#include <iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;

	// ���������� : �����Ϳ� ���� ������
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl; // 00EFFC1C 5 00EFFC34
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl; //00EFFC34 00EFFC1C 00EFFC28 
	cout << **ptrptr << endl; //5

	// ����,����...�����͵� ���� (����������)

	// ���������ʹ� 2���� ����� ������ �� ���� ����
	const int row = 3;
	const int col = 5;

	int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};

	int** rows = new int* [row] {r1, r2, r3};

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;

	return 0;
}
