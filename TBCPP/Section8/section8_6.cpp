#include <iostream>

using namespace std;

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_len;

public:
	// Constructor
	IntArray(const int& len_in)
	{
		m_len = len_in;
		m_arr = new int[m_len];
	}

	// Destructor
	~IntArray()
	{
		if (m_arr != nullptr)
		{
			delete[] m_arr;
		}
	}
};

int main()
{
	IntArray arr(10);

	return 0;
};