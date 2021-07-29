#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strg = "A short string";

	cout << "6번째 문자 : " << strg[5] << endl;
	cout << "9번째 문자 : " << strg.at(8) << endl;

	return 0;
}