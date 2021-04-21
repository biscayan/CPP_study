#include <iostream>
#include <fstream>
#include "point.h"

using namespace std;

int main()
{
	ofstream of("out.txt");
	
	Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.3);

	cout << p1 << " / " << p2 << endl;
	of << p1 << " / " << p2 << endl;

	of.close();

	return 0;
}