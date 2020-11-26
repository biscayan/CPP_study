#include <iostream>

//do-while문은 한번은 반드시 실행을 하고 그 다음에 반복의 조건을 살펴봄

using namespace std;

int main()
{
	int selection; //do-while반복문 밖에서 선언이 되어야함

	int num1;
	int num2;

	cout << "Input two numbers" << endl;
	cin >> num1 >> num2;
	cout << '\n';

	do
	{
		//while문 전에 한번은 반드시 실행을 함
		cout << "Select calculation style" << endl;
		cout << "1.Add" << endl;
		cout << "2.Subtract" << endl;
		cout << "3.Multiply" << endl;
		cout << "4.Divide" << endl;
		cin >> selection;
		cout << '\n';

	} while (selection < 1 || selection>4); //해당 조건이 들어오면 위의 명령을 반복

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