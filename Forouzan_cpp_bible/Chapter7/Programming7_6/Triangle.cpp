#include <cmath>
#include <cassert>
#include "Triangle.h"

Triangle::Triangle(double first, double second, double third)
	:firstSide(first), secondSide(second), thirdSide(third)
{
	if (first > second + third)
	{
		cout << "한 변이 다른 두 변의 합보다 클 수 없습니다. 프로그램을 종료합니다." << endl;
		assert(false);
	}

	if (second > first + third)
	{
		cout << "한 변이 다른 두 변의 합보다 클 수 없습니다. 프로그램을 종료합니다." << endl;
		assert(false);
	}

	if (third > second + first)
	{
		cout << "한 변이 다른 두 변의 합보다 클 수 없습니다. 프로그램을 종료합니다." << endl;
		assert(false);
	}
}

void Triangle::getSides()
{
	cout << firstSide << ", " << secondSide << ", " << thirdSide << endl;
}

double Triangle::getPerimeter()
{
	double perimeter = firstSide + secondSide + thirdSide;

	return perimeter;
}

double Triangle::getArea()
{
	double p = (firstSide + secondSide + thirdSide) / 2;
	double area = sqrt(p * (p - firstSide) * (p - secondSide) * (p - thirdSide));

	return area;
}