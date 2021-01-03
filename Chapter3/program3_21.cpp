#include <iostream>

using namespace std;

int main()
{
	//boolalpha : bool값 -> literal
	//noboolalpha : bool값 -> int

	bool x_literal = true;
	bool y_literal = false;

	cout << "기본적인 x_literal값 출력 : " << x_literal << endl; //1
	cout << "기본적인 y_literal값 출력 : " << y_literal << endl; //0

	cout << "조정자를 사용한 x_literal값 출력 : " << boolalpha << x_literal << endl; //true
	cout << "조정자를 사용한 y_literal값 출력 : " << boolalpha << y_literal << endl; //false

	bool x_int = 1;
	bool y_int = 0;

	cout << "기본적인 x_int값 출력 : " << x_int << endl; //true
	cout << "기본적인 y_int값 출력 : " << y_int << endl; //false

	cout << "조정자를 사용한 x_int값 출력 : " << noboolalpha << x_int << endl; //1
	cout << "조정자를 사용한 y_int값 출력 : " << noboolalpha << y_int << endl; //0

	return 0;
}