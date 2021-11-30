#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream os;
	// << : insertion operator, >> : extraction operator
	os << "Hello, world!"; // add string to the buffer
	os.str("Hello, world!"); // replace the buffer

	string str;
	str = os.str();
	cout << str << endl;

	string str1;
	string str2;
	os >> str1 >> str2;
	cout << str1 << endl; // Hello,
	cout << str2 << endl; // world!

	return 0;
}