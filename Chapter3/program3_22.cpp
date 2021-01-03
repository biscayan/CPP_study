#include <iostream>

using namespace std;

int main()
{
	int x = 1234;

	cout << "x의 값 : " << x << endl; //1234
	cout << endl;

	//showbase없이
	cout << "x의 10진수 값 : " << dec << x << endl; //1234
	cout << "x의 8진수 값 : " << oct << x << endl; //2322
	cout << "x의 16진수 값 : " << hex << x << endl; //4d2
	cout << endl;

	//showbase사용
	cout << "x의 10진수 값 : " << showbase << dec <<x << endl; //1234
	cout << "x의 8진수 값 : " << showbase << oct << x << endl; //02322
	cout << "x의 16진수 값 : " << showbase << hex << x << endl; //0x4d2
	cout << endl;

	return 0;
}