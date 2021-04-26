#include "Triangle.h"

int main()
{
	Triangle triangle(3.2, 5, 2.8);

	triangle.getSides();
	cout << triangle.getPerimeter() << endl;
	cout << triangle.getArea() << endl;

	return 0;
}