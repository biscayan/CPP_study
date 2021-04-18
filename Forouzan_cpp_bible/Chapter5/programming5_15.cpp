#include <iostream>

using namespace std;

int main()
{
	int num;
	int reverse_num;
	int palindrome = 0;

	cout << "양의 정수를 입력하세요 : ";
	cin >> num;

	int original_num = num;

	do
	{
		reverse_num = num % 10;
		palindrome = palindrome * 10 + reverse_num;
		num /= 10;

	} while (num);

	if (original_num == palindrome)
	{
		cout << "회문 숫자입니다." << endl;
	}
	else
	{
		cout << "회문 숫자가 아닙니다." << endl;
	}

	return 0;
}