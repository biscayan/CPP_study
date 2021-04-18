#include <iostream>

int main()
{
	using namespace std;

	//++는 1을 더하는 연산자, --는 1을 빼는 연산자

	//중요!! ++ 또는 --가 붙는 위치를 기억해야함
	int x1 = 6, y1 = 6;
	cout << x1 << " " << y1 << endl; //6,6
	cout << ++x1 << " " << --y1 << endl; //x1, y1을 연산하고 그 값을 stream으로 보냄 //7,5
	cout << x1 << " " << y1 << endl; //7,5

	int x2 = 6, y2 = 6;
	cout << x2 << " " << y2 << endl; //6,6
	cout << x2++ << " " << y2-- << endl; //x2, y2를 stream으로 보내고 그 이후에 연산을 진행 //6,6
	cout << x2 << " " << y2 << endl; //7,5

	return 0;
}