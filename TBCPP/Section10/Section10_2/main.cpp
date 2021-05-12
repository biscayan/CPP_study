#include "Monster.h"

int main()
{
	Monster mon1("San", Position(0,0));
	cout << mon1 << endl;
	
	mon1.moveTo(Position(1,1));
	cout << mon1 << endl;
}