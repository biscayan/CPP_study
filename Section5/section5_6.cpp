#include <iostream>

//do-while���� �ѹ��� �ݵ�� ������ �ϰ� �� ������ �ݺ��� ������ ���캽

using namespace std;

int main()
{
	int selection; //do-while�ݺ��� �ۿ��� ������ �Ǿ����

	int num1;
	int num2;

	cout << "Input two numbers" << endl;
	cin >> num1 >> num2;
	cout << '\n';

	do
	{
		//while�� ���� �ѹ��� �ݵ�� ������ ��
		cout << "Select calculation style" << endl;
		cout << "1.Add" << endl;
		cout << "2.Subtract" << endl;
		cout << "3.Multiply" << endl;
		cout << "4.Divide" << endl;
		cin >> selection;
		cout << '\n';

	} while (selection < 1 || selection>4); //�ش� ������ ������ ���� ����� �ݺ�

	if (selection == 1)
		cout << "Answer : " << num1 + num2 << endl;
	else if (selection == 2)
		cout << "Answer : " << num1 - num2 << endl;
	else if (selection == 3)
		cout << "Answer : " << num1 * num2 << endl;
	else if (selection == 4)
		cout << "Answer : " << num1 / num2 << endl;

	return 0;
}