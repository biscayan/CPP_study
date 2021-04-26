#include <iostream>
#include "Two.h"

using namespace std;

int main()
{
	Two two(1, 'a');

	cout << two.getX() << endl;
	cout << two.getA() << endl;

	two.setX(2);
	two.setA('b');

	cout << two.getX() << endl;
	cout << two.getA() << endl;

	return 0;
}
