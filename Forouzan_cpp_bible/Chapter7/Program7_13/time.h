#pragma once

#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time(int h, int m, int s);
	Time();
	~Time();

	void print() const;
	void tick();

private:
	void normalize();
};