#include <iostream>
# include <string>

using namespace std;

int main()
{
	string line;

	cout << "�� ���� �Է��ϼ��� : ";
	getline(cin, line);

	for (int i = 0; i < line.size(); i++)
	{
		line[i] = toupper(line[i]);
	}

	cout << line;

	return 0;
}