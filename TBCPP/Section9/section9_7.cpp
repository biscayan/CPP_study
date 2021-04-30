#include <iostream>

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator () (int i);
};

int Accumulator::operator () (int i)
{
	return m_counter += i;
}

int main()
{
	Accumulator acc;

	cout << acc(10) << endl; //10
	cout << acc(20) << endl; //30
	
	return 0;
}