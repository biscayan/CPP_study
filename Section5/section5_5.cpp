#include <iostream>

using namespace std;

int main()
{
	int count = 1;
	cout << "print number which is lower than 100" << endl;
	while (count < 101)
	{
		cout << count << endl;

		if (count % 10 == 0)
		{
			cout << count << "/" << "100" <<endl;
		}

		count++; //++count, count+=1
	}

	return 0;
}