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

	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> num1;

	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> num2;

	cout << "�� �� �߿� ū �� : " << find_larger(num1, num2) << endl;

	return 0;
}