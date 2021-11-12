#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("one");

	string str2;
	str2 = "two";

	// chaining is possible
	string str3;
	str3.assign("three").append(" ").append("four");
	cout << str3 << endl; // three four

	std::swap(str1, str2);
	cout << str1 << " " << str2 << endl; // two one
	str1.swap(str2);
	cout << str1 << " " << str2 << endl; // one two

	str1 += " three";
	cout << str1 << endl; // one three
	str1.push_back('A'); // only character is possible
	cout << str1 << endl; // one threeA
	str1.insert(2, "aaa");
	cout << str1 << endl; // onaaae threeA

	return 0;
}