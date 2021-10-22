#include <iostream>
#include <memory>

using namespace std;

class A
{
private:
	// 소멸자에서 예외 처리 불가
	~A()
	{
		throw "error";
	}
public:
};

int main()
{
	try
	{
		int *i = new int[1000000];

		// smart pointer automatically delete the memory
		unique_ptr<int> up_i(i);

		// do something with i
		throw "error";

		// don't need to delete the memory because of the smart pointer
		//delete[] i; 


		A a; // error
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}

// 반복문 안에서 예외처리를 사용하면 위험함
// 모든 오류를 예외처리로 잡으려고 하지 말기