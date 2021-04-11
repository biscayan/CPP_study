#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	Calc calc(10);
	calc.add(10).sub(2).mul(2).print(); // 36

	return 0;
}