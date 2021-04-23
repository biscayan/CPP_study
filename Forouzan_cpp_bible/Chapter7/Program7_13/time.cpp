#include <cassert>
#include "time.h"

Time::Time(int h, int m, int s)
	:hours(h), minutes(m), seconds(s)
{
	normalize();
}

Time::Time()
	: hours(0), minutes(0), seconds(0)
{}

Time::~Time()
{}

void Time::print() const
{
	cout << hours << "�� " << minutes << "�� " << seconds << "��" << endl;
}

void Time::tick()
{
	seconds++;
	normalize();
}

void Time::normalize()
{
	if (hours < 0 || minutes < 0 || seconds < 0)
	{
		cout << "�ð��� ������ �� �� �����ϴ�. ���α׷��� �����մϴ�." << endl;
		assert(false);
	}

	if (seconds > 59)
	{
		int tmp;

		tmp = seconds / 60;
		seconds %= 60;
		minutes += tmp;
	}

	if (minutes > 59)
	{
		int tmp;

		tmp = minutes / 60;
		minutes %= 60;
		hours += tmp;
	}

	if (hours > 23)
	{
		hours %= 24;
	}
}