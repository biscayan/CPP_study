#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strg("Hello my friends");

	cout << "ũ�� : " << strg.size() << endl;
	cout << "�ִ� ũ�� : " << strg.max_size() << endl;
	cout << "���� : " << strg.capacity() << endl;
	cout << "�� ���ڿ� ���� : " << boolalpha << strg.empty() << endl;
	cout << endl;

	strg.reserve(50);

	cout << "ũ�� : " << strg.size() << endl;
	cout << "�ִ� ũ�� : " << strg.max_size() << endl;
	cout << "���� : " << strg.capacity() << endl;
	cout << "�� ���ڿ� ���� : " << boolalpha << strg.empty() << endl;

	return 0;
}