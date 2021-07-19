#include <cstring>
#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char str1[] = "This is the first string";
	char str2[] = "This is the second string";
	strcpy(str2, str1);
	cout << "str2 : " << str2 << endl;

	char str3[] = "abcdefghijk";
	const char* str4 = "ABCDEFGHIJK";
	strncpy(str3, str4, 4);
	cout << "str3 : " << str3 << endl;

	return 0;
}