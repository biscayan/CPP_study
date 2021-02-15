#include <iostream>

using namespace std;

// 매개변수는 다르지만 수행하는 기능은 비슷할 때 오버로딩을 사용할 수 있음
// return type만 다른 것으로는 오버로딩이 될 수 없음, 매개면수도 달라야함
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

void print(unsigned int value) 
{
	cout << value << endl;
}

void print(float value)
{
	cout << value << endl;
}


int main()
{
	cout << add(1, 2) << endl;
	cout << add(3.1, 4.2) << endl;

	/*
	unsigned int로 할지, float으로 할지 ambiguous함
	print('a');
	print(0);
	print(3.141592);
	*/
	
	// data type을 명확히해줌으르서 해결 가능
	print((unsigned int)'a');
	print(0u);
	print(3.141592f);

	return 0;
}