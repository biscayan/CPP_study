#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char* str1 = "Hello HJ";
	const char* str2 = "Hello AK";
	const char* str3 = "Hello CW";

	cout << "str1�� str2 �� (str1=str2: 0, str1>str2: 1, str1<str2: -1) -> " << strcmp(str1, str2) << endl;
	cout << "str2�� str3 �� (str2=str3: 0, str2>str3: 1, str2<str3: -1) -> " << strcmp(str2, str3) << endl;

	return 0;
}