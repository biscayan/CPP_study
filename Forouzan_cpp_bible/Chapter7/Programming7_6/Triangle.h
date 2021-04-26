#pragma once
#include <iostream>

using namespace std;

class Triangle
{
private:
	double firstSide;
	double secondSide;
	double thirdSide;

public:
	Triangle(double first, double second, double third);

	void getSides();
	double getPerimeter();
	double getArea();
};