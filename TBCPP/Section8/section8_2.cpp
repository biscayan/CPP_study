#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
	// access specifier�� �������� �ʾ��� ���� �⺻���� private��
	int m_month;
	int m_day;
	int m_year;

	// access function
public:
	void set_month(const int& month)
	{
		m_month = month;
	}

	void set_day(const int& day)
	{
		m_day = day;
	}

	void set_year(const int& year)
	{
		m_year = year;
	}

	const int& get_month()
	{
		return m_month;
	}

	const int& get_day()
	{
		return m_day;
	}
	
	const int& get_year()
	{
		return m_year;
	}

	void copy_day(const Date& original) 
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today;

	today.set_month(3);
	today.set_day(12);
	today.set_year(2021);

	cout << today.get_year() << "�� " << today.get_month() << "�� " << today.get_day() << "��" << endl; // 2021�� 3�� 12��

	Date copied_day;

	copied_day.copy_day(today);

	return 0;
}