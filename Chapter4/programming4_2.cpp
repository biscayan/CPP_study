#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	int min_num;

	cout << "3개의 정수를 입력하세요." << endl;
	
	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> num1;
	
	cout << "두번째 숫자를 입력하세요 : ";
	cin >> num2;
	
	cout << "세번째 숫자를 입력하세요 : ";
	cin >> num3;

	if (num1 < num2 && num1 < num3)
	{
		min_num = num1;
	}
	else if (num2 < num1 && num2 < num3)
	{
		min_num = num2;
	}
	else
	{
		min_num = num3;
	}

	cout << "최소값 : " << min_num << endl;

	return 0;
}