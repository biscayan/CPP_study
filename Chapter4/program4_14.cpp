#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int larger, smaller;

	cout << "숫자 두 개를 입력하세요 : ";
	cin >> num1 >> num2;

	larger = num1 > num2 ? num1 : num2;
	smaller = num1 < num2 ? num1 : num2;

	cout << "더 큰 숫자 : " << larger << endl;
	cout << "더 작은 숫자 : " << smaller << endl;
	
	return 0;
}