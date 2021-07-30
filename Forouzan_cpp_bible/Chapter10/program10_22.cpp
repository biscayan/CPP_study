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
	cout << "���ڸ� �Է��ϼ��� : ";
	getline(cin, strg);

	if (isPalindrome(strg))
	{
		cout << "ȸ���Դϴ�." << endl;
	}
	else
	{
		cout << "ȸ���� �ƴմϴ�." << endl;
	}

	return 0;
}