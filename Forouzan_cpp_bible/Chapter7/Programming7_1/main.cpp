#include <iostream>
#include "One.h"

using namespace std;

int main()
{
	One one(1,2);

	cout << one.getX() << endl;
	cout << one.getY() << endl;

	return 0;
}