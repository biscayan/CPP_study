//매크로는 거의 대문자로 씀
//매크로를 요즘 많이 쓰지는 않음
//매크로의 기능으로 JACKPOT를 만나면 모두 777로 교체시킴
#define JACKPOT 777
#define MAX(a,b) ((a>b) ? a : b)
#define LIKE_APPLE

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	cout << MAX(1, 2) << endl;

	//max기능은 algorithm library안에 있음
	cout << max(1 + 3, 2) << endl;

	//conditional compilation
	//만약 LIKE_APPLE이라는 매크로가 있으면 (if defined),
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif
	//LIKE_APPLE이라는 매크로가 없으면 (if not defined),
#ifndef LIKE_APPLE
	cout << "ORANGE" << endl;
#endif

}