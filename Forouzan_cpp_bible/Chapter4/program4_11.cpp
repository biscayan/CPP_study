#include <iostream>

using namespace std;

int main()
{

	int day_num;

	cout << "0~6 사이의 숫자를 입력하세요. [0(일), 1(월), 2(화), 3(수), 4(목), 5(금), 6(토)]" << endl;
	cout << "---> ";
	cin >> day_num;

	switch (day_num)
	{
	case 0: 
		cout << "일요일" << endl;
		break;

	case 1:
		cout << "월요일" << endl;
		break;

	case 2:
		cout << "화요일" << endl;
		break;

	case 3:
		cout << "수요일" << endl;
		break;

	case 4:
		cout << "목요일" << endl;
		break;

	case 5:
		cout << "금요일" << endl;
		break;

	case 6:
		cout << "토요일" << endl;
		break;

	default:
		cout << "유효하지 않은 숫자입니다. 다시 입력하세요." << endl;
	}

	return 0;
}