#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "첫 번째 숫자를 입력하세요 : ";
	cin >> num1;
	
	cout << "두 번째 숫자를 입력하세요 : ";
	cin >> num2;

	if (num1 >= num2)
	{
		if (num1 > num2)
		{
			cout << num1 << " > " << num2 << endl;
		}
		else
		{
			cout << num1 << " = " << num2 << endl;
		}
	}
	else
	{
		cout << num1 << " < " << num2 << endl;
	}

	return 0;
}	