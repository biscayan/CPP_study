#include <iostream>
#include <vector>

//alias

int main()
{

	using namespace std;

	//distance_t�� double type�� ����
	typedef double distance_t;

	distance_t home2work;
	distance_t home2school;

	//pairlist_t��� �̸��� ���̴� ���� ������ �������� �۵��� �ٸ�
	//vector<pair<string, int> >���� �ſ� �� �ڷ����� ������ ǥ���ϱ⿡ ����
	typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >;

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	return 0;
}