#include <iostream>
#include <string>

using namespace std;

bool is_in(char ch, string& str)
{
	for (int j = 0; j < str.size(); j++)
	{
		if (ch == str[j])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	string str1;
	cout << "문자열을 입력하세요 : ";
	getline(cin, str1);

	string str2 = "";

	for (int i = 0; i < str1.length(); i++)
	{
		if (!is_in(str1[i], str2))
		{
			str2.push_back(str1[i]);
		}
	}
	
	cout << "중복이 제거된 문자열 : ";
	cout << str2 << endl;

	return 0;
}