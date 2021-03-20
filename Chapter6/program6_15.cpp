#include <iostream>

using namespace std;

void swap(int &fst, int &snd)
{
	int tmp;

	tmp = fst;
	fst = snd;
	snd = tmp;
}

int main()
{
	int first, second;

	first = 1, second = 2;

	cout << "Before swap -> First : " << first << ", Second : " << second << endl;

	swap(first, second);

	cout << "After swap -> First : " << first << ", Second : " << second << endl;

	return 0;
}