#include <iostream> //cout, cin, endl
#include <cstdio> //printf

int main_cout()
{
	//cout은 std라는 이름공간 안에 저장되어 있음
	// <<는 stream을 의미   원하는 문장 -> stream -> cout
	std::cout << "I love this lecture" << std::endl;
	
	int x = 1024;
	double pi = 3.141592;

	std::cout << "x is " << x << "\n"; //endl 대신에 \n 사용 가능
	std::cout << "pi is " << pi << std::endl;

	// \t는 빈 공간 삽입
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	//앞으로 std를 붙이지 않아도 됨
	using namespace std;
	
	//audio(소리)를 출력
	cout << "\a";

	return 0;
}