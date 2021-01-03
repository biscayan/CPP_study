#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "숫자를 입력하세요 : ";
	cin >> num;

	int first = num / 100;
	int second = num / 10 - (num / 100 * 10);
	int third = num % 10;

	cout << "숫자 역순 : " << third << second << first << endl;

	return 0;
}