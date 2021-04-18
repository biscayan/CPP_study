#include <iostream>
#include <vector>

using namespace std;

void print_stack(const vector<int>& stack)
{
	for (auto& e : stack)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{

	vector<int> v{ 1,2,3,4,5 };

	v.resize(3);

	for (auto& e : v)
	{
		cout << e << " "; // 1 2 3
	}
	cout << endl;

	// size는 줄어들었지만 capacity는 그대로임
	cout << v.size() << endl; // 3
	cout << v.capacity() << endl; // 5
	
	/*
	runtime error 발생

	cout << v.at(3) << endl;
	cout << v[3] << endl;
	*/

	// resize를 해도 4번째 요소의 메모리를 아직 가지고 있다는 증거
	int* ptr = v.data();
	cout << ptr[3] << endl; // 4

	// vector의 메모리를 1024로 가지고 있겠다고 미리 알려줌
	v.reserve(1024);
	cout << v.size() << endl; // 3
	cout << v.capacity() << endl; // 1024

	// vector를 stack처럼 사용
	vector<int> stack;

	// push
	stack.push_back(1);
	stack.push_back(3);
	stack.push_back(5);
	stack.push_back(7);
	stack.push_back(9);

	print_stack(stack); // 1 3 5 7 9

	// pop
	stack.pop_back();
	stack.pop_back();

	print_stack(stack); // 1 3 5

	return 0;
}