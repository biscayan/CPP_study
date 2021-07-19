#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char str[] = "2021³â 7¿ù 18ÀÏ";
	char* p;

	p = strtok(str, " ");

	while (p)
	{
		cout << p << " ";
		p = strtok(0, " ");
	}

	return 0;
}