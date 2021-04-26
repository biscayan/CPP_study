#include "Point.h"

int main()
{
	Point point1(2, 7);
	Point point2(-1, 3);
	
	point1.print();
	point2.print();

	cout << point1.distance(point2) << endl;

	return 0;
}