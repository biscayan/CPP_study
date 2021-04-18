#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()
#include <random> //c++ 11부터 사용됨

using namespace std;

int main()
{
	//c style

	//seed 설정
	//seed number가 같으면 매번 같은 랜덤결과가 나옴
	//디버깅할때는 seed를 고정시키는게 좋음
	//srand(5323);
	
	//cpu clock에서 시간을 가져옴
	//시간이 가면서 랜덤결과가 달라짐
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 1; i <= 100; i++)
	{
		cout << rand() << '\t';
		
		if (i % 5 == 0)
		{
			cout << endl;
		}
	}
	
	//c++style

	random_device rd;

	//난수 생성 
	//create a mersenne twister
	mt19937 mersenne(rd()); 

	//1부터 6사이의 수가 선택되는데 각각의 수가 모두 동일한 확률을 가짐
	uniform_int_distribution<>dice(1, 6);

	for (int i = 1; i <= 20; i++)
	{
		cout << dice(mersenne) << endl;
	}

	return 0;
}