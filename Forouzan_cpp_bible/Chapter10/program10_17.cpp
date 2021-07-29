#include <iostream>
#include <string>

using namespace std;

void reverse(string& strg)
{
	string temp(strg);
	int size = strg.size();

	for (int i = 0; i < size; i++)
	{
		strg[i] = temp[size - 1 - i];
	}
}

int main()
{
	string line;

	cout << "라인을 입력하세요 : ";
	getline(cin, line);

	cout << "원본 문자열 : " << line << endl;

	reverse(line);

	cout << "뒤집힌 문자열 : " << line << endl;

	return 0;
}