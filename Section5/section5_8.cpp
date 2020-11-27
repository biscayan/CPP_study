#include <iostream>

using namespace std;

void break_or_return()
{

	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b') break;
		else if (ch == 'r') return;
	}
	
	//break이면 표출되고, return이면 표출되지 않음
	cout << "hello" << endl;
}


int main()
{
	break_or_return();

	for (int i = 0; i < 10; i++)
	{
		//조건에 걸리면 아래 내용을 진행하지 않음, 그냥 넘어감
		if (i % 2 == 0)
			continue;

		cout << i << endl;
	}

	while (true)
	{
		char mode;
		cin >> mode;

		cout << mode << endl;

		//무한loop 탈출
		if (mode == 'x')
			break;
	}

	return 0;
}