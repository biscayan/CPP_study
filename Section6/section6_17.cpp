#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	for (int number : fibonacci)
	{
		cout << number << " "; //0 1 1 2 3 5 8 13 21 34 55 89
	}
	cout << endl;
	
	// change array values
	for (auto& number : fibonacci)
	{
		number *= 10;
	}

	for (int number : fibonacci) 
	{
		cout << number << " "; //0 10 10 20 30 50 80 130 210 340 550 890
	}
	cout << endl;

	// find max number in the fibonacci array
	int max_num = numeric_limits<int>::lowest();

	for (auto& number : fibonacci)
	{
		max_num = max(max_num, number);
	}

	cout << max_num << endl; //890

	return 0;
	

}