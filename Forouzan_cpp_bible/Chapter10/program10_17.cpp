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

	cout << "������ �Է��ϼ��� : ";
	getline(cin, line);

	cout << "���� ���ڿ� : " << line << endl;

	reverse(line);

	cout << "������ ���ڿ� : " << line << endl;

	return 0;
}