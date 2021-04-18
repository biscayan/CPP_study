#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle circle1;

	circle1.setRadius(10.0);

	cout << "Circle1" << endl;
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl;
	cout << endl;

	Circle circle2;

	circle2.setRadius(20.0);

	cout << "Circle2" << endl;
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl;
	cout << endl;

	return 0;
}