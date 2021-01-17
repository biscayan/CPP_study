#include <iostream>

using namespace std;

int main()
{
	char type;
	unsigned int time;
	unsigned int charge;

	cout << "차량의 종류를 입력하세요 (c/b/t) : ";
	cin >> type;

	cout << "주차 시간을 입력하세요 : ";
	cin >> time;

	switch (type)
	{
	case 'c':
	{
		charge = time * 2;
		cout << "요금은 " << charge << "달러입니다." << endl;
		break;
	}
	case 'b':
	{
		charge = time * 3;
		cout << "요금은 " << charge << "달러입니다." << endl;
		break;
	}
	case 't':
	{
		charge = time * 4;
		cout << "요금은 " << charge << "달러입니다." << endl;
		break;
	}
	default:
		cout << "차량의 타입을 다시 입력하세요." << endl;
	}

	return 0;
}