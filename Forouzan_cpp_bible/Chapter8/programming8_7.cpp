#include<iostream>
#include <math.h>
#include <vector>

using namespace std;

void printVec(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	cout << endl;
}

int main()
{
	vector<int> vec;
	vector<int> odd_vec;
	vector<int> even_vec;

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(rand() % 100 + 1);
	}

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] % 2 == 0)
		{
			even_vec.push_back(vec[i]);
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] % 2 == 1)
		{
			odd_vec.push_back(vec[i]);
		}
	}

	cout << "Vector : "; 
	printVec(vec);

	cout << "Odd Vector : ";
	printVec(odd_vec);

	cout << "Even Vector : ";
	printVec(even_vec);

	return 0;
}