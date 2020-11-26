#include <iostream>

using namespace std;

int main()
{
	//변수;조건;연산
	for (int i = 0; i < 10; i++) //iteration
	{
		cout << i << endl;
	}

	for (int i = 9; i >= 0; i--)
	{
		cout << i << endl;
	}

	//변수를 여러개 넣는 것도 가능
	for (int i = 0, j = 9; i < 10; i++, j--)
	{
		cout << i << " " << j << endl;
	}

	//이중for문
	//0,0 0,1 0,2 0,3 0,4 -> 1,0 1,1 1,2 1,3 1,4 -> ...
	for (int i = 0; i < 5 ; i++)
		for (int j = 0; j < 5; j++)
		{
			cout << i << "," << j << endl;
		}

	return 0;
}