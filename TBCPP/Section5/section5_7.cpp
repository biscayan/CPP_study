#include <iostream>

using namespace std;

int main()
{
	//����;����;����
	for (int i = 0; i < 10; i++) //iteration
	{
		cout << i << endl;
	}

	for (int i = 9; i >= 0; i--)
	{
		cout << i << endl;
	}

	//������ ������ �ִ� �͵� ����
	for (int i = 0, j = 9; i < 10; i++, j--)
	{
		cout << i << " " << j << endl;
	}

	//����for��
	//0,0 0,1 0,2 0,3 0,4 -> 1,0 1,1 1,2 1,3 1,4 -> ...
	for (int i = 0; i < 5 ; i++)
		for (int j = 0; j < 5; j++)
		{
			cout << i << "," << j << endl;
		}

	return 0;
}