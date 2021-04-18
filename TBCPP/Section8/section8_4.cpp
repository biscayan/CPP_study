#include <iostream>

using namespace std;

class Something
{
private:
	int m_i;
	double m_d;
	char m_c;
	int m_arr[5];

public:
	Something()
		: m_i{ 1 }, m_d{ 3.14 }, m_c{'A'}, m_arr{1,2,3,4,5}
	{}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << " " << endl;

		for (auto& e : m_arr)
		{
			cout << e << " ";
		}
		cout << endl;
	}
};

int main()
{
	Something Som;

	Som.print();

	return 0;
}