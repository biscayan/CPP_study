#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	//string : 프로그래머들이 문자열을 다룰때 많이 사용하는 것을 모아놓은 class
	const string my_hello = "Hello, world";
	const char my_strs [] = "Hello, world";

	cout << my_hello << endl;

	cout << "What is your name? : ";
	string name;

	//중간에 띄어쓰기가 있는 경우는 정상적으로 입력이 안됨
	//cin >> name;
	
	//getline은 엔터를 칠 때까지 모두 받아들임, 즉 라인을 통채로 입력가능
	getline(cin, name);

	cout << "What is your age? : ";

	int int_age;

	//입력으로 받은 buffer가 다음까지 남아있음
	cin >> int_age;

	//new line이 올때까지 32767개의 숫자를 받을 수 있음	
	//cin.ignore(32767, '\n');

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "What is your age? : ";
	string str_age;
	getline(cin, str_age);
	cout << name << " is " << str_age << " years old." <<endl;

	//string append
	//append(+)가 string class안에 정의되어 있음
	string a = "Hello, ";
	string b = "world";

	cout << a + b << endl;

	cout << a.length() << endl; //7

	return 0;
}