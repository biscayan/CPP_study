#include <iostream>

using namespace std;

int getnum()
{
	while (true)
	{
		int num;

		cout << "Enter an integer number : ";
		cin >> num;

		//너무 큰 숫자가 들어와서 cin이 실패할 경우
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invalid number, enter another number" << endl;
		}
		else
		{
			//buffer를 비움
			//입력이 두 개 들어왔을 때의 문제를 해결함
			//32767은 적당히 큰 숫자
			cin.ignore(32767, '\n');

			return num;
		}
	}	
}

char getoper()
{
	while (true)
	{
		char oper;

		cout << "Enter an operator ( + or - ) : ";
		cin >> oper;

		cin.ignore(32767, '\n');

		if (oper == '+'|oper == '-')
		{
			return oper;
		}
		else
		{
			cout << "Invalid operator, enter another operator" << endl;
		}
	}
}

void printresult(int x, char oper, int y)
{
	if (oper == '+')
	{
		cout << x << " + " << y << " = " << x + y << endl;
	}

	else if (oper == '-')
	{
		cout << x << " - " << y << " = " << x - y << endl;
	}

	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getnum();
	char oper = getoper();
	int y = getnum();

	printresult(x, oper, y);

	return 0;
}