#include <iostream>

using namespace std;

int main()
{
	int num;
	int reverse_num;
	int palindrome = 0;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> num;

	int original_num = num;

	do
	{
		reverse_num = num % 10;
		palindrome = palindrome * 10 + reverse_num;
		num /= 10;

	} while (num);

	if (original_num == palindrome)
	{
		cout << "ȸ�� �����Դϴ�." << endl;
	}
	else
	{
		cout << "ȸ�� ���ڰ� �ƴմϴ�." << endl;
	}

	return 0;
}