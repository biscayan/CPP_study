#include "customized.h"
#include <iostream>

int main()
{
	string strg("abcdefgh");

	cout << "pushfront 전의 문자열 : " << strg << endl;
	pushFront(strg, 'A');
	cout << "pushfront 후의 문자열 : " << strg << endl;
	cout << endl;

	cout << "pushback 전의 문자열 : " << strg << endl;
	pushBack(strg, 'Z');
	cout << "pushback 후의 문자열 : " << strg << endl;
	cout << endl;

	cout << "popfront 전의 문자열 : " << strg << endl;
	char c_f = popFront(strg);
	cout << "popfront 후의 문자열 : " << strg << endl;
	cout << "추출한 문자열 : " << c_f << endl;
	cout << endl;

	cout << "popback 전의 문자열 : " << strg << endl;
	char c_b = popBack(strg);
	cout << "popback 후의 문자열 : " << strg << endl;
	cout << "추출한 문자열 : " << c_b << endl;
	cout << endl;

	return 0;
}