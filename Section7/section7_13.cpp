#include <iostream>
#include <string>

using namespace std;

int main()
{
	string introduction = "Hello my name is Hyeongju";

	cout << "Input a number from 0 to " << introduction.size() - 1 << endl;

	while (true)
	{
		int idx;
		cin >> idx;

		if (idx >= 0 && idx <= introduction.size() - 1)
		{
			cout << introduction[idx] << endl;
			break;
		}
		else
		{
			cout << "Please try again" << endl;
		}
	}

	return 0;
}