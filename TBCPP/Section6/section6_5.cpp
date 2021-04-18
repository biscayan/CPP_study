#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_cols = 5;

	//row-major
	//num_rows�� ��������, �� ���� �ִ����� compiler�� �ڵ����� ��������
	//num_cols�� �����Ұ�
	int arr[num_rows][num_cols] =
	{
		//���� ������ ���� 0���� ä����
		{1,2,3,4,5}, //row0
		{6,7,8,9,10}, //row1
		{11,12,13,14,15} //row2
	};

	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_cols; ++j)
		{
			cout << arr[i][j] << '\t';
		}

		cout << endl;
	}
	
	//�ּҰ��� 4�� ����, ���������δ� 1������ �Ǿ������� row���� ��� ǥ���� ����
	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_cols; ++j)
		{
			cout << (int)&arr[i][j] << '\t';
		}

		cout << endl;
	}

	return 0;
}