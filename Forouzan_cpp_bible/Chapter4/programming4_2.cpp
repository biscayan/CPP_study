#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;
	int min_num;

	cout << "3���� ������ �Է��ϼ���." << endl;
	
	cout << "ù��° ���ڸ� �Է��ϼ��� : ";
	cin >> num1;
	
	cout << "�ι�° ���ڸ� �Է��ϼ��� : ";
	cin >> num2;
	
	cout << "����° ���ڸ� �Է��ϼ��� : ";
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

	cout << "�ּҰ� : " << min_num << endl;

	return 0;
}