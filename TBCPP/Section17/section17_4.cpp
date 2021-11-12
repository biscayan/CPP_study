#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl; // a
	cout << my_str[3] << endl; // d

	my_str[3] = 'z';
	cout << my_str << endl; // abczefg

	try
	{
		//my_str[100] = 'X'; // doesn't deal with exception
		my_str.at(100) = 'X';
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl; // exception message: invalid string position
	}

	// use as a c-style string
	// my_str.c_str() is same with my_str.data()
	const char* arr = my_str.c_str();
	cout << arr[6] << endl; // g
	cout << arr[7] << endl; // null

	char buf[20];
	my_str.copy(buf, 5, 0);
	cout << buf << endl; // abcze面面面面面面面面面面面柳��
	buf[5] = '\0';
	cout << buf << endl; // abcze

	return 0;
}