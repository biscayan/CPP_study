#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char str1[50] = "Hi, ";
	char str2[20] = "my name is ";
	const char* str3 = "HJ";
	strcat(str2, str3);
	strcat(str1, str2);
	cout << "str : " << str1 << endl;

	return 0;
}