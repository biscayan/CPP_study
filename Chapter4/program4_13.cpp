#include <iostream>

using namespace std;

int main()
{
	char grade;

	cout << "성적을 입력하세요 (A,B,C,D,F) : ";
	cin >> grade;

	switch (grade)
	{

	// A, B, C -> PASS
	case 'A':
	case 'B':
	case 'C':
		cout << "PASS입니다." << endl;
		break;

	// D, F -> FAIL
	case 'D':
	case 'F':
		cout << "FAIL입니다." << endl;
		break;

	default:
		cout << "유효하지 않은 성적입니다. 다시 입력하세요" << endl;
	}

	return 0;
}