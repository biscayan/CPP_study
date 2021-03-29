#include <iostream>

using namespace std;

// global variable
int num = 3;

int main()
{
	cout << num << endl; //3

	// local variable
	int num = 5;

	cout << num << endl; //5

	return 0;
}