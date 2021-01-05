#include <iostream>

using namespace std;

int main()
{
	//�������� �Ҵ�� �޸𸮴� stack�� ����
	//�������� �Ҵ�� �޸𸮴� heap�� ��
	
	//new int�� os�κ��� �޾ƿ� 4����Ʈ�� �������� �ּҸ� �˷���
	//nothrow�� �޸𸮸� �Ҵ���� ���ص� ������ �߻���Ű�� �ʰ� �޸𸮰� �Ҵ�� ������ ��ٸ�
	int* ptr = new (std::nothrow) int{ 7 };

	if (ptr)
	{
		cout << ptr << endl; //0131C1A0
		cout << *ptr << endl; //7
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	//delete�� �Ҵ���� �޸𸮸� os�� ������
	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;

	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	//memory leakage
	/*
	while (true)
	{
		int* ptr2 = new int;
		cout << ptr2 << endl;
	}
	*/

	return 0;
}