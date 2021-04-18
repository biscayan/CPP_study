#include <iostream>

using namespace std;

int main()
{
	//boolalpha : bool�� -> literal
	//noboolalpha : bool�� -> int

	bool x_literal = true;
	bool y_literal = false;

	cout << "�⺻���� x_literal�� ��� : " << x_literal << endl; //1
	cout << "�⺻���� y_literal�� ��� : " << y_literal << endl; //0

	cout << "�����ڸ� ����� x_literal�� ��� : " << boolalpha << x_literal << endl; //true
	cout << "�����ڸ� ����� y_literal�� ��� : " << boolalpha << y_literal << endl; //false

	bool x_int = 1;
	bool y_int = 0;

	cout << "�⺻���� x_int�� ��� : " << x_int << endl; //true
	cout << "�⺻���� y_int�� ��� : " << y_int << endl; //false

	cout << "�����ڸ� ����� x_int�� ��� : " << noboolalpha << x_int << endl; //1
	cout << "�����ڸ� ����� y_int�� ��� : " << noboolalpha << y_int << endl; //0

	return 0;
}