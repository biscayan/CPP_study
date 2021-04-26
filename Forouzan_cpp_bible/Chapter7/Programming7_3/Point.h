#pragma once
#include <iostream>

using namespace std;

class Point
{
private:
	int m_x;
	int m_y;

public:
	Point(int x, int y);

	void print();
	double distance(Point p2);
};