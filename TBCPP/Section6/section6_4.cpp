#include <iostream>

using namespace std;
void printarray(const int array[], const int length)
{
	for (int i=0; i < length; ++i)
	{
		cout << array[i] << " " << endl;
	}
}

int main()
{
	const int length = 5;
	int array[length] = { 3,5,2,1,4 };

	//selection sort
	for (int start = 0; start < length - 1; ++start)
		for (int next = start+1; next < length; ++next)
			if (array[next] < array[start])
			{
				//swap
				int temp = array[next];
				array[next] = array[start];
				array[start] = temp;

				//swap(array[next],array[start]); 로도 사용 가능
			}

	printarray(array, length);

	return 0;
}