#include <iostream>

using namespace std;

int main()
{
	int arr_len;
	cin >> arr_len;

	// arr_len�� �Է¹޾� array�� �޸𸮸� �������� �Ҵ�
	// array���� ��� �ִ� �ڸ��� 0�� �ڵ����� ä����
	int* array = new int[arr_len] {};

	array[0] = 1;
	array[1] = 2;
	
	for (int i = 0; i < arr_len; ++i)
	{
		cout << array[i] << endl;
	}
	
	// new�� ���� delete�� �� ����� �ض�!
	delete[] array;

	return 0;
}