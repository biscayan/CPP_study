#include "customized.h"
#include <iostream>

int main()
{
	string strg("abcdefgh");

	cout << "pushfront ���� ���ڿ� : " << strg << endl;
	pushFront(strg, 'A');
	cout << "pushfront ���� ���ڿ� : " << strg << endl;
	cout << endl;

	cout << "pushback ���� ���ڿ� : " << strg << endl;
	pushBack(strg, 'Z');
	cout << "pushback ���� ���ڿ� : " << strg << endl;
	cout << endl;

	cout << "popfront ���� ���ڿ� : " << strg << endl;
	char c_f = popFront(strg);
	cout << "popfront ���� ���ڿ� : " << strg << endl;
	cout << "������ ���ڿ� : " << c_f << endl;
	cout << endl;

	cout << "popback ���� ���ڿ� : " << strg << endl;
	char c_b = popBack(strg);
	cout << "popback ���� ���ڿ� : " << strg << endl;
	cout << "������ ���ڿ� : " << c_b << endl;
	cout << endl;

	return 0;
}