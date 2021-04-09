#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// a 절댓값
	cout << abs(25) << endl; //25
	cout << abs(-23) << endl; //23

	// b 내림
	cout << floor(44.56) << endl; //44
	cout << floor(-23.78) << endl; //-24

	// c 올림
	cout << ceil(25.23) << endl; //26
	cout << ceil(-2.89) << endl; //-2

	return 0;
}