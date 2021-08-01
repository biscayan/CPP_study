#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "기존 문자열 : ";
	string str1;
	getline(cin, str1);

	cout << "바꿀 문자열 : ";
	string str2;
	getline(cin, str2);

	cout << "대체 문자열 : ";
	string str3;
	getline(cin, str3);

	str1.string::replace(str1.find(str2), str2.length(), str3);

	cout << "바뀐 문자열 : ";
	cout << str1 << endl;

	return 0;
}