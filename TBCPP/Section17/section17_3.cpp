#include <iostream>
#include <string>
using namespace std;

int main()
{
	string my_str("0123456789"); // string doesn't have null
	cout << my_str.size() << endl; // 10
	cout << my_str.length() << endl; // 10
	cout << my_str.capacity() << endl; // 15
	cout << my_str.max_size() << endl; // 2147483647

	return 0;
}