#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line, word;
	string delimiter(" ");
	string::size_type start, end;

	cout << "������ �Է��ϼ��� : ";
	getline(cin, line);

	cout << "������ �ܾ� : " << endl;
	start = line.find_first_not_of(delimiter, 0);

	while (start != string::npos)
	{
		end = line.find_first_of(delimiter, start);
		word = line.substr(start, end - start);
		cout << word << endl;
		start = line.find_first_not_of(delimiter, end);
	}

	return 0;
}