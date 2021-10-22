#include <iostream>
#include <memory>

using namespace std;

class A
{
private:
	// �Ҹ��ڿ��� ���� ó�� �Ұ�
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

// �ݺ��� �ȿ��� ����ó���� ����ϸ� ������
// ��� ������ ����ó���� �������� ���� ����