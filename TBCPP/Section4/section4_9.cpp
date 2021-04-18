#include <iostream>
#include <vector>

//alias

int main()
{

	using namespace std;

	//distance_t는 double type을 가짐
	typedef double distance_t;

	distance_t home2work;
	distance_t home2school;

	//pairlist_t라는 이름을 붙이는 것은 같지만 내부적인 작동은 다름
	//vector<pair<string, int> >같이 매우 긴 자료형을 간단히 표현하기에 좋음
	typedef vector<pair<string, int> > pairlist_t;
	using pairlist_t = vector<pair<string, int> >;

	pairlist_t pairlist1;
	pairlist_t pairlist2;

	return 0;
}