#include <iostream>
#include <string>

using namespace std;

int main()
{
	string line, word;
	string delimiter(" ");
	string::size_type start, end;

	cout << "라인을 입력하세요 : ";
	getline(cin, line);

	cout << "추출한 단어 : " << endl;
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