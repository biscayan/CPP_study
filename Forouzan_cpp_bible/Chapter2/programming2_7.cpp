#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName;
	string lastName;

	cout << "성을 입력하세요 : ";
	cin >> lastName;

	cout << "이름을 입력하세요 : ";
	cin >> firstName;

	cout << "서양식 이름 표현 : " << firstName << ", " << lastName;

	return 0;
}