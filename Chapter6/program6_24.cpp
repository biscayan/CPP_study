#include <iostream>

using namespace std;

void count_plus()
{
	static int count = 0;
	count++;
	cout << "Count = " << count << endl;
}

int main()
{
	count_plus(); //1
	count_plus(); //2
	count_plus(); //3

	return 0;
}