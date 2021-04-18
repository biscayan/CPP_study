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

	// size�� �پ������� capacity�� �״����
	cout << v.size() << endl; // 3
	cout << v.capacity() << endl; // 5
	
	/*
	runtime error �߻�

	cout << v.at(3) << endl;
	cout << v[3] << endl;
	*/

	// resize�� �ص� 4��° ����� �޸𸮸� ���� ������ �ִٴ� ����
	int* ptr = v.data();
	cout << ptr[3] << endl; // 4

	// vector�� �޸𸮸� 1024�� ������ �ְڴٰ� �̸� �˷���
	v.reserve(1024);
	cout << v.size() << endl; // 3
	cout << v.capacity() << endl; // 1024

	// vector�� stackó�� ���
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