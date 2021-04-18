#include <iostream>

using namespace std;

int find_larger(int num1, int num2)
{
	int large_num;

	if (num1 > num2)
	{
		large_num = num1;
	}
	else if(num1 < num2)
	{
		large_num = num2;
	}

	return large_num;
}

int main()
{
	int num1, num2;

	cout << "첫번째 숫자를 입력하세요 : ";
	cin >> num1;

	cout << "두번째 숫자를 입력하세요 : ";
	cin >> num2;

	cout << "두 수 중에 큰 것 : " << find_larger(num1, num2) << endl;

	return 0;
}