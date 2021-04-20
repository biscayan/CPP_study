#include <iostream>
#include <cassert>

using namespace std;

class Account
{
private:
	long accNumber;
	double balance;
	static int base;

public:
	Account(double bal);
	~Account();

	void checkBalance() const;
	void deposit(double amount);
	void withdrawal(double amount);
};

int Account::base = 0;

Account::Account(double bal)
	:balance(bal)
{
	if (bal < 0.0)
	{
		cout << "�ܾ��� ������ �� �� �����ϴ�. ���α׷��� �����մϴ�." << endl;
		assert(false);
	}

	base++;
	accNumber = 100000 + base;

	cout << "���� #" << accNumber << "�� ����������ϴ�." << endl;
	cout << "�ܾ� $" << balance << endl;
	cout << endl;
}

Account::~Account()
{
	cout << "���� #" << accNumber << "�� ���ƽ��ϴ�." << endl;
	cout << "$" << balance << "�� ������ ���½��ϴ�." << endl;
	cout << endl;
}

void Account::checkBalance() const
{
	cout << "���� #" << accNumber << endl;
	cout << "Ʈ����� - �ܾ� Ȯ��" << endl;
	cout << "�ܾ� $" << balance << endl;
	cout << endl;
}

void Account::deposit(double amount)
{
	if (amount > 0.0)
	{
		balance += amount;
		cout << "���� #" << accNumber << endl;
		cout << "Ʈ����� : $" << amount << "�� ����" << endl;
		cout << "����� �ܾ� $" << balance << endl;
		cout << endl;
	}
	else
	{
		cout << "Ʈ������� �ߴܵǾ����ϴ�." << endl;
	}
}

void Account::withdrawal(double amount)
{
	if (amount > balance)
	{
		amount = balance;
	}

	balance -= amount;

	cout << "���� #" << accNumber << endl;
	cout << "Ʈ����� - ���� : $" << amount << endl;
	cout << "����� �ܾ� $" << balance << endl;
	cout << endl;
}

int main()
{
	Account acc1(2000);
	Account acc2(5000);
	Account acc3(1000);

	acc1.deposit(150);
	acc2.checkBalance();
	acc1.checkBalance();
	acc3.withdrawal(800);
	acc1.withdrawal(1000);
	acc2.deposit(120);

	return 0;
}