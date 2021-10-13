#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// 예외처리는 예측하지 못한 상황이 많이 발생할 때를 대비해서 구현
	//try, catch, throw

	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");
		cout << std::sqrt(x) << endl;
	}
	catch (std::string error_message)
	{
		cout << error_message << endl;
	}

	return 0;
}