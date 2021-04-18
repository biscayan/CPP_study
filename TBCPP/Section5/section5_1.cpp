#include <iostream>

int main()
{
	using namespace std;

	cout << "I love you" << endl;
	
	//긴급하게 중단, 뒤의 코드는 실행되지 않음
	exit(0);

	cout << "I love you too" << endl;

	return 0;
}