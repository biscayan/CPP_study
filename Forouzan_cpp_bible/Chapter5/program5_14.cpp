#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "���� ���� �Է��ϼ��� : ";
	cin >> rows;

	cout << "���� ���� �Է��ϼ��� : ";
	cin >> cols;

	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			cout << "*";
		}
		cout<<endl;
	}

	return 0;
}