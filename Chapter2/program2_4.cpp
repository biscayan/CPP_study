#include <iostream>

using namespace std;

int main()
{
	//ȭ��� �ݾ�
	const unsigned int pennyValue = 1;
	const unsigned int nickleValue = 5;
	const unsigned int dimeValue = 10;
	const unsigned int quarterValue = 25;
	const unsigned int dollarValue = 100;

	//ȭ���� ������ ���� ���� ����
	unsigned int pennies;
	unsigned int nickles;
	unsigned int dimes;
	unsigned int quarters;
	unsigned int dollars;

	//��� ȭ���� ���� ���� ���� ����
	unsigned int totalValue;

	//ȭ���� ������ �Է¹���
	cout << "����� ���� �Է��ϼ��� : ";
	cin >> pennies;

	cout << "������ ���� �Է��ϼ��� : ";
	cin >> nickles;

	cout << "������ ���� �Է��ϼ��� : ";
	cin >> dimes;

	cout << "������ ���� �Է��ϼ��� : ";
	cin >> quarters;

	cout << "�޷��� ���� �Է��ϼ��� : ";
	cin >> dollars;

	//��ü �� ���
	totalValue = pennyValue * pennies + nickleValue * nickles + dimeValue * dimes + 
					quarterValue * quarters + dollarValue * dollars;

	//��ü �� ���
	cout << "��ü ���� " << totalValue << " ����Դϴ�." << endl;

	return 0;
}