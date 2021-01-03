#include <iostream>

using namespace std;

int main()
{
	int x = 1234;

	cout << "x�� �� : " << x << endl; //1234
	cout << endl;

	//showbase����
	cout << "x�� 10���� �� : " << dec << x << endl; //1234
	cout << "x�� 8���� �� : " << oct << x << endl; //2322
	cout << "x�� 16���� �� : " << hex << x << endl; //4d2
	cout << endl;

	//showbase���
	cout << "x�� 10���� �� : " << showbase << dec <<x << endl; //1234
	cout << "x�� 8���� �� : " << showbase << oct << x << endl; //02322
	cout << "x�� 16���� �� : " << showbase << hex << x << endl; //0x4d2
	cout << endl;

	return 0;
}