#include <iostream>
#include <string>

using namespace std;

// object는 속성과 기능을 가지고 있음
// data만 넣을 때는 struct를 사용하고 기능까지 넣을 때는 class를 사용하는 것이 일반적임
class Friend
{
	// access classifier (public, private, protected)
	// struct는 accent classifier가 없음
public:
	string m_name;
	int m_age;
	double m_height;
	double m_weight;

	void print()
	{
		cout << m_name << " " << m_age << " " << m_height << " " << m_weight << endl;
	}
};

int main()
{
	// Instanciation
	// jj, kh는 Friend class의 instance임
	Friend jj{"jackjack", 8, 100, 45.8};
	Friend kh{"Kimich", 28, 183.2, 85};

	jj.print(); // jackjack 8 100 45.8
	kh.print(); // Kimich 28 183.2 85

	return 0;
}