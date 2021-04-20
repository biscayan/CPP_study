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
		cout << "잔액은 음수가 될 수 없습니다. 프로그램을 종료합니다." << endl;
		assert(false);
	}

	base++;
	accNumber = 100000 + base;

	cout << "계좌 #" << accNumber << "가 만들어졌습니다." << endl;
	cout << "잔액 $" << balance << endl;
	cout << endl;
}

Account::~Account()
{
	cout << "계좌 #" << accNumber << "가 닫쳤습니다." << endl;
	cout << "$" << balance << "를 고객에게 보냈습니다." << endl;
	cout << endl;
}

void Account::checkBalance() const
{
	cout << "계좌 #" << accNumber << endl;
	cout << "트랜잭션 - 잔액 확인" << endl;
	cout << "잔액 $" << balance << endl;
	cout << endl;
}

void Account::deposit(double amount)
{
	if (amount > 0.0)
	{
		balance += amount;
		cout << "계좌 #" << accNumber << endl;
		cout << "트랜잭션 : $" << amount << "를 예금" << endl;
		cout << "변경된 잔액 $" << balance << endl;
		cout << endl;
	}
	else
	{
		cout << "트랜잭션이 중단되었습니다." << endl;
	}
}

void Account::withdrawal(double amount)
{
	if (amount > balance)
	{
		amount = balance;
	}

	balance -= amount;

	cout << "계좌 #" << accNumber << endl;
	cout << "트랜잭션 - 인출 : $" << amount << endl;
	cout << "변경된 잔액 $" << balance << endl;
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