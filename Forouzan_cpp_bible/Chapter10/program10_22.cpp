#include <iostream>
#include <string>

using namespace std;

void reverse(string& str)
{
	string tmp(str);
	int size = str.size();
	for (int i = 0; i < size; i++)
	{
		str[i] = tmp[size - i - 1];
	}
}

bool isPalindrome(string& str)
{
	string tmp(str);
	reverse(str);
	return (tmp == str);
}

int main()
{
	string strg;
	cout << "문자를 입력하세요 : ";
	getline(cin, strg);

	if (isPalindrome(strg))
	{
		cout << "회문입니다." << endl;
	}
	else
	{
		cout << "회문이 아닙니다." << endl;
	}

	return 0;
}