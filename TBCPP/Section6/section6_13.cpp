#include <iostream>

using namespace std;

int main()
{
	// ----------CASE 1----------
	const int VALUE1 = 5;
	const int* PTR1 = &VALUE1;

	//value가 상수화되었기 때문에 포인터의 값을 바꿀 수는 없음
	//*PTR = 3;

	cout << *PTR1 << endl; //5
	
	// ----------CASE 2----------
	// 포인터만 상수화할 수도 있음
	int value2 = 5;
	const int* ptr2 = &value2;

	//value값을 바꾸는 것도 가능
	value2 = 6;
	cout << *ptr2 << endl; //6

	//포인터의 value값을 바꾸는 것이 가능
	ptr2 = &VALUE1;
	cout << *ptr2 << endl; //5

	// ----------CASE 3----------
	int value3 = 5;
	int *const ptr3 = &value3;

	//포인터가 상수화되어 value값을 바꿀수없음
	//ptr3 = &value2;

	return 0;
}