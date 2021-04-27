#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10];

public:
	int& operator [] (const int index);
};

int& IntList::operator [] (const int index)
{
	assert(index >= 0);

	return m_list[index];
}

int main()
{
	IntList mylist;
	mylist[3] = 10;

	cout << mylist[3] << endl;

	return 0;
}