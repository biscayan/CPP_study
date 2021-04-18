#include <iostream>
#include <string>

using namespace std;

// object�� �Ӽ��� ����� ������ ����
// data�� ���� ���� struct�� ����ϰ� ��ɱ��� ���� ���� class�� ����ϴ� ���� �Ϲ�����
class Friend
{
	// access classifier (public, private, protected)
	// struct�� accent classifier�� ����
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
	// jj, kh�� Friend class�� instance��
	Friend jj{"jackjack", 8, 100, 45.8};
	Friend kh{"Kimich", 28, 183.2, 85};

	jj.print(); // jackjack 8 100 45.8
	kh.print(); // Kimich 28 183.2 85

	return 0;
}