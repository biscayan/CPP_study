#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "���� ���ڿ� : ";
	string str1;
	getline(cin, str1);

	cout << "�ٲ� ���ڿ� : ";
	string str2;
	getline(cin, str2);

	cout << "��ü ���ڿ� : ";
	string str3;
	getline(cin, str3);

	str1.string::replace(str1.find(str2), str2.length(), str3);

	cout << "�ٲ� ���ڿ� : ";
	cout << str1 << endl;

	return 0;
}