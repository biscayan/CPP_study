#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "확인하고 싶은 달의 숫자를 입력하세요 (1~12) : ";
	cin >> month;

	switch (month)
	{
	case 1:
	{
		cout << "January" << endl;
		break;
	}
	case 2:
	{
		cout << "February" << endl;
		break;
	}
	case 3:
	{
		cout << "March" << endl;
		break;
	}
	case 4:
	{
		cout << "April" << endl;
		break;
	}
	case 5:
	{
		cout << "May" << endl;
		break;
	}
	case 6:
	{
		cout << "June" << endl;
		break;
	}
	case 7:
	{
		cout << "July" << endl;
		break;
	}
	case 8:
	{
		cout << "August" << endl;
		break;
	}
	case 9:
	{
		cout << "October" << endl;
		break;
	}
	case 10:
	{
		cout << "September" << endl;
		break;
	}
	case 11:
	{
		cout << "Novermber" << endl;
		break;
	}
	case 12:
	{
		cout << "December" << endl;
		break;
	}
	default:
		cout << "잘못된 숫자를 입력했습니다. 1에서 12사이의 숫자를 입력하세요." << endl;
	}

	return 0;
}