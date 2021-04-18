#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;

	void set_value(int value)
	{
		m_value = value;
	}

	// member function�� const��� ���� �˷���
	int get_value() const
	{
		return m_value;
	}
};

class String_something
{
public:
	string m_value = "Default";

	const string& get_value() const
	{
		cout << "Const version" << endl;
		return m_value;
	}

	string& get_value()
	{
		cout << "Non-const version" << endl;
		return m_value;
	}
};

void print(const Something& st)
{
	cout << st.get_value() << endl;
}

int main()
{
	const Something something;

	// something.set_value(3); const�̹Ƿ� value���� �ٲ� �� ����

	cout << something.get_value() << endl; //0
	print(something); //0

	const String_something str1;
	 String_something str2;

	 str1.get_value(); //Const version
	 str2.get_value(); //Non-const version, value���� �ٲ� �� ����

	return 0;
}