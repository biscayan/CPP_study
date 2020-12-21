#include <iostream>
# include <cstddef>

using namespace std;

void dosomething(double *ptr)
{
	if (ptr == nullptr)
	{
		//do nothing
		cout << "Null pointer, do nothing" << endl;
	}
	else
	{
		//do something
		cout << *ptr << endl;
	}
}

int main()
{
	//c style
	double *ptr1 = 0;
	double *ptr2 = NULL;

	//modern c++ syyle
	double *ptr3 = nullptr;

	dosomething(ptr3); //"Null pointer, do nothing"

	double d = 123.4;
	double *ptr4 = &d;

	dosomething(ptr4); //123.4

	//null pointer밖에 넣을 수 없음
	nullptr_t nptr;

	return 0;
}