#include <iostream>

using namespace std;

int fibonacci(int num)
{	
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}

int main()
{
	int num;

	cout << "숫자를 입력하세요 : ";
	cin >> num;

	cout << num << "의 피보나치 수열의 합 : " << fibonacci(num) << endl;

	return 0;
}