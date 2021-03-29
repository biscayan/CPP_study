#include <iostream>

using namespace std;

int num = 3;

int main()
{
	cout << "Global variable : " << num << endl; //3

	int num = 5;
	cout << "Global variable : " << ::num << endl; //3
	cout << "Local variable : " << num << endl; //5

	return 0;
}