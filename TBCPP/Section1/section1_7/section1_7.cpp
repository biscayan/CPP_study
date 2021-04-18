#include <iostream>

using namespace std;

int main_lec()
{
	int x(0); //x=0;과 같음

	cout << x << "->" << &x << endl; //&는 메모리 주소를 알려줌

	//{}를 통해 영역을 구분
	{
		//지역변수 설정, 지역변수는 영역을 벗어나면 사용할 수 없음
		//앞의 x와 다른 x임, 메모리 주소가 다름
		int x = 0;

		cout << x << "->" << &x << endl;
	}

	{
		int x = 1;

		cout << x << "->" << &x << endl;
	}
	return 0;
}