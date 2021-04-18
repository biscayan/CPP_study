#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double double_num;

	cout << "숫자를 입력하세요 : ";
	cin >> double_num;

	int int_part = static_cast<int>(double_num);
	double float_part = double_num - int_part;

	cout << "원래 값 : " << double_num << endl;
	cout << "정수부분 : " << int_part << endl;
	cout << "소수부분 : " << float_part << endl;

	return 0;
}