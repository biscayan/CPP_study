#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "행의 수를 입력하세요 : ";
	cin >> rows;

	cout << "열의 수를 입력하세요 : ";
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