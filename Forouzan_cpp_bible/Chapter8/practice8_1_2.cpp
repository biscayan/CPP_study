#include <iostream>

using namespace std;

int main()
{
	//8-1
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr1[i] << " ";
		}
	}
	cout << endl;

	//8-2
	int arr2[10] = { 0,10,20,30,40,50,60,70,80,90 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	return 0;
}