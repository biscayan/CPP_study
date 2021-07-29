#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strg("Hello my friends");

	cout << "크기 : " << strg.size() << endl;
	cout << "최대 크기 : " << strg.max_size() << endl;
	cout << "용적 : " << strg.capacity() << endl;
	cout << "빈 문자열 여부 : " << boolalpha << strg.empty() << endl;
	cout << endl;

	strg.reserve(50);

	cout << "크기 : " << strg.size() << endl;
	cout << "최대 크기 : " << strg.max_size() << endl;
	cout << "용적 : " << strg.capacity() << endl;
	cout << "빈 문자열 여부 : " << boolalpha << strg.empty() << endl;

	return 0;
}